
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcpu {struct lowcore* lowcore; } ;
struct lowcore {int cpu_nr; int alt_stfle_fac_list; int stfle_fac_list; scalar_t__ access_regs_save_area; int cregs_save_area; scalar_t__ avg_steal_timer; scalar_t__ steal_timer; scalar_t__ system_timer; scalar_t__ user_timer; int machine_flags; int kernel_asce; int percpu_offset; scalar_t__ spinlock_index; int spinlock_lockval; } ;
struct TYPE_7__ {int alt_stfle_fac_list; int stfle_fac_list; int machine_flags; int kernel_asce; } ;
struct TYPE_5__ {int cpu_attach_mask; } ;
struct TYPE_6__ {TYPE_1__ context; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ,int ,int) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (unsigned int*) ;

__attribute__((used)) static void FUNC_7(struct pcpu *VAR_3, int VAR_4)
{
 struct lowcore *VAR_5 = VAR_3->lowcore;

 FUNC_3(VAR_4, &VAR_2.context.cpu_attach_mask);
 FUNC_3(VAR_4, FUNC_5(&VAR_2));
 VAR_5->cpu_nr = VAR_4;
 VAR_5->spinlock_lockval = FUNC_2(VAR_4);
 VAR_5->spinlock_index = 0;
 VAR_5->percpu_offset = VAR_1[VAR_4];
 VAR_5->kernel_asce = VAR_0.kernel_asce;
 VAR_5->machine_flags = VAR_0.machine_flags;
 VAR_5->user_timer = VAR_5->system_timer =
  VAR_5->steal_timer = VAR_5->avg_steal_timer = 0;
 FUNC_0(VAR_5->cregs_save_area, 0, 15);
 FUNC_6((unsigned int *) VAR_5->access_regs_save_area);
 FUNC_4(VAR_5->stfle_fac_list, VAR_0.stfle_fac_list,
        sizeof(VAR_5->stfle_fac_list));
 FUNC_4(VAR_5->alt_stfle_fac_list, VAR_0.alt_stfle_fac_list,
        sizeof(VAR_5->alt_stfle_fac_list));
 FUNC_1(VAR_4);
}
