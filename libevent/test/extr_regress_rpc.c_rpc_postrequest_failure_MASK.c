
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {scalar_t__ response_code; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct evhttp_request *VAR_3, void *VAR_4)
{
 if (VAR_3->response_code != VAR_0) {

  FUNC_2(VAR_1, "FAILED (response code)\n");
  FUNC_1(1);
 }

 VAR_2 = 1;
 FUNC_0(((void*)0));
}
