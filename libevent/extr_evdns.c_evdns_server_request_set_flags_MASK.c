
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct server_request {TYPE_1__ base; } ;
struct evdns_server_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct server_request* FUNC_0 (struct evdns_server_request*) ;

void
FUNC_1(struct evdns_server_request *VAR_2, int VAR_3)
{
 struct server_request *VAR_4 = FUNC_0(VAR_2);
 VAR_4->base.flags &= ~(VAR_0|VAR_1);
 VAR_4->base.flags |= VAR_3;
}
