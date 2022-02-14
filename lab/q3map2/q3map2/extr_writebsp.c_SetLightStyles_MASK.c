
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_8__ {struct TYPE_8__* value; struct TYPE_8__* key; struct TYPE_8__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_9__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (TYPE_2__*,char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char const*) ;

void FUNC_10( void ){
 int VAR_9, VAR_10, VAR_11, VAR_12;
 qboolean VAR_13;
 qboolean VAR_14;
 const char *VAR_15;
 entity_t *VAR_16;
 epair_t *VAR_17, *VAR_18;
 char VAR_19[ 10 ];
 char VAR_20[ VAR_2 ][ 64 ];
 int VAR_21[ VAR_2 ];



 VAR_15 = FUNC_5( &VAR_4[ 0 ], "_keepLights" );
 VAR_13 = ( VAR_15[ 0 ] == '1' ) ? VAR_8 : VAR_7;


 VAR_12 = 0;
 for ( VAR_9 = 1; VAR_9 < VAR_5; VAR_9++ )
 {
  VAR_16 = &VAR_4[ VAR_9 ];

  VAR_15 = FUNC_5( VAR_16, "classname" );
  if ( FUNC_2( VAR_15, "light", 5 ) ) {
   continue;
  }
  VAR_15 = FUNC_5( VAR_16, "noradiosity" );
  VAR_14 = ( VAR_15[ 0 ] == '1' ) ? VAR_8 : VAR_7;
  VAR_15 = FUNC_5( VAR_16, "targetname" );
  if ( VAR_15[ 0 ] == '\0' ) {



   if ( VAR_13 == VAR_7 && VAR_14 == VAR_7 ) {
    VAR_17 = VAR_16->epairs;
    while ( VAR_17 != ((void*)0) )
    {
     VAR_18 = VAR_17->next;
     FUNC_6( VAR_17->key );
     FUNC_6( VAR_17->value );
     FUNC_6( VAR_17 );
     VAR_17 = VAR_18;
    }
    VAR_16->epairs = ((void*)0);
    VAR_6++;
   }


   continue;
  }


  VAR_11 = FUNC_1( VAR_16, "style" );
  if ( VAR_11 < VAR_1 || VAR_11 > VAR_0 ) {
   FUNC_0( "Invalid lightstyle (%d) on entity %d", VAR_11, VAR_9 );
  }


  for ( VAR_10 = 0; VAR_10 < VAR_12; VAR_10++ )
   if ( VAR_21[ VAR_10 ] == VAR_11 && !FUNC_8( VAR_20[ VAR_10 ], VAR_15 ) ) {
    break;
   }


  if ( VAR_10 >= VAR_12 ) {
   if ( VAR_12 == VAR_2 ) {
    FUNC_0( "MAX_SWITCHED_LIGHTS (%d) exceeded, reduce the number of lights with targetnames", VAR_2 );
   }
   FUNC_9( VAR_20[ VAR_10 ], VAR_15 );
   VAR_21[ VAR_10 ] = VAR_11;
   VAR_12++;
  }


  FUNC_7( VAR_19, "%d", 32 + VAR_10 );
  FUNC_3( VAR_16, "style", VAR_19 );


  if ( VAR_11 != VAR_1 ) {
   FUNC_7( VAR_19, "%d", VAR_11 );
   FUNC_3( VAR_16, "switch_style", VAR_19 );
  }
 }


 FUNC_4( VAR_3, "%9d light entities stripped\n", VAR_6 );
}
