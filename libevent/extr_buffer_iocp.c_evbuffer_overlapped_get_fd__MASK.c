
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_overlapped {int fd; } ;
struct evbuffer {int dummy; } ;
typedef int evutil_socket_t ;


 struct evbuffer_overlapped* FUNC_0 (struct evbuffer*) ;

evutil_socket_t
FUNC_1(struct evbuffer *VAR_0)
{
 struct evbuffer_overlapped *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->fd : -1;
}
