
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct http_object_request {int localfile; int tmpfile; TYPE_1__* slot; int url; } ;
struct TYPE_2__ {int * callback_data; int * callback_func; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct http_object_request *VAR_0)
{
 if (VAR_0->localfile != -1) {
  FUNC_1(VAR_0->localfile);
  VAR_0->localfile = -1;
 }
 FUNC_0(VAR_0->url);
 if (VAR_0->slot != ((void*)0)) {
  VAR_0->slot->callback_func = ((void*)0);
  VAR_0->slot->callback_data = ((void*)0);
  FUNC_2(VAR_0->slot);
  VAR_0->slot = ((void*)0);
 }
 FUNC_3(&VAR_0->tmpfile);
}
