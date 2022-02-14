
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int dev; int mc_handle; int mc_io; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fsl_mc_device *VAR_0)
{
 int VAR_1;




 VAR_1 = FUNC_2(VAR_0->mc_io, 0, VAR_0->mc_handle, 0,
      ~0x0u);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev,
   "Enabling DPRC IRQ failed: dprc_set_irq_mask() failed: %d\n",
   VAR_1);

  return VAR_1;
 }




 VAR_1 = FUNC_1(VAR_0->mc_io, 0, VAR_0->mc_handle, 0, 1);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev,
   "Enabling DPRC IRQ failed: dprc_set_irq_enable() failed: %d\n",
   VAR_1);

  return VAR_1;
 }

 return 0;
}
