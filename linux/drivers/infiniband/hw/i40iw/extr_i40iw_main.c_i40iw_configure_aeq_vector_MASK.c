
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_msix_vector {int irq; } ;
struct i40iw_device {int dpc_tasklet; int msix_shared; struct i40iw_msix_vector* iw_msixtbl; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,char*,struct i40iw_device*) ;
 int FUNC_2 (int *,int ,unsigned long) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_device *VAR_3)
{
 struct i40iw_msix_vector *VAR_4 = VAR_3->iw_msixtbl;
 u32 VAR_5 = 0;

 if (!VAR_3->msix_shared) {
  FUNC_2(&VAR_3->dpc_tasklet, VAR_1, (unsigned long)VAR_3);
  VAR_5 = FUNC_1(VAR_4->irq, VAR_2, 0, "i40iw", VAR_3);
 }
 if (VAR_5) {
  FUNC_0("aeq irq config fail\n");
  return VAR_0;
 }

 return 0;
}
