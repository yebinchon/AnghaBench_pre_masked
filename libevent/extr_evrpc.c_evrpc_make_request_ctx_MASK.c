
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {void (* cb ) (struct evrpc_status*,void*,void*,void*) ;void (* request_marshal ) (struct evbuffer*,void*) ;void (* reply_clear ) (void*) ;int (* reply_unmarshal ) (void*,struct evbuffer*) ;void* reply; void* request; void* cb_arg; int * name; int * evcon; int * hook_meta; struct evrpc_pool* pool; } ;
struct evrpc_pool {int dummy; } ;


 int FUNC_0 (struct evrpc_request_wrapper*) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;

struct evrpc_request_wrapper *
FUNC_3(
 struct evrpc_pool *VAR_0, void *VAR_1, void *VAR_2,
 const char *VAR_3,
 void (*VAR_4)(struct evbuffer*, void *),
 void (*VAR_5)(void *),
 int (*VAR_6)(void *, struct evbuffer *),
 void (*VAR_7)(struct evrpc_status *, void *, void *, void *),
 void *VAR_8)
{
 struct evrpc_request_wrapper *VAR_9 = (struct evrpc_request_wrapper *)
     FUNC_1(sizeof(struct evrpc_request_wrapper));
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 VAR_9->pool = VAR_0;
 VAR_9->hook_meta = ((void*)0);
 VAR_9->evcon = ((void*)0);
 VAR_9->name = FUNC_2(VAR_3);
 if (VAR_9->name == ((void*)0)) {
  FUNC_0(VAR_9);
  return (((void*)0));
 }
 VAR_9->cb = VAR_7;
 VAR_9->cb_arg = VAR_8;
 VAR_9->request = VAR_1;
 VAR_9->reply = VAR_2;
 VAR_9->request_marshal = VAR_4;
 VAR_9->reply_clear = VAR_5;
 VAR_9->reply_unmarshal = VAR_6;

 return (VAR_9);
}
