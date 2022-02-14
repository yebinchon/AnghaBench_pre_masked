
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct debug_info {scalar_t__ wps_disabled; scalar_t__ suspended_step; scalar_t__ bps_disabled; } ;
struct TYPE_4__ {struct debug_info debug; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

int FUNC_5(struct pt_regs *VAR_8)
{
 struct debug_info *VAR_9 = &VAR_6->thread.debug;
 int VAR_10 = 0, *VAR_11;

 VAR_11 = FUNC_1(&VAR_7);






 if (FUNC_4(VAR_8)) {
  if (VAR_9->bps_disabled) {
   VAR_9->bps_disabled = 0;
   FUNC_2(VAR_0, VAR_4, 1);
   VAR_10 = 1;
  }

  if (VAR_9->wps_disabled) {
   VAR_9->wps_disabled = 0;
   FUNC_2(VAR_1, VAR_4, 1);
   VAR_10 = 1;
  }

  if (VAR_10) {
   if (VAR_9->suspended_step) {
    VAR_9->suspended_step = 0;

    VAR_10 = 0;
   } else {
    FUNC_3(VAR_6);
   }
  }
 } else if (*VAR_11 != VAR_2) {
  FUNC_2(VAR_0, VAR_5, 1);
  FUNC_2(VAR_1, VAR_5, 1);

  if (!VAR_9->wps_disabled)
   FUNC_2(VAR_1, VAR_4, 1);

  if (*VAR_11 != VAR_3) {
   FUNC_0();
   VAR_10 = 1;
  } else {
   VAR_10 = 0;
  }

  *VAR_11 = VAR_2;
 }

 return !VAR_10;
}
