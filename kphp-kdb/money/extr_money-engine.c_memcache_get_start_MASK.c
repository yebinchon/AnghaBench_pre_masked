
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int query_start_time; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1 (struct connection *VAR_2) {
  VAR_2->flags &= ~VAR_1;
  VAR_2->query_start_time = FUNC_0 (VAR_0);
  return 0;
}
