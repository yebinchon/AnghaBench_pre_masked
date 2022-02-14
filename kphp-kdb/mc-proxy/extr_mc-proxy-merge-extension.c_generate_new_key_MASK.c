
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {int (* generate_new_key ) (char*,char*,int,void*) ;} ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 int FUNC_1 (char*,char*,int,void*) ;

int FUNC_2 (char *VAR_0, char *VAR_1, int VAR_2, void *VAR_3) {
  struct mc_proxy_merge_functions *VAR_4 = FUNC_0 ();
  return VAR_4->generate_new_key (VAR_0, VAR_1, VAR_2, VAR_3);
}
