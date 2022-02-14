
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
struct conn_target {int dummy; } ;


 int FUNC_0 (struct conn_target*) ;
 struct connection* FUNC_1 (struct conn_target*,int) ;

struct connection *FUNC_2 (struct conn_target *VAR_0) {
  struct connection *VAR_1 = FUNC_1 (VAR_0, 0);

  if (VAR_1 == ((void*)0)) {
    FUNC_0 (VAR_0);
    VAR_1 = FUNC_1 (VAR_0, 1);
  }

  return VAR_1;
}
