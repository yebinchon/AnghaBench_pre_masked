
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {int (* check_query ) (int,char const*,int) ;} ;


 int FUNC_0 (int ,char*) ;
 struct mc_proxy_merge_functions* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,char const*,int) ;
 scalar_t__ VAR_1 ;

int FUNC_3 (int VAR_2, const char *VAR_3, int VAR_4) {
  if (VAR_1) {
    FUNC_0 (VAR_0, "check_query\n");
  }
  struct mc_proxy_merge_functions *VAR_5 = FUNC_1 ();
  return VAR_5->check_query (VAR_2, VAR_3, VAR_4);
}
