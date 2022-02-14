
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int query_start_time; int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;

int FUNC_1 (struct connection *VAR_1) {
  VAR_1->flags &= ~VAR_0;
  VAR_1->query_start_time = FUNC_0();
  return 0;
}
