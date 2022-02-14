
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {int (* merge_end_query ) (struct connection*,char const*,int,void*,struct gather_entry*,int) ;} ;
struct gather_entry {int dummy; } ;
struct connection {int dummy; } ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 int FUNC_1 (struct connection*,char const*,int,void*,struct gather_entry*,int) ;

int FUNC_2 (struct connection *VAR_0, const char *VAR_1, int VAR_2, void *VAR_3, struct gather_entry *VAR_4, int VAR_5) {
  struct mc_proxy_merge_functions *VAR_6 = FUNC_0 ();
  return VAR_6->merge_end_query (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
