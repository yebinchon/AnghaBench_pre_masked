
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt {scalar_t__ service_request; int service_thread_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct intel_gvt*) ;
 int FUNC_3 (struct intel_gvt*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (int ,void*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(void *VAR_3)
{
 struct intel_gvt *VAR_4 = (struct intel_gvt *)VAR_3;
 int VAR_5;

 FUNC_1("service thread start\n");

 while (!FUNC_4()) {
  VAR_5 = FUNC_7(VAR_4->service_thread_wq,
    FUNC_4() || VAR_4->service_request);

  if (FUNC_4())
   break;

  if (FUNC_0(VAR_5, "service thread is waken up by signal.\n"))
   continue;

  if (FUNC_5(VAR_0,
     (void *)&VAR_4->service_request))
   FUNC_2(VAR_4);

  if (FUNC_6(VAR_2,
    (void *)&VAR_4->service_request) ||
   FUNC_6(VAR_1,
     (void *)&VAR_4->service_request)) {
   FUNC_3(VAR_4);
  }
 }

 return 0;
}
