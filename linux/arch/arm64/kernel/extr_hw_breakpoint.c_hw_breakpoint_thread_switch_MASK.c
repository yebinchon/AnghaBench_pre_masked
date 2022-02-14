
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct debug_info {scalar_t__ bps_disabled; scalar_t__ wps_disabled; } ;
struct TYPE_5__ {struct debug_info debug; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_4__ {struct debug_info debug; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct task_struct *VAR_4)
{
 struct debug_info *VAR_5, *VAR_6;

 VAR_5 = &VAR_3->thread.debug;
 VAR_6 = &VAR_4->thread.debug;


 if (VAR_5->bps_disabled != VAR_6->bps_disabled)
  FUNC_0(VAR_0,
        VAR_2,
        !VAR_6->bps_disabled);


 if (VAR_5->wps_disabled != VAR_6->wps_disabled)
  FUNC_0(VAR_1,
        VAR_2,
        !VAR_6->wps_disabled);
}
