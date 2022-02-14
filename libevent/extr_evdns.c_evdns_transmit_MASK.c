
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct request* next; scalar_t__ transmit_me; } ;
struct evdns_base {int n_req_heads; struct request** req_heads; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static int
FUNC_2(struct evdns_base *VAR_0) {
 char VAR_1 = 0;
 int VAR_2;

 FUNC_0(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_0->n_req_heads; ++VAR_2) {
  if (VAR_0->req_heads[VAR_2]) {
   struct request *const VAR_3 = VAR_0->req_heads[VAR_2], *VAR_4 = VAR_3;

   do {
    if (VAR_4->transmit_me) {
     VAR_1 = 1;
     FUNC_1(VAR_4);
    }

    VAR_4 = VAR_4->next;
   } while (VAR_4 != VAR_3);
  }
 }

 return VAR_1;
}
