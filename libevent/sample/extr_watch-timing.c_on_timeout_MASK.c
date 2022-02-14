
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ,double) ;
 int FUNC_1 (char*,double,double,double,double) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 FUNC_1("durations: [p50 = %fs, p95 = %fs], delays: [p50 = %fs, p95 = %fs]\n",
  FUNC_0(VAR_1, 0.5),
  FUNC_0(VAR_1, 0.95),
  FUNC_0(VAR_0, 0.5),
  FUNC_0(VAR_0, 0.95));
}
