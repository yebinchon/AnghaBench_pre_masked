
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_req_generic {int rpc_data; struct evhttp_request* http_req; } ;
struct evhttp_request {int output_headers; } ;
typedef enum EVRPC_HOOK_RESULT { ____Placeholder_EVRPC_HOOK_RESULT } EVRPC_HOOK_RESULT ;


 int VAR_0 ;
 int FUNC_0 (struct evrpc_req_generic*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (struct evhttp_request*,int ,int *) ;
 int FUNC_4 (struct evhttp_request*,int ,char*,int ) ;
 int FUNC_5 (struct evrpc_req_generic*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, enum EVRPC_HOOK_RESULT VAR_4)
{
 struct evrpc_req_generic *VAR_5 = VAR_3;
 struct evhttp_request *VAR_6;
 FUNC_0(VAR_5);
 VAR_6 = VAR_5->http_req;

 if (VAR_4 == VAR_0)
  goto error;


 if (FUNC_2(VAR_6->output_headers, "Content-Type") == ((void*)0)) {
  FUNC_1(VAR_6->output_headers,
      "Content-Type", "application/octet-stream");
 }
 FUNC_4(VAR_6, VAR_1, "OK", VAR_5->rpc_data);

 FUNC_5(VAR_5);

 return;

error:
 FUNC_5(VAR_5);
 FUNC_3(VAR_6, VAR_2, ((void*)0));
 return;
}
