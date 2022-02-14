
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {scalar_t__ max_headers_size; } ;
typedef scalar_t__ ev_ssize_t ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct evhttp_connection *VAR_1,
    ev_ssize_t VAR_2)
{
 if (VAR_2<0)
  VAR_1->max_headers_size = VAR_0;
 else
  VAR_1->max_headers_size = VAR_2;
}
