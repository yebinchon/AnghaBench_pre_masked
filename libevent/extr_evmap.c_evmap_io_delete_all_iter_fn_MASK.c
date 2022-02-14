
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {int events; } ;
struct event_base {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct event_base *VAR_0, evutil_socket_t VAR_1,
    struct evmap_io *VAR_2, void *VAR_3)
{
 return FUNC_0(&VAR_2->events);
}
