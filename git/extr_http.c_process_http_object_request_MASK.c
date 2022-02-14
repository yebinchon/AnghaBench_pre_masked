
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct http_object_request {TYPE_1__* slot; int http_code; int curl_result; } ;
struct TYPE_2__ {int http_code; int curl_result; } ;



void FUNC_0(struct http_object_request *VAR_0)
{
 if (VAR_0->slot == ((void*)0))
  return;
 VAR_0->curl_result = VAR_0->slot->curl_result;
 VAR_0->http_code = VAR_0->slot->http_code;
 VAR_0->slot = ((void*)0);
}
