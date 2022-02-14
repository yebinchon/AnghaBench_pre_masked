
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int dummy; } ;
struct event_base {int dummy; } ;
struct evdns_base {int dummy; } ;
typedef int ev_uint16_t ;


 struct evhttp_connection* FUNC_0 (struct event_base*,struct evdns_base*,int *,char const*,int ) ;

struct evhttp_connection *
FUNC_1(struct event_base *VAR_0, struct evdns_base *VAR_1,
    const char *VAR_2, ev_uint16_t VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, ((void*)0), VAR_2, VAR_3);
}
