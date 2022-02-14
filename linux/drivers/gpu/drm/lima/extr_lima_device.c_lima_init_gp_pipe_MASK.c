
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {int num_processor; scalar_t__* processor; int num_mmu; scalar_t__* mmu; int num_l2_cache; scalar_t__* l2_cache; } ;
struct lima_device {scalar_t__ ip; struct lima_sched_pipe* pipe; } ;


 int FUNC_0 (struct lima_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct lima_sched_pipe*) ;
 int FUNC_2 (struct lima_sched_pipe*,char*) ;

__attribute__((used)) static int FUNC_3(struct lima_device *VAR_4)
{
 struct lima_sched_pipe *VAR_5 = VAR_4->pipe + VAR_3;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, "gp");
 if (VAR_6)
  return VAR_6;

 VAR_5->l2_cache[VAR_5->num_l2_cache++] = VAR_4->ip + VAR_2;
 VAR_5->mmu[VAR_5->num_mmu++] = VAR_4->ip + VAR_1;
 VAR_5->processor[VAR_5->num_processor++] = VAR_4->ip + VAR_0;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return VAR_6;
 }

 return 0;
}
