
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_getaddrinfo_request {int timeout; struct evdns_getaddrinfo_request* cname_result; scalar_t__ pending_result; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct evdns_getaddrinfo_request*) ;

__attribute__((used)) static void
FUNC_3(struct evdns_getaddrinfo_request *VAR_0)
{


 if (VAR_0->pending_result)
  FUNC_1(VAR_0->pending_result);
 if (VAR_0->cname_result)
  FUNC_2(VAR_0->cname_result);
 FUNC_0(&VAR_0->timeout);
 FUNC_2(VAR_0);
 return;
}
