
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {int (* generate_preget_query ) (char*,char const*,int,void*,int) ;} ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 int FUNC_1 (char*,char const*,int,void*,int) ;

int FUNC_2 (char *VAR_0, const char *VAR_1, int VAR_2, void *VAR_3, int VAR_4) {
  struct mc_proxy_merge_functions *VAR_5 = FUNC_0 ();
  return VAR_5->generate_preget_query (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
