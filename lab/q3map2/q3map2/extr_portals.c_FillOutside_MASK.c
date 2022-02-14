
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int node_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3( node_t *VAR_4 ){
 VAR_2 = 0;
 VAR_1 = 0;
 VAR_3 = 0;
 FUNC_1( VAR_0,"--- FillOutside ---\n" );
 FUNC_0( VAR_4 );
 FUNC_1( VAR_0,"%9d solid leafs\n", VAR_3 );
 FUNC_2( "%9d leafs filled\n", VAR_2 );
 FUNC_1( VAR_0, "%9d inside leafs\n", VAR_1 );
}
