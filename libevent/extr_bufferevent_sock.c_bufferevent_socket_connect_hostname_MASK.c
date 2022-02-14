
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int ai_family; int ai_socktype; int ai_protocol; } ;
struct evdns_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int hint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*,struct evdns_base*,struct evutil_addrinfo*,char const*,int) ;
 int FUNC_1 (struct evutil_addrinfo*,int ,int) ;

int
FUNC_2(struct bufferevent *VAR_2,
    struct evdns_base *VAR_3, int VAR_4, const char *VAR_5, int VAR_6)
{
 struct evutil_addrinfo VAR_7;
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ai_family = VAR_4;
 VAR_7.ai_protocol = VAR_0;
 VAR_7.ai_socktype = VAR_1;

 return FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_5, VAR_6);
}
