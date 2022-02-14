
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct device {int kobj; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct omap_sham_reqctx {int dummy; } ;
struct omap_sham_dev {int polling_mode; int dma_lch; TYPE_3__* pdata; int list; int fallback_sz; int flags; int irq; int phys_base; int io_base; int queue; int done_task; int lock; struct device* dev; } ;
struct TYPE_5__ {scalar_t__ statesize; } ;
struct ahash_alg {TYPE_1__ halg; int import; int export; } ;
typedef int dma_cap_mask_t ;
struct TYPE_8__ {int lock; int dev_list; } ;
struct TYPE_7__ {int major_mask; int major_shift; int minor_mask; int minor_shift; int algs_info_size; TYPE_2__* algs_info; int flags; int intr_hdlr; } ;
struct TYPE_6__ {int size; int registered; struct ahash_alg* algs_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_sham_dev*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ahash_alg*) ;
 int FUNC_6 (struct ahash_alg*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*,char*,int,int) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,struct resource*) ;
 struct omap_sham_dev* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ,int ,int ,int ,struct omap_sham_dev*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct device*,char*) ;
 int FUNC_18 (int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (struct omap_sham_dev*,struct device*,struct resource*) ;
 int FUNC_20 (struct omap_sham_dev*,struct platform_device*,struct resource*) ;
 int VAR_12 ;
 int FUNC_21 (struct omap_sham_dev*,int ) ;
 int FUNC_22 (struct platform_device*,struct omap_sham_dev*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*,int ) ;
 int FUNC_29 (struct device*) ;
 TYPE_4__ VAR_13 ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,int *) ;
 int FUNC_34 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_14)
{
 struct omap_sham_dev *VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct resource VAR_17;
 dma_cap_mask_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 VAR_15 = FUNC_12(VAR_16, sizeof(struct omap_sham_dev), VAR_5);
 if (VAR_15 == ((void*)0)) {
  FUNC_8(VAR_16, "unable to alloc data struct.\n");
  VAR_19 = -VAR_3;
  goto data_err;
 }
 VAR_15->dev = VAR_16;
 FUNC_22(VAR_14, VAR_15);

 FUNC_0(&VAR_15->list);
 FUNC_31(&VAR_15->lock);
 FUNC_34(&VAR_15->done_task, VAR_10, (unsigned long)VAR_15);
 FUNC_4(&VAR_15->queue, VAR_7);

 VAR_19 = (VAR_16->of_node) ? FUNC_19(VAR_15, VAR_16, &VAR_17) :
          FUNC_20(VAR_15, VAR_14, &VAR_17);
 if (VAR_19)
  goto data_err;

 VAR_15->io_base = FUNC_11(VAR_16, &VAR_17);
 if (FUNC_1(VAR_15->io_base)) {
  VAR_19 = FUNC_2(VAR_15->io_base);
  goto data_err;
 }
 VAR_15->phys_base = VAR_17.start;

 VAR_19 = FUNC_13(VAR_16, VAR_15->irq, VAR_15->pdata->intr_hdlr,
          VAR_6, FUNC_10(VAR_16), VAR_15);
 if (VAR_19) {
  FUNC_8(VAR_16, "unable to request irq %d, err = %d\n",
   VAR_15->irq, VAR_19);
  goto data_err;
 }

 FUNC_15(VAR_18);
 FUNC_14(VAR_2, VAR_18);

 VAR_15->dma_lch = FUNC_17(VAR_16, "rx");
 if (FUNC_1(VAR_15->dma_lch)) {
  VAR_19 = FUNC_2(VAR_15->dma_lch);
  if (VAR_19 == -VAR_4)
   goto data_err;

  VAR_15->polling_mode = 1;
  FUNC_7(VAR_16, "using polling mode instead of dma\n");
 }

 VAR_15->flags |= VAR_15->pdata->flags;

 FUNC_29(VAR_16);
 FUNC_28(VAR_16, VAR_1);

 VAR_15->fallback_sz = VAR_8;

 FUNC_24(VAR_16);
 FUNC_26(VAR_16);

 VAR_19 = FUNC_25(VAR_16);
 if (VAR_19 < 0) {
  FUNC_8(VAR_16, "failed to get sync: %d\n", VAR_19);
  goto err_pm;
 }

 VAR_22 = FUNC_21(VAR_15, FUNC_3(VAR_15));
 FUNC_27(&VAR_14->dev);

 FUNC_9(VAR_16, "hw accel on OMAP rev %u.%u\n",
  (VAR_22 & VAR_15->pdata->major_mask) >> VAR_15->pdata->major_shift,
  (VAR_22 & VAR_15->pdata->minor_mask) >> VAR_15->pdata->minor_shift);

 FUNC_30(&VAR_13.lock);
 FUNC_18(&VAR_15->list, &VAR_13.dev_list);
 FUNC_32(&VAR_13.lock);

 for (VAR_20 = 0; VAR_20 < VAR_15->pdata->algs_info_size; VAR_20++) {
  for (VAR_21 = 0; VAR_21 < VAR_15->pdata->algs_info[VAR_20].size; VAR_21++) {
   struct ahash_alg *VAR_23;

   VAR_23 = &VAR_15->pdata->algs_info[VAR_20].algs_list[VAR_21];
   VAR_23->export = VAR_11;
   VAR_23->import = VAR_12;
   VAR_23->halg.statesize = sizeof(struct omap_sham_reqctx) +
           VAR_0;
   VAR_19 = FUNC_5(VAR_23);
   if (VAR_19)
    goto err_algs;

   VAR_15->pdata->algs_info[VAR_20].registered++;
  }
 }

 VAR_19 = FUNC_33(&VAR_16->kobj, &VAR_9);
 if (VAR_19) {
  FUNC_8(VAR_16, "could not create sysfs device attrs\n");
  goto err_algs;
 }

 return 0;

err_algs:
 for (VAR_20 = VAR_15->pdata->algs_info_size - 1; VAR_20 >= 0; VAR_20--)
  for (VAR_21 = VAR_15->pdata->algs_info[VAR_20].registered - 1; VAR_21 >= 0; VAR_21--)
   FUNC_6(
     &VAR_15->pdata->algs_info[VAR_20].algs_list[VAR_21]);
err_pm:
 FUNC_23(VAR_16);
 if (!VAR_15->polling_mode)
  FUNC_16(VAR_15->dma_lch);
data_err:
 FUNC_8(VAR_16, "initialization failed.\n");

 return VAR_19;
}
