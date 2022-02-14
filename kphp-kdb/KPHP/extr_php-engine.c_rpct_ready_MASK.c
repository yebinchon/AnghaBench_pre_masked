
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
struct conn_target {int dummy; } ;


 struct conn_target* VAR_0 ;
 struct connection* FUNC_0 (struct conn_target*,int ) ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (int VAR_1) {
  if (VAR_1 == -1) {
    return -1;
  }
  struct conn_target *VAR_2 = &VAR_0[VAR_1];
  struct connection *VAR_3 = FUNC_0 (VAR_2, 0);
  if (VAR_3 == ((void*)0)) {
    return -2;
  }
  FUNC_1 (VAR_3);
  return 0;
}
