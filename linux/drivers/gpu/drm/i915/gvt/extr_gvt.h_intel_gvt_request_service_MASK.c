
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt {int service_thread_wq; int service_request; } ;


 int FUNC_0 (int,void*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct intel_gvt *VAR_0,
  int VAR_1)
{
 FUNC_0(VAR_1, (void *)&VAR_0->service_request);
 FUNC_1(&VAR_0->service_thread_wq);
}
