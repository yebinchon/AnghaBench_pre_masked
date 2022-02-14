
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {double last_query_time; } ;


 double FUNC_0 () ;

int FUNC_1 (struct connection *VAR_0) {
  VAR_0->last_query_time = FUNC_0() * 0.1;
  return 0;
}
