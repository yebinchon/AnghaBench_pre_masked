
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {int fence_seqno; int fence_context; int fence_lock; } ;
struct lima_fence {int base; struct lima_sched_pipe* pipe; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 struct lima_fence* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct lima_fence *FUNC_2(struct lima_sched_pipe *VAR_3)
{
 struct lima_fence *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->pipe = VAR_3;
 FUNC_0(&VAR_4->base, &VAR_1, &VAR_3->fence_lock,
         VAR_3->fence_context, ++VAR_3->fence_seqno);

 return VAR_4;
}
