
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;
struct evhttp_request {struct evkeyvalq* input_headers; } ;



struct evkeyvalq *FUNC_0(struct evhttp_request *VAR_0)
{
 return (VAR_0->input_headers);
}
