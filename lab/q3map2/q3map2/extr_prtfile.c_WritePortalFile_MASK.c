
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headnode; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_8 (char*,char*,char*) ;

void FUNC_9( tree_t *VAR_7 ){
 char VAR_8[1024];

 FUNC_1( VAR_1,"--- WritePortalFile ---\n" );


 FUNC_8( VAR_8, "%s.prt", VAR_6 );
 FUNC_2( "writing %s\n", VAR_8 );
 VAR_5 = FUNC_6( VAR_8, "w" );
 if ( !VAR_5 ) {
  FUNC_0( "Error opening %s", VAR_8 );
 }

 FUNC_7( VAR_5, "%s\n", VAR_0 );
 FUNC_7( VAR_5, "%i\n", VAR_3 );
 FUNC_7( VAR_5, "%i\n", VAR_4 );
 FUNC_7( VAR_5, "%i\n", VAR_2 );

 FUNC_4( VAR_7->headnode );
 FUNC_3( VAR_7->headnode );

 FUNC_5( VAR_5 );
}
