
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {void* (* store_gather_extra ) (char const*,int) ;} ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 void* FUNC_1 (char const*,int) ;

void *FUNC_2 (const char *VAR_0, int VAR_1) {
  struct mc_proxy_merge_functions *VAR_2 = FUNC_0 ();
  return VAR_2->store_gather_extra (VAR_0, VAR_1);
}
