
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int dummy; } ;
struct evdns_getaddrinfo_request {int dummy; } ;
struct evdns_base {int dummy; } ;


 struct evdns_getaddrinfo_request* FUNC_0 (struct evdns_base*,char const*,char const*,struct evutil_addrinfo const*,void (*) (int,struct evutil_addrinfo*,void*),void*) ;
 int FUNC_1 (char const*,char const*,struct evutil_addrinfo const*,struct evutil_addrinfo**) ;

struct evdns_getaddrinfo_request *FUNC_2(
    struct evdns_base *VAR_0,
    const char *VAR_1, const char *VAR_2,
    const struct evutil_addrinfo *VAR_3,
    void (*VAR_4)(int, struct evutil_addrinfo *, void *), void *VAR_5)
{
 if (VAR_0 && &FUNC_0) {
  return FUNC_0(
   VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  struct evutil_addrinfo *VAR_6=((void*)0);
  int VAR_7;
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6);
  VAR_4(VAR_7, VAR_6, VAR_5);
  return ((void*)0);
 }
}
