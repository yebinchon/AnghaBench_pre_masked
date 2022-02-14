
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_timeline {int link; int sync; int requests; int mutex; int last_request; int fence_context; int * gt; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct intel_timeline *VAR_0, u64 VAR_1)
{
 VAR_0->gt = ((void*)0);
 VAR_0->fence_context = VAR_1;

 FUNC_3(&VAR_0->mutex);

 FUNC_0(&VAR_0->last_request, &VAR_0->mutex);
 FUNC_1(&VAR_0->requests);

 FUNC_2(&VAR_0->sync);

 FUNC_1(&VAR_0->link);
}
