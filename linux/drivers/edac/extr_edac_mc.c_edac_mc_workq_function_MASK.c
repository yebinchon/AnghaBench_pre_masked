
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct mem_ctl_info {scalar_t__ op_state; int work; int (* edac_check ) (struct mem_ctl_info*) ;} ;
struct delayed_work {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mem_ctl_info*) ;
 struct delayed_work* FUNC_6 (struct work_struct*) ;
 struct mem_ctl_info* FUNC_7 (struct delayed_work*) ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_4)
{
 struct delayed_work *VAR_5 = FUNC_6(VAR_4);
 struct mem_ctl_info *VAR_6 = FUNC_7(VAR_5);

 FUNC_3(&VAR_3);

 if (VAR_6->op_state != VAR_1) {
  FUNC_4(&VAR_3);
  return;
 }

 if (VAR_2 == VAR_0)
  VAR_6->edac_check(VAR_6);

 FUNC_4(&VAR_3);


 FUNC_1(&VAR_6->work, FUNC_2(FUNC_0()));
}
