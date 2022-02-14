
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headnode; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2( tree_t *VAR_4 ) {
 VAR_2 = 0;
 VAR_3 = 0;
 VAR_1 = 0;

 FUNC_1( VAR_0,"--- NumberClusters ---\n" );


 FUNC_0( VAR_4->headnode );

 FUNC_1( VAR_0, "%9d visclusters\n", VAR_2 );
 FUNC_1( VAR_0, "%9d visportals\n", VAR_3 );
 FUNC_1( VAR_0, "%9d solidfaces\n", VAR_1 );
}
