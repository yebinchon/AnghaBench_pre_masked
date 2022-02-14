
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct evrpc_base {int dummy; } ;
struct evhttp_request {int output_buffer; int output_headers; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (struct msg*,int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct evhttp_connection*) ;
 struct evhttp_connection* FUNC_4 (char*,int ) ;
 int FUNC_5 (struct evhttp*) ;
 int FUNC_6 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 struct evhttp_request* FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int VAR_1 ;
 int FUNC_10 (struct msg*) ;
 int FUNC_11 (int ,struct msg*) ;
 struct msg* FUNC_12 () ;
 int VAR_2 ;
 int FUNC_13 (struct evhttp**,int *,struct evrpc_base**) ;
 int FUNC_14 (struct evrpc_base*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_16(void)
{
 ev_uint16_t VAR_6;
 struct evhttp *VAR_7 = ((void*)0);
 struct evrpc_base *VAR_8 = ((void*)0);
 struct evhttp_connection *VAR_9 = ((void*)0);
 struct evhttp_request *VAR_10 = ((void*)0);
 struct msg *VAR_11;

 FUNC_13(&VAR_7, &VAR_6, &VAR_8);

 VAR_9 = FUNC_4("127.0.0.1", VAR_6);
 FUNC_15(VAR_9);






 VAR_10 = FUNC_7(VAR_2, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_9(VAR_3, "FAILED\n");
  FUNC_8(1);
 }


 FUNC_2(VAR_10->output_headers, "Host", "somehost");


 VAR_11 = FUNC_12();
 FUNC_0(VAR_11, VAR_1, "niels");
 FUNC_0(VAR_11, VAR_5, "tester");
 FUNC_11(VAR_10->output_buffer, VAR_11);
 FUNC_10(VAR_11);

 if (FUNC_6(VAR_9, VAR_10,
  VAR_0,
  "/.rpc.Message") == -1) {
  FUNC_9(VAR_3, "FAILED\n");
  FUNC_8(1);
 }

 VAR_4 = 0;

 FUNC_1();

 FUNC_3(VAR_9);

 FUNC_14(VAR_8);

end:
 FUNC_5(VAR_7);
}
