
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_sc_dev {TYPE_1__* ccq_ops; } ;
struct i40iw_sc_cq {int dummy; } ;
struct i40iw_device {int sc_dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* ccq_arm ) (struct i40iw_sc_cq*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_sc_cq*,int*) ;
 int FUNC_2 (struct i40iw_sc_cq*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_device *VAR_1,
      struct i40iw_sc_cq *VAR_2)
{
 struct i40iw_sc_dev *VAR_3 = (struct i40iw_sc_dev *)&VAR_1->sc_dev;
 enum i40iw_status_code VAR_4;
 u32 VAR_5;

 do {
  VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_5);
  if (VAR_4 == VAR_0)
   break;
  if (VAR_4) {
   FUNC_0("puda  status = %d\n", VAR_4);
   break;
  }
  if (VAR_5) {
   FUNC_0("puda compl_err  =0x%x\n", VAR_5);
   break;
  }
 } while (1);

 VAR_3->ccq_ops->ccq_arm(VAR_2);
}
