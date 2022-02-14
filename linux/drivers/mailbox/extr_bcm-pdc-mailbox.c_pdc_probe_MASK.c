
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int end; int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pdc_state {int ring_pool; int rx_buf_pool; int rx_tasklet; int pdc_reg_vbase; int pdc_idx; struct platform_device* pdev; } ;
struct TYPE_2__ {int num_spu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct pdc_state* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (char*,struct device*,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct device*,int ) ;
 int FUNC_11 (struct platform_device*,struct pdc_state*) ;
 int FUNC_12 (struct pdc_state*) ;
 int FUNC_13 (struct pdc_state*) ;
 int FUNC_14 (struct pdc_state*) ;
 int FUNC_15 (struct pdc_state*) ;
 int FUNC_16 (struct pdc_state*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct pdc_state*) ;
 int FUNC_19 (int *,int ,unsigned long) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 int VAR_10 = 0;
 struct device *VAR_11 = &VAR_9->dev;
 struct resource *VAR_12;
 struct pdc_state *VAR_13;


 VAR_13 = FUNC_7(VAR_11, sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_13->pdev = VAR_9;
 FUNC_18(VAR_9, VAR_13);
 VAR_13->pdc_idx = VAR_8.num_spu;
 VAR_8.num_spu++;

 VAR_10 = FUNC_10(VAR_11, FUNC_0(39));
 if (VAR_10) {
  FUNC_5(VAR_11, "PDC device cannot perform DMA. Error %d.", VAR_10);
  goto cleanup;
 }


 VAR_13->ring_pool = FUNC_8("pdc rings", VAR_11, VAR_4,
       VAR_6, 0);
 if (!VAR_13->ring_pool) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_10 = FUNC_11(VAR_9, VAR_13);
 if (VAR_10)
  goto cleanup_ring_pool;

 VAR_12 = FUNC_17(VAR_9, VAR_3, 0);
 if (!VAR_12) {
  VAR_10 = -VAR_0;
  goto cleanup_ring_pool;
 }
 FUNC_3(VAR_11, "PDC register region res.start = %pa, res.end = %pa",
  &VAR_12->start, &VAR_12->end);

 VAR_13->pdc_reg_vbase = FUNC_6(&VAR_9->dev, VAR_12);
 if (FUNC_1(VAR_13->pdc_reg_vbase)) {
  VAR_10 = FUNC_2(VAR_13->pdc_reg_vbase);
  FUNC_4(&VAR_9->dev, "Failed to map registers: %d\n", VAR_10);
  goto cleanup_ring_pool;
 }


 VAR_10 = FUNC_15(VAR_13);
 if (VAR_10)
  goto cleanup_ring_pool;

 FUNC_12(VAR_13);


 FUNC_19(&VAR_13->rx_tasklet, VAR_7, (unsigned long)VAR_13);

 VAR_10 = FUNC_13(VAR_13);
 if (VAR_10)
  goto cleanup_buf_pool;


 VAR_10 = FUNC_14(VAR_13);
 if (VAR_10)
  goto cleanup_buf_pool;

 FUNC_16(VAR_13);

 FUNC_3(VAR_11, "pdc_probe() successful");
 return VAR_5;

cleanup_buf_pool:
 FUNC_20(&VAR_13->rx_tasklet);
 FUNC_9(VAR_13->rx_buf_pool);

cleanup_ring_pool:
 FUNC_9(VAR_13->ring_pool);

cleanup:
 return VAR_10;
}
