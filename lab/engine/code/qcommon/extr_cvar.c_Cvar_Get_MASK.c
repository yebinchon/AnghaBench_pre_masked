
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; char* resetString; char* latchedString; int modificationCount; long hashIndex; struct TYPE_8__* hashPrev; struct TYPE_8__* hashNext; struct TYPE_8__* prev; struct TYPE_8__* next; int * description; int validate; void* string; int integer; int value; int modified; void* name; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*) ;
 void* FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int ) ;
 char* FUNC_6 (TYPE_1__*,char const*,int ) ;
 int FUNC_7 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 long FUNC_11 (char const*) ;
 TYPE_1__** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (char*,char const*) ;

cvar_t *FUNC_13( const char *VAR_14, const char *VAR_15, int VAR_16 ) {
 cvar_t *VAR_17;
 long VAR_18;
 int VAR_19;

 if ( !VAR_14 || ! VAR_15 ) {
  FUNC_1( VAR_4, "Cvar_Get: NULL parameter" );
 }

 if ( !FUNC_7( VAR_14 ) ) {
  FUNC_2("invalid cvar name string: %s\n", VAR_14 );
  VAR_14 = "BADNAME";
 }
 VAR_17 = FUNC_4 (VAR_14);

 if(VAR_17)
 {
  VAR_15 = FUNC_6(VAR_17, VAR_15, VAR_12);


  if(VAR_17->flags & VAR_3)
  {
   if(!(VAR_16 & VAR_3))
    VAR_17->flags &= ~VAR_3;
  }
  else if (!(VAR_17->flags & VAR_2))
  {
   if(VAR_16 & VAR_3)
    VAR_16 &= ~VAR_3;
  }



  if(VAR_17->flags & VAR_2)
  {
   VAR_17->flags &= ~VAR_2;
   FUNC_8( VAR_17->resetString );
   VAR_17->resetString = FUNC_3( VAR_15 );

   if(VAR_16 & VAR_0)
   {



    if(VAR_17->latchedString)
     FUNC_8(VAR_17->latchedString);

    VAR_17->latchedString = FUNC_3(VAR_15);
   }
  }


  if(VAR_17->flags & VAR_1)
  {
   if(!(VAR_16 & VAR_1))
    VAR_17->flags &= ~VAR_1;
  }
  else
  {
   if(VAR_16 & VAR_1)
    VAR_16 &= ~VAR_1;
  }

  VAR_17->flags |= VAR_16;


  if ( !VAR_17->resetString[0] ) {

   FUNC_8( VAR_17->resetString );
   VAR_17->resetString = FUNC_3( VAR_15 );
  } else if ( VAR_15[0] && FUNC_12( VAR_17->resetString, VAR_15 ) ) {
   FUNC_0( "Warning: cvar \"%s\" given initial values: \"%s\" and \"%s\"\n",
    VAR_14, VAR_17->resetString, VAR_15 );
  }

  if ( VAR_17->latchedString ) {
   char *VAR_20;

   VAR_20 = VAR_17->latchedString;
   VAR_17->latchedString = ((void*)0);
   FUNC_5( VAR_14, VAR_20, VAR_13 );
   FUNC_8( VAR_20 );
  }



  VAR_8 |= VAR_16;

  return VAR_17;
 }






 for(VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
 {
  if(!VAR_7[VAR_19].name)
   break;
 }

 if(VAR_19 >= VAR_5)
 {
  if(!VAR_6)
   FUNC_1(VAR_4, "Error: Too many cvars, cannot create a new one!");

  return ((void*)0);
 }

 VAR_17 = &VAR_7[VAR_19];

 if(VAR_19 >= VAR_9)
  VAR_9 = VAR_19 + 1;

 VAR_17->name = FUNC_3 (VAR_14);
 VAR_17->string = FUNC_3 (VAR_15);
 VAR_17->modified = VAR_13;
 VAR_17->modificationCount = 1;
 VAR_17->value = FUNC_9 (VAR_17->string);
 VAR_17->integer = FUNC_10(VAR_17->string);
 VAR_17->resetString = FUNC_3( VAR_15 );
 VAR_17->validate = VAR_12;
 VAR_17->description = ((void*)0);


 VAR_17->next = VAR_10;
 if(VAR_10)
  VAR_10->prev = VAR_17;

 VAR_17->prev = ((void*)0);
 VAR_10 = VAR_17;

 VAR_17->flags = VAR_16;

 VAR_8 |= VAR_17->flags;

 VAR_18 = FUNC_11(VAR_14);
 VAR_17->hashIndex = VAR_18;

 VAR_17->hashNext = VAR_11[VAR_18];
 if(VAR_11[VAR_18])
  VAR_11[VAR_18]->hashPrev = VAR_17;

 VAR_17->hashPrev = ((void*)0);
 VAR_11[VAR_18] = VAR_17;

 return VAR_17;
}
