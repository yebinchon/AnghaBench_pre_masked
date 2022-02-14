
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,char*) ;
 int VAR_4 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ) ;

void FUNC_9( void ){
        char VAR_5[ 1024 ];
        FILE *VAR_6;


        FUNC_2( VAR_0, "--- ExportEntities ---\n" );


        FUNC_8( VAR_5, VAR_4 );
        FUNC_1( VAR_5 );
        FUNC_7( VAR_5, ".ent" );


        if ( VAR_3 == 0 ) {
   FUNC_2( VAR_1, "WARNING: No BSP entity data. aborting...\n" );
   return;
        }


        FUNC_3( "Writing %s\n", VAR_5 );
        FUNC_2( VAR_0, "(%d bytes)\n", VAR_3 );
        VAR_6 = FUNC_5( VAR_5, "w" );

        if ( VAR_6 == ((void*)0) ) {
                FUNC_0( "Unable to open %s for writing", VAR_5 );
        }

        FUNC_6( VAR_6, "%s\n", VAR_2 );
        FUNC_4( VAR_6 );
}
