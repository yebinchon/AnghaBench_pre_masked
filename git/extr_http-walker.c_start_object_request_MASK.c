
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walker {int dummy; } ;
struct object_request {void* state; struct http_object_request* req; int oid; TYPE_1__* repo; } ;
struct http_object_request {struct active_request_slot* slot; } ;
struct active_request_slot {struct object_request* callback_data; int callback_func; } ;
struct TYPE_2__ {int base; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 struct http_object_request* FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct http_object_request*) ;
 int FUNC_2 (struct active_request_slot*) ;

__attribute__((used)) static void FUNC_3(struct walker *VAR_3,
     struct object_request *VAR_4)
{
 struct active_request_slot *VAR_5;
 struct http_object_request *VAR_6;

 VAR_6 = FUNC_0(VAR_4->repo->base, &VAR_4->oid);
 if (VAR_6 == ((void*)0)) {
  VAR_4->state = VAR_0;
  return;
 }
 VAR_4->req = VAR_6;

 VAR_5 = VAR_6->slot;
 VAR_5->callback_func = VAR_2;
 VAR_5->callback_data = VAR_4;


 VAR_4->state = VAR_1;
 if (!FUNC_2(VAR_5)) {
  VAR_4->state = VAR_0;
  FUNC_1(VAR_6);
  return;
 }
}
