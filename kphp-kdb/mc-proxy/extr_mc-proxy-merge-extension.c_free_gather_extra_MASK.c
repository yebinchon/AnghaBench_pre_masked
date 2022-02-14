
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {int (* free_gather_extra ) (void*) ;} ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 int FUNC_1 (void*) ;

int FUNC_2 (void *VAR_0) {
  struct mc_proxy_merge_functions *VAR_1 = FUNC_0 ();
  return VAR_1->free_gather_extra (VAR_0);
}
