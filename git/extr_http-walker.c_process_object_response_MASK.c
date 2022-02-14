
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct walker_data {struct alt_base* alt; } ;
struct walker {struct walker_data* data; } ;
struct object_request {TYPE_2__* req; TYPE_1__* repo; int state; struct walker* walker; } ;
struct alt_base {int base; } ;
struct TYPE_6__ {int errorstr; int http_code; int curl_result; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct walker*,int ) ;
 int FUNC_1 (struct object_request*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct walker*,struct object_request*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct object_request *VAR_2 =
  (struct object_request *)VAR_1;
 struct walker *VAR_3 = VAR_2->walker;
 struct walker_data *VAR_4 = VAR_3->data;
 struct alt_base *VAR_5 = VAR_4->alt;

 FUNC_4(VAR_2->req);
 VAR_2->state = VAR_0;

 FUNC_3(&VAR_2->req->curl_result,
         VAR_2->req->http_code,
         VAR_2->req->errorstr,
         sizeof(VAR_2->req->errorstr));


 if (FUNC_2(VAR_2->req)) {
  FUNC_0(VAR_3, VAR_5->base);
  if (VAR_2->repo->next != ((void*)0)) {
   VAR_2->repo =
    VAR_2->repo->next;
   FUNC_5(VAR_2->req);
   FUNC_6(VAR_3, VAR_2);
   return;
  }
 }

 FUNC_1(VAR_2);
}
