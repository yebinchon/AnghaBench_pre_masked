
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_proxy_merge_functions {void (* load_saved_data ) (struct connection*) ;} ;
struct connection {int dummy; } ;


 struct mc_proxy_merge_functions* FUNC_0 () ;
 void FUNC_1 (struct connection*) ;

void FUNC_2 (struct connection *VAR_0) {
  struct mc_proxy_merge_functions *VAR_1 = FUNC_0 ();
  return VAR_1->load_saved_data (VAR_0);
}
