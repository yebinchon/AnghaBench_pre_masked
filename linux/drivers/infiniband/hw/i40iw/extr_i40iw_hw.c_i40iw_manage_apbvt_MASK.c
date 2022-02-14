
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40iw_cm_core {int apbvt_lock; int ports_in_use; } ;
struct i40iw_device {struct i40iw_cm_core cm_core; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i40iw_device*,int ,int) ;
 int FUNC_3 (struct i40iw_cm_core*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

enum i40iw_status_code FUNC_6(struct i40iw_device *VAR_0,
       u16 VAR_1,
       bool VAR_2)
{
 struct i40iw_cm_core *VAR_3 = &VAR_0->cm_core;
 enum i40iw_status_code VAR_4;
 unsigned long VAR_5;
 bool VAR_6;





 if (VAR_2) {
  FUNC_4(&VAR_3->apbvt_lock, VAR_5);
  VAR_6 = FUNC_1(VAR_1,
         VAR_3->ports_in_use);
  FUNC_5(&VAR_3->apbvt_lock, VAR_5);
  if (VAR_6)
   return 0;
  return FUNC_2(VAR_0, VAR_1,
        1);
 } else {
  FUNC_4(&VAR_3->apbvt_lock, VAR_5);
  VAR_6 = FUNC_3(VAR_3, VAR_1);
  if (VAR_6) {
   FUNC_5(&VAR_3->apbvt_lock, VAR_5);
   return 0;
  }
  FUNC_0(VAR_1, VAR_3->ports_in_use);
  VAR_4 = FUNC_2(VAR_0, VAR_1,
          0);
  FUNC_5(&VAR_3->apbvt_lock, VAR_5);
  return VAR_4;
 }
}
