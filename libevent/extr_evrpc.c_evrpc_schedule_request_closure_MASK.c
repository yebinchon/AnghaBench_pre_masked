
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct evrpc_status {int error; } ;
struct evrpc_request_wrapper {int cb_arg; int reply; int request; int (* cb ) (struct evrpc_status*,int ,int ,int ) ;int ev_timeout; int name; struct evrpc_pool* pool; struct evhttp_request* req; struct evhttp_connection* evcon; } ;
struct evrpc_pool {scalar_t__ timeout; } ;
struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
typedef int status ;
typedef enum EVRPC_HOOK_RESULT { ____Placeholder_EVRPC_HOOK_RESULT } EVRPC_HOOK_RESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct evrpc_request_wrapper*) ;
 int FUNC_3 (int *,struct timeval*) ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (struct evrpc_status*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct evrpc_status*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3, enum EVRPC_HOOK_RESULT VAR_4)
{
 struct evrpc_request_wrapper *VAR_5 = VAR_3;
 struct evhttp_connection *VAR_6 = VAR_5->evcon;
 struct evhttp_request *VAR_7 = VAR_5->req;
 struct evrpc_pool *VAR_8 = VAR_5->pool;
 struct evrpc_status VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 if (VAR_4 == VAR_2)
  goto error;

 VAR_10 = FUNC_1(VAR_5->name);
 if (VAR_10 == ((void*)0))
  goto error;

 if (VAR_8->timeout > 0) {



  struct timeval VAR_12;
  FUNC_4(&VAR_12);
  VAR_12.tv_sec = VAR_8->timeout;
  FUNC_3(&VAR_5->ev_timeout, &VAR_12);
 }


 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_0, VAR_10);
 FUNC_6(VAR_10);

 if (VAR_11 == -1)
  goto error;

 return;

error:
 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.error = VAR_1;
 (*VAR_5->cb)(&VAR_9, VAR_5->request, VAR_5->reply, VAR_5->cb_arg);
 FUNC_2(VAR_5);
}
