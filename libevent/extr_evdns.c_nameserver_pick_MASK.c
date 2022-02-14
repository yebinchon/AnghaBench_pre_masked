
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameserver {struct nameserver* next; scalar_t__ state; } ;
struct evdns_base {scalar_t__ global_good_nameservers; struct nameserver* server_head; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static struct nameserver *
FUNC_2(struct evdns_base *VAR_0) {
 struct nameserver *VAR_1 = VAR_0->server_head, *VAR_2;
 FUNC_0(VAR_0);
 if (!VAR_0->server_head) return ((void*)0);



 if (!VAR_0->global_good_nameservers) {
  VAR_0->server_head = VAR_0->server_head->next;
  return VAR_0->server_head;
 }


 for (;;) {
  if (VAR_0->server_head->state) {

   VAR_2 = VAR_0->server_head;
   VAR_0->server_head = VAR_0->server_head->next;
   return VAR_2;
  }

  VAR_0->server_head = VAR_0->server_head->next;
  if (VAR_0->server_head == VAR_1) {



   FUNC_1(VAR_0->global_good_nameservers == 0);
   VAR_2 = VAR_0->server_head;
   VAR_0->server_head = VAR_0->server_head->next;
   return VAR_2;
  }
 }
}
