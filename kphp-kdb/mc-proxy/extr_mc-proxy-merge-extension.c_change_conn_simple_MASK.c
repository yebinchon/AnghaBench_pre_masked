
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
struct conn_target {int custom_field; } ;


 int FUNC_0 (int) ;

void FUNC_1 (struct conn_target *VAR_0, struct connection *VAR_1) {
  FUNC_0 (VAR_0->custom_field < 0);
  VAR_0->custom_field = -VAR_0->custom_field;
}
