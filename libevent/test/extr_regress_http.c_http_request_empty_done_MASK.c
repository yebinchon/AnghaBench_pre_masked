
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*) ;
 scalar_t__ FUNC_6 (struct evhttp_request*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(struct evhttp_request *VAR_3, void *VAR_4)
{
 if (!VAR_3) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 if (FUNC_6(VAR_3) != VAR_0) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 if (FUNC_3(FUNC_5(VAR_3), "Date") == ((void*)0)) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }


 if (FUNC_3(FUNC_5(VAR_3), "Content-Length") == ((void*)0)) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 if (FUNC_9(FUNC_3(FUNC_5(VAR_3), "Content-Length"),
  "0")) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 if (FUNC_1(FUNC_4(VAR_3)) != 0) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 VAR_2 = 1;
 FUNC_0(VAR_4);
 FUNC_2(VAR_4, ((void*)0));
}
