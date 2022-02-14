
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {int dummy; } ;
struct i40iw_device {TYPE_1__* iw_msixtbl; int msix_shared; struct i40iw_sc_dev sc_dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (struct i40iw_device*) ;
 int FUNC_1 (struct i40iw_device*) ;
 int FUNC_2 (struct i40iw_device*) ;
 int FUNC_3 (struct i40iw_sc_dev*,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_4(struct i40iw_device *VAR_0)
{
 struct i40iw_sc_dev *VAR_1 = &VAR_0->sc_dev;
 enum i40iw_status_code VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_2(VAR_0);
  return VAR_2;
 }

 if (!VAR_0->msix_shared)
  FUNC_3(VAR_1, VAR_0->iw_msixtbl[0].idx);
 return 0;
}
