
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {int (* merge_store ) (struct connection*,int,char const*,int,int,int,int) ;} ;
struct connection {int dummy; } ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 int FUNC_1 (struct connection*,int,char const*,int,int,int,int) ;

int FUNC_2 (struct connection *VAR_0, int VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  struct mc_proxy_merge_functions *VAR_7 = FUNC_0 ();
  return VAR_7->merge_store (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
