
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_io {int dummy; } ;
struct fsl_mc_device {int dev; int mc_handle; struct fsl_mc_io* mc_io; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct fsl_mc_io*,int ,int ,int ,int) ;
 int FUNC_2 (struct fsl_mc_io*,int ,int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct fsl_mc_device *VAR_0)
{
 int VAR_1;
 struct fsl_mc_io *VAR_2 = VAR_0->mc_io;




 VAR_1 = FUNC_2(VAR_2, 0, VAR_0->mc_handle, 0, 0);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev,
   "Disabling DPRC IRQ failed: dprc_set_irq_enable() failed: %d\n",
   VAR_1);
  return VAR_1;
 }




 VAR_1 = FUNC_3(VAR_2, 0, VAR_0->mc_handle, 0, 0x0);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev,
   "Disabling DPRC IRQ failed: dprc_set_irq_mask() failed: %d\n",
   VAR_1);
  return VAR_1;
 }




 VAR_1 = FUNC_1(VAR_2, 0, VAR_0->mc_handle, 0, ~0x0U);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev,
   "Disabling DPRC IRQ failed: dprc_clear_irq_status() failed: %d\n",
   VAR_1);
  return VAR_1;
 }

 return 0;
}
