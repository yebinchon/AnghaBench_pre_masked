
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {struct request* current_req; struct request* handle; int pending_cb; struct request* const request; int request_appended; TYPE_1__* ns; struct evdns_base* base; int timeout_event; } ;
struct evdns_base {scalar_t__ disable_when_inactive; int global_requests_waiting; int global_requests_inflight; struct request* req_waiting_head; } ;
struct TYPE_2__ {scalar_t__ requests_inflight; int timeout_event; int event; } ;


 int FUNC_0 (struct request* const) ;
 int FUNC_1 (struct evdns_base*) ;
 int VAR_0 ;
 int FUNC_2 (struct evdns_base*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct request* const,struct request**) ;
 int FUNC_5 (struct evdns_base*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,struct request* const) ;
 int FUNC_10 (struct request* const) ;
 int FUNC_11 (struct request*) ;

__attribute__((used)) static void
FUNC_12(struct request *const VAR_1, struct request **VAR_2, int VAR_3) {
 struct evdns_base *VAR_4 = VAR_1->base;
 int VAR_5 = (VAR_2 != &VAR_4->req_waiting_head);
 FUNC_1(VAR_4);
 FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_4(VAR_1, VAR_2);

 FUNC_9(VAR_0, "Removing timeout for request %p", VAR_1);
 if (VAR_5) {
  FUNC_8(&VAR_1->timeout_event);
  VAR_4->global_requests_inflight--;
  VAR_1->ns->requests_inflight--;
 } else {
  VAR_4->global_requests_waiting--;
 }

 FUNC_6(&VAR_1->timeout_event);

 if (VAR_1->ns &&
     VAR_1->ns->requests_inflight == 0 &&
     VAR_1->base->disable_when_inactive) {
  FUNC_7(&VAR_1->ns->event);
  FUNC_8(&VAR_1->ns->timeout_event);
 }

 if (!VAR_1->request_appended) {

  FUNC_10(VAR_1->request);
 } else {


 }

 if (VAR_1->handle) {
  FUNC_3(VAR_1->handle->current_req == VAR_1);

  if (VAR_3) {
   FUNC_11(VAR_1->handle);
   VAR_1->handle->current_req = ((void*)0);
   if (! VAR_1->handle->pending_cb) {


    FUNC_10(VAR_1->handle);
   }
   VAR_1->handle = ((void*)0);

  } else {
   VAR_1->handle->current_req = ((void*)0);
  }
 }

 FUNC_10(VAR_1);

 FUNC_5(VAR_4);
 FUNC_2(VAR_4);
}
