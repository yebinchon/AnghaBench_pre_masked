
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ws_private_t ;
struct ws_private {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* req_host; struct TYPE_5__* sec_answer; struct TYPE_5__* sec_key; struct TYPE_5__* protocol; struct TYPE_5__* http_version; struct TYPE_5__* resource; struct TYPE_5__* method; int data; int out; int in; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(ws_private_t VAR_0) {
  if (VAR_0) {
    FUNC_0(VAR_0->in);
    FUNC_0(VAR_0->out);
    FUNC_0(VAR_0->data);
    FUNC_1(VAR_0->method);
    FUNC_1(VAR_0->resource);
    FUNC_1(VAR_0->http_version);
    FUNC_1(VAR_0->protocol);
    FUNC_1(VAR_0->sec_key);
    FUNC_1(VAR_0->sec_answer);
    FUNC_1(VAR_0->req_host);
    FUNC_2(VAR_0, 0, sizeof(struct ws_private));
    FUNC_1(VAR_0);
  }
}
