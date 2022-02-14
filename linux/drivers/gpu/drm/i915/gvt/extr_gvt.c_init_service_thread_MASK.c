
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt {int service_thread; int service_thread_wq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct intel_gvt*,char*) ;

__attribute__((used)) static int FUNC_5(struct intel_gvt *VAR_1)
{
 FUNC_3(&VAR_1->service_thread_wq);

 VAR_1->service_thread = FUNC_4(VAR_0,
   VAR_1, "gvt_service_thread");
 if (FUNC_0(VAR_1->service_thread)) {
  FUNC_2("fail to start service thread.\n");
  return FUNC_1(VAR_1->service_thread);
 }
 return 0;
}
