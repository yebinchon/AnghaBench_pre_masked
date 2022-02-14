
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxd2880_tnrdmd_pid_ftr_cfg {int dummy; } ;
struct TYPE_2__ {scalar_t__ ts_output_if; } ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int pid_ftr_cfg_en; struct cxd2880_tnrdmd_pid_ftr_cfg pid_ftr_cfg; TYPE_1__ create_param; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,struct cxd2880_tnrdmd_pid_ftr_cfg*) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_6,
          struct cxd2880_tnrdmd_pid_ftr_cfg
          *VAR_7)
{
 if (!VAR_6)
  return -VAR_4;

 if (VAR_6->diver_mode == VAR_0)
  return -VAR_4;

 if (VAR_6->state != VAR_2 &&
     VAR_6->state != VAR_1)
  return -VAR_4;

 if (VAR_6->create_param.ts_output_if == VAR_3)
  return -VAR_5;

 if (VAR_7) {
  VAR_6->pid_ftr_cfg = *VAR_7;
  VAR_6->pid_ftr_cfg_en = 1;
 } else {
  VAR_6->pid_ftr_cfg_en = 0;
 }

 if (VAR_6->state == VAR_1)
  return FUNC_0(VAR_6, VAR_7);
 else
  return 0;
}
