
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {char* resetString; int flags; double value; int * string; int integer; int modificationCount; void* modified; int * latchedString; } ;
typedef TYPE_1__ cvar_t ;
struct TYPE_8__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*) ;
 void* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (char const*,char const*,int ) ;
 char* FUNC_4 (TYPE_1__*,char const*,void*) ;
 int FUNC_5 (char const*) ;
 double VAR_5 ;
 int FUNC_6 (int *) ;
 double FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_9 (char const*,int *) ;
 char* VAR_9 ;

cvar_t *FUNC_10( const char *VAR_10, const char *VAR_11, qboolean VAR_12 ) {
 cvar_t *VAR_13;
 double VAR_14;



 if ( !FUNC_5( VAR_10 ) ) {
  FUNC_0("invalid cvar name string: %s\n", VAR_10 );
  VAR_10 = "BADNAME";
 }
 VAR_13 = FUNC_2 (VAR_10);
 if (!VAR_13) {
  if ( !VAR_11 ) {
   return ((void*)0);
  }

  if ( !VAR_12 ) {
   return FUNC_3( VAR_10, VAR_11, VAR_4 );
  } else {
   return FUNC_3 (VAR_10, VAR_11, 0);
  }
 }

 if (!VAR_11 ) {
  VAR_11 = VAR_13->resetString;
 }

 VAR_11 = FUNC_4(VAR_13, VAR_11, VAR_8);

 if((VAR_13->flags & VAR_2) && VAR_13->latchedString)
 {
  if(!FUNC_9(VAR_11, VAR_13->string))
  {
   FUNC_6(VAR_13->latchedString);
   VAR_13->latchedString = ((void*)0);
   return VAR_13;
  }

  if(!FUNC_9(VAR_11, VAR_13->latchedString))
   return VAR_13;
 }
 else if(!FUNC_9(VAR_11, VAR_13->string))
  return VAR_13;


 VAR_7 |= VAR_13->flags;

 if (!VAR_12)
 {
  if (VAR_13->flags & VAR_3)
  {
   FUNC_0 ("%s is read only.\n", VAR_10);
   return VAR_13;
  }

  if (VAR_13->flags & VAR_1)
  {
   FUNC_0 ("%s is write protected.\n", VAR_10);
   return VAR_13;
  }

  if ((VAR_13->flags & VAR_0) && !VAR_6->integer)
  {
   FUNC_0 ("%s is cheat protected.\n", VAR_10);
   return VAR_13;
  }

  if (VAR_13->flags & VAR_2)
  {
   if (VAR_13->latchedString)
   {
    if (FUNC_9(VAR_11, VAR_13->latchedString) == 0)
     return VAR_13;
    FUNC_6 (VAR_13->latchedString);
   }
   else
   {
    if (FUNC_9(VAR_11, VAR_13->string) == 0)
     return VAR_13;
   }

   FUNC_0 ("%s will be changed upon restarting.\n", VAR_10);
   VAR_13->latchedString = FUNC_1(VAR_11);
   VAR_13->modified = VAR_8;
   VAR_13->modificationCount++;
   return VAR_13;
  }
 }
 else
 {
  if (VAR_13->latchedString)
  {
   FUNC_6 (VAR_13->latchedString);
   VAR_13->latchedString = ((void*)0);
  }
 }

 if (!FUNC_9(VAR_11, VAR_13->string))
  return VAR_13;

 VAR_13->modified = VAR_8;
 VAR_13->modificationCount++;

 FUNC_6 (VAR_13->string);

 VAR_13->string = FUNC_1(VAR_11);
 VAR_14 = FUNC_7(VAR_13->string);


 if (-VAR_5 <= VAR_14 && VAR_14 <= VAR_5) {
  VAR_13->value = VAR_14;
 }

 VAR_13->integer = FUNC_8 (VAR_13->string);

 return VAR_13;
}
