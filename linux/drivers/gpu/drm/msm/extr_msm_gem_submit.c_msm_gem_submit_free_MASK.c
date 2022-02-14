
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_submit {int queue; int pid; int node; int fence; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct msm_gem_submit*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct msm_gem_submit *VAR_0)
{
 FUNC_0(VAR_0->fence);
 FUNC_2(&VAR_0->node);
 FUNC_4(VAR_0->pid);
 FUNC_3(VAR_0->queue);

 FUNC_1(VAR_0);
}
