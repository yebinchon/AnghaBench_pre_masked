
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {scalar_t__ ai_flags; } ;
struct evdns_base {int dummy; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*,struct evdns_base*,int ,char const*,int) ;
 int FUNC_1 (struct bufferevent*,struct evdns_base*,struct evutil_addrinfo*,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct bufferevent *VAR_1, struct evdns_base *VAR_2,
    struct evutil_addrinfo *VAR_3, const char *VAR_4, int VAR_5)
{
 if (VAR_3->ai_flags)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_0, VAR_4, VAR_5);
}
