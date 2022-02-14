
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct edac_device_ctl_info {scalar_t__ op_state; int poll_msec; int delay; int work; int (* edac_check ) (struct edac_device_ctl_info*) ;} ;
struct delayed_work {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct edac_device_ctl_info*) ;
 struct delayed_work* FUNC_5 (struct work_struct*) ;
 struct edac_device_ctl_info* FUNC_6 (struct delayed_work*) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_3)
{
 struct delayed_work *VAR_4 = FUNC_5(VAR_3);
 struct edac_device_ctl_info *VAR_5 = FUNC_6(VAR_4);

 FUNC_1(&VAR_2);


 if (VAR_5->op_state == VAR_0) {
  FUNC_2(&VAR_2);
  return;
 }


 if ((VAR_5->op_state == VAR_1) &&
  (VAR_5->edac_check != ((void*)0))) {
   VAR_5->edac_check(VAR_5);
 }

 FUNC_2(&VAR_2);






 if (VAR_5->poll_msec == 1000)
  FUNC_0(&VAR_5->work, FUNC_3(VAR_5->delay));
 else
  FUNC_0(&VAR_5->work, VAR_5->delay);
}
