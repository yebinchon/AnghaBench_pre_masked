
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* origin; double* color; scalar_t__ add; struct TYPE_3__* next; } ;
typedef TYPE_1__ light_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,int,double,double,double,double,double,double) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int ) ;

void FUNC_10( void ){

 FUNC_2( VAR_1, "--- RadCreateDiffuseLights ---\n" );
 VAR_9 = 0;
 VAR_8 = 0;
 VAR_7 = 0;
 VAR_11 = 0;
 VAR_10 = 0;
 VAR_5 = 0;


 FUNC_0( VAR_6, VAR_12, VAR_0 );


 if ( VAR_2 ) {
  char VAR_14[ 1024 ], VAR_15[ 64 ];
  FILE *VAR_16;
  light_t *VAR_17;

  FUNC_9( VAR_14, VAR_13 );
  FUNC_1( VAR_14 );
  FUNC_7( VAR_15, "_bounce_%03d.map", VAR_3 );
  FUNC_8( VAR_14, VAR_15 );
  VAR_16 = FUNC_5( VAR_14, "wb" );
  FUNC_3( "Writing %s...\n", VAR_14 );
  if ( VAR_16 ) {
   for ( VAR_17 = VAR_4; VAR_17; VAR_17 = VAR_17->next )
   {
    FUNC_6( VAR_16,
       "{\n"
       "\"classname\" \"light\"\n"
       "\"light\" \"%d\"\n"
       "\"origin\" \"%.0f %.0f %.0f\"\n"
       "\"_color\" \"%.3f %.3f %.3f\"\n"
       "}\n",

       (int) VAR_17->add,

       VAR_17->origin[ 0 ],
       VAR_17->origin[ 1 ],
       VAR_17->origin[ 2 ],

       VAR_17->color[ 0 ],
       VAR_17->color[ 1 ],
       VAR_17->color[ 2 ] );
   }
   FUNC_4( VAR_16 );
  }
 }


 VAR_3++;


 FUNC_3( "%8d diffuse surfaces\n", VAR_9 );
 FUNC_2( VAR_1, "%8d total diffuse lights\n", VAR_8 );
 FUNC_2( VAR_1, "%8d brush diffuse lights\n", VAR_7 );
 FUNC_2( VAR_1, "%8d patch diffuse lights\n", VAR_10 );
 FUNC_2( VAR_1, "%8d triangle diffuse lights\n", VAR_11 );
}
