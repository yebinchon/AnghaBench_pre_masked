
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_extension {scalar_t__ num; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct rpc_extension** VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1 (struct rpc_extension *VAR_3) {
  FUNC_0 (VAR_2 < VAR_0);
  VAR_3->num = VAR_2;
  VAR_1[VAR_2 ++] = VAR_3;
}
