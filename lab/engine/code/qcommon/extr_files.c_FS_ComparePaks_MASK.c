
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int st ;
struct TYPE_5__ {TYPE_1__* pack; struct TYPE_5__* next; } ;
typedef TYPE_2__ searchpath_t ;
typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ checksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,int,char*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 char** VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;

qboolean FUNC_8( char *VAR_11, int VAR_12, qboolean VAR_13 ) {
 searchpath_t *VAR_14;
 qboolean VAR_15;
 char *VAR_16 = VAR_11;
 int VAR_17;

 if (!VAR_5)
  return VAR_9;

 *VAR_11 = 0;

 for ( VAR_17 = 0 ; VAR_17 < VAR_5 ; VAR_17++ )
 {

  VAR_15 = VAR_9;


  if(FUNC_4(VAR_7[VAR_17], VAR_0, VAR_3)

    || FUNC_4(VAR_7[VAR_17], VAR_1, VAR_4)

   )
  {
   continue;
  }


  if(FUNC_2(VAR_7[VAR_17]))
  {
   FUNC_0("WARNING: Invalid download name %s\n", VAR_7[VAR_17]);
   continue;
  }

  for ( VAR_14 = VAR_6 ; VAR_14 ; VAR_14 = VAR_14->next ) {
   if ( VAR_14->pack && VAR_14->pack->checksum == VAR_8[VAR_17] ) {
    VAR_15 = VAR_10;
    break;
   }
  }

  if ( !VAR_15 && VAR_7[VAR_17] && *VAR_7[VAR_17] ) {


   if (VAR_13)
   {




    VAR_16 += FUNC_6(VAR_16);


    FUNC_5( VAR_11, VAR_12, "@");
    FUNC_5( VAR_11, VAR_12, VAR_7[VAR_17] );
    FUNC_5( VAR_11, VAR_12, ".pk3" );


    FUNC_5( VAR_11, VAR_12, "@");

    if ( FUNC_3( FUNC_7( "%s.pk3", VAR_7[VAR_17] ) ) )
    {
     char VAR_18[VAR_2];


     FUNC_1( VAR_18, sizeof( VAR_18 ), "%s.%08x.pk3", VAR_7[VAR_17], VAR_8[VAR_17] );
     FUNC_5( VAR_11, VAR_12, VAR_18 );
    }
    else
    {
     FUNC_5( VAR_11, VAR_12, VAR_7[VAR_17] );
     FUNC_5( VAR_11, VAR_12, ".pk3" );
    }



    if(FUNC_6(VAR_16) + (VAR_16 - VAR_11) >= VAR_12 - 1)
    {
     *VAR_16 = '\0';
     break;
    }
   }
   else
   {
    FUNC_5( VAR_11, VAR_12, VAR_7[VAR_17] );
    FUNC_5( VAR_11, VAR_12, ".pk3" );

    if ( FUNC_3( FUNC_7( "%s.pk3", VAR_7[VAR_17] ) ) )
    {
     FUNC_5( VAR_11, VAR_12, " (local file exists with wrong checksum)");
    }
    FUNC_5( VAR_11, VAR_12, "\n");
   }
  }
 }

 if ( *VAR_11 ) {
  return VAR_10;
 }

 return VAR_9;
}
