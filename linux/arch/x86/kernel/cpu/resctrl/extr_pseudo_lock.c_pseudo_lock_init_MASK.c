
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {struct pseudo_lock_region* plr; } ;
struct pseudo_lock_region {int pm_reqs; int lock_thread_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pseudo_lock_region* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct rdtgroup *VAR_2)
{
 struct pseudo_lock_region *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->lock_thread_wq);
 FUNC_0(&VAR_3->pm_reqs);
 VAR_2->plr = VAR_3;
 return 0;
}
