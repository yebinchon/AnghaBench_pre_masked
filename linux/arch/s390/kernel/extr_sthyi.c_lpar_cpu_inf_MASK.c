
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_inf {int cpu_num_ded; int cpu_num_shd; int lpar_weight; int all_weight; int lpar_grp_cap; int lpar_cap; } ;
struct lpar_cpu_inf {struct cpu_inf ifl; struct cpu_inf cp; } ;
struct TYPE_3__ {int rcpus; } ;
struct diag204_x_part_block {TYPE_2__* cpus; TYPE_1__ hdr; } ;
struct TYPE_4__ {int cflag; scalar_t__ cur_weight; scalar_t__ weight; int group_cpu_type_cap; int cpu_type_cap; int ctidx; } ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,void*) ;

__attribute__((used)) static struct diag204_x_part_block *FUNC_1(struct lpar_cpu_inf *VAR_3,
       bool VAR_4,
       void *VAR_5,
       struct diag204_x_part_block *VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct cpu_inf *VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_6->hdr.rcpus; VAR_7++) {
  if (!(VAR_6->cpus[VAR_7].cflag & VAR_2))
   continue;

  switch (FUNC_0(VAR_6->cpus[VAR_7].ctidx, VAR_5)) {
  case 129:
   VAR_11 = &VAR_3->cp;
   if (VAR_6->cpus[VAR_7].cur_weight < VAR_0)
    VAR_9 |= VAR_6->cpus[VAR_7].cur_weight;
   break;
  case 128:
   VAR_11 = &VAR_3->ifl;
   if (VAR_6->cpus[VAR_7].cur_weight < VAR_0)
    VAR_10 |= VAR_6->cpus[VAR_7].cur_weight;
   break;
  default:
   continue;
  }

  if (!VAR_4)
   continue;

  VAR_8 |= VAR_6->cpus[VAR_7].cflag & VAR_1;
  VAR_11->lpar_cap |= VAR_6->cpus[VAR_7].cpu_type_cap;
  VAR_11->lpar_grp_cap |= VAR_6->cpus[VAR_7].group_cpu_type_cap;

  if (VAR_6->cpus[VAR_7].weight == VAR_0)
   VAR_11->cpu_num_ded += 1;
  else
   VAR_11->cpu_num_shd += 1;
 }

 if (VAR_4 && VAR_8) {
  VAR_3->cp.lpar_weight = VAR_9;
  VAR_3->ifl.lpar_weight = VAR_10;
 }
 VAR_3->cp.all_weight += VAR_9;
 VAR_3->ifl.all_weight += VAR_10;
 return (struct diag204_x_part_block *)&VAR_6->cpus[VAR_7];
}
