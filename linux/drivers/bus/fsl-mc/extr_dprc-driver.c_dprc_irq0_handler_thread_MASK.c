
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msi_desc {scalar_t__ irq; } ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_device {int flags; int mc_handle; TYPE_1__** irqs; struct fsl_mc_io* mc_io; } ;
struct fsl_mc_bus {int scan_mutex; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct msi_desc* msi_desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,int,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct fsl_mc_io*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct fsl_mc_io*,int ,int ,int ,scalar_t__*) ;
 int FUNC_5 (struct fsl_mc_device*,unsigned int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 struct fsl_mc_bus* FUNC_9 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_10 (struct device*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_9, void *VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 struct device *VAR_13 = VAR_10;
 struct fsl_mc_device *VAR_14 = FUNC_10(VAR_13);
 struct fsl_mc_bus *VAR_15 = FUNC_9(VAR_14);
 struct fsl_mc_io *VAR_16 = VAR_14->mc_io;
 struct msi_desc *VAR_17 = VAR_14->irqs[0]->msi_desc;

 FUNC_0(VAR_13, "DPRC IRQ %d triggered on CPU %u\n",
  VAR_9, FUNC_8());

 if (!(VAR_14->flags & VAR_7))
  return VAR_8;

 FUNC_6(&VAR_15->scan_mutex);
 if (!VAR_17 || VAR_17->irq != (u32)VAR_9)
  goto out;

 VAR_12 = 0;
 VAR_11 = FUNC_4(VAR_16, 0, VAR_14->mc_handle, 0,
        &VAR_12);
 if (VAR_11 < 0) {
  FUNC_1(VAR_13,
   "dprc_get_irq_status() failed: %d\n", VAR_11);
  goto out;
 }

 VAR_11 = FUNC_3(VAR_16, 0, VAR_14->mc_handle, 0,
          VAR_12);
 if (VAR_11 < 0) {
  FUNC_1(VAR_13,
   "dprc_clear_irq_status() failed: %d\n", VAR_11);
  goto out;
 }

 if (VAR_12 & (VAR_1 |
        VAR_4 |
        VAR_0 |
        VAR_3 |
        VAR_2)) {
  unsigned int VAR_18;

  VAR_11 = FUNC_5(VAR_14, &VAR_18);
  if (VAR_11 < 0) {






   if (VAR_11 != -VAR_5) {
    FUNC_1(VAR_13, "dprc_scan_objects() failed: %d\n",
     VAR_11);
   }

   goto out;
  }

  if (VAR_18 > VAR_6) {
   FUNC_2(VAR_13,
     "IRQs needed (%u) exceed IRQs preallocated (%u)\n",
     VAR_18, VAR_6);
  }
 }

out:
 FUNC_7(&VAR_15->scan_mutex);
 return VAR_8;
}
