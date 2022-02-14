
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_server_port {scalar_t__ refcnt; int closing; } ;


 int FUNC_0 (struct evdns_server_port*) ;
 int FUNC_1 (struct evdns_server_port*) ;
 int FUNC_2 (struct evdns_server_port*) ;

void
FUNC_3(struct evdns_server_port *VAR_0)
{
 FUNC_0(VAR_0);
 if (--VAR_0->refcnt == 0) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
 } else {
  VAR_0->closing = 1;
  FUNC_1(VAR_0);
 }
}
