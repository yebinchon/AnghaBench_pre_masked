
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rpc_page_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(rpc_page_t *VAR_0) {
  if (VAR_0) {
    rpc_page_t *VAR_1 = VAR_0;
    while (*VAR_1) {
      FUNC_1(*VAR_1++);
    }
    FUNC_0(VAR_0);
  }
}
