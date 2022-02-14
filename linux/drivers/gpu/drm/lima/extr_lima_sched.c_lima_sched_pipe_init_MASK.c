
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {int base; int error_work; int fence_lock; int fence_context; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int,int ,int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct lima_sched_pipe *VAR_3, const char *VAR_4)
{
 unsigned int VAR_5 = VAR_2 > 0 ?
          VAR_2 : 500;

 VAR_3->fence_context = FUNC_1(1);
 FUNC_4(&VAR_3->fence_lock);

 FUNC_0(&VAR_3->error_work, VAR_0);

 return FUNC_2(&VAR_3->base, &VAR_1, 1, 0,
         FUNC_3(VAR_5), VAR_4);
}
