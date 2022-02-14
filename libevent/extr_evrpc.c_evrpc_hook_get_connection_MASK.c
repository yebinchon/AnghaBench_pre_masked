
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evrpc_request_wrapper {TYPE_1__* hook_meta; } ;
struct evhttp_connection {int dummy; } ;
struct TYPE_2__ {struct evhttp_connection* evcon; } ;



struct evhttp_connection *
FUNC_0(void *VAR_0)
{
 struct evrpc_request_wrapper *VAR_1 = VAR_0;
 return (VAR_1->hook_meta != ((void*)0) ? VAR_1->hook_meta->evcon : ((void*)0));
}
