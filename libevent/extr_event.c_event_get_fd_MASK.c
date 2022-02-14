
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int ev_fd; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event const*) ;

evutil_socket_t
FUNC_1(const struct event *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->ev_fd;
}
