
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct event_base {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct event_base*,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*) ;
 scalar_t__ FUNC_6 (struct evhttp_request*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(struct evhttp_request *VAR_3, void *VAR_4)
{
 struct event_base *VAR_5 = VAR_4;
 const char *VAR_6 = "DISPATCHER_TEST";

 if (!VAR_3) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 if (FUNC_6(VAR_3) != VAR_0) {
  FUNC_8(VAR_1, "FAILED\n");
  FUNC_7(1);
 }

 if (FUNC_3(FUNC_5(VAR_3), "Content-Type") == ((void*)0)) {
  FUNC_8(VAR_1, "FAILED (content type)\n");
  FUNC_7(1);
 }

 if (FUNC_1(FUNC_4(VAR_3)) != FUNC_9(VAR_6)) {
  FUNC_8(VAR_1, "FAILED (length %lu vs %lu)\n",
      (unsigned long)FUNC_1(FUNC_4(VAR_3)), (unsigned long)FUNC_9(VAR_6));
  FUNC_7(1);
 }

 if (FUNC_0(FUNC_4(VAR_3), VAR_6) != 0) {
  FUNC_8(VAR_1, "FAILED (data)\n");
  FUNC_7(1);
 }

 VAR_2 = 1;
 FUNC_2(VAR_5, ((void*)0));
}
