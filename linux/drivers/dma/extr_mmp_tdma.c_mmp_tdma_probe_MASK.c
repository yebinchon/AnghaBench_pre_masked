
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_11__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_2__* dev; int copy_align; int device_terminate_all; int device_resume; int device_pause; int device_config; int device_issue_pending; int device_tx_status; int device_prep_dma_cyclic; int device_free_chan_resources; int device_alloc_chan_resources; int cap_mask; int channels; } ;
struct mmp_tdma_device {TYPE_3__ device; int base; TYPE_2__* dev; } ;
struct gen_pool {int dummy; } ;
typedef enum mmp_tdma_type { ____Placeholder_mmp_tdma_type } mmp_tdma_type ;
struct TYPE_10__ {int driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 struct mmp_tdma_device* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,char*,struct mmp_tdma_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_12 (struct mmp_tdma_device*,int,int,int,struct gen_pool*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (scalar_t__,int ,struct mmp_tdma_device*) ;
 struct gen_pool* FUNC_14 (scalar_t__,char*,int ) ;
 struct of_device_id* FUNC_15 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_16 (struct platform_device*) ;
 scalar_t__ FUNC_17 (struct platform_device*,int) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct mmp_tdma_device*) ;
 struct gen_pool* FUNC_20 (char*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_19)
{
 enum mmp_tdma_type VAR_20;
 const struct of_device_id *VAR_21;
 struct mmp_tdma_device *VAR_22;
 struct resource *VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = 0, VAR_27 = 0;
 int VAR_28 = VAR_6;
 struct gen_pool *VAR_29 = ((void*)0);

 VAR_21 = FUNC_15(VAR_9, &VAR_19->dev);
 if (VAR_21)
  VAR_20 = (enum mmp_tdma_type) VAR_21->data;
 else
  VAR_20 = FUNC_16(VAR_19)->driver_data;


 VAR_22 = FUNC_7(&VAR_19->dev, sizeof(*VAR_22), VAR_4);
 if (!VAR_22)
  return -VAR_3;

 VAR_22->dev = &VAR_19->dev;

 for (VAR_24 = 0; VAR_24 < VAR_28; VAR_24++) {
  if (FUNC_17(VAR_19, VAR_24) > 0)
   VAR_27++;
 }

 VAR_23 = FUNC_18(VAR_19, VAR_5, 0);
 VAR_22->base = FUNC_6(&VAR_19->dev, VAR_23);
 if (FUNC_2(VAR_22->base))
  return FUNC_3(VAR_22->base);

 FUNC_1(&VAR_22->device.channels);

 if (VAR_19->dev.of_node)
  VAR_29 = FUNC_14(VAR_19->dev.of_node, "asram", 0);
 else
  VAR_29 = FUNC_20("asram");
 if (!VAR_29) {
  FUNC_4(&VAR_19->dev, "asram pool not available\n");
  return -VAR_3;
 }

 if (VAR_27 != VAR_28) {
  VAR_26 = FUNC_17(VAR_19, 0);
  VAR_25 = FUNC_8(&VAR_19->dev, VAR_26,
   VAR_11, 0, "tdma", VAR_22);
  if (VAR_25)
   return VAR_25;
 }


 for (VAR_24 = 0; VAR_24 < VAR_28; VAR_24++) {
  VAR_26 = (VAR_27 != VAR_28) ? 0 : FUNC_17(VAR_19, VAR_24);
  VAR_25 = FUNC_12(VAR_22, VAR_24, VAR_26, VAR_20, VAR_29);
  if (VAR_25)
   return VAR_25;
 }

 FUNC_9(VAR_2, VAR_22->device.cap_mask);
 FUNC_9(VAR_1, VAR_22->device.cap_mask);
 VAR_22->device.dev = &VAR_19->dev;
 VAR_22->device.device_alloc_chan_resources =
     VAR_7;
 VAR_22->device.device_free_chan_resources =
     VAR_10;
 VAR_22->device.device_prep_dma_cyclic = VAR_14;
 VAR_22->device.device_tx_status = VAR_17;
 VAR_22->device.device_issue_pending = VAR_12;
 VAR_22->device.device_config = VAR_8;
 VAR_22->device.device_pause = VAR_13;
 VAR_22->device.device_resume = VAR_15;
 VAR_22->device.device_terminate_all = VAR_16;
 VAR_22->device.copy_align = VAR_0;

 FUNC_10(&VAR_19->dev, FUNC_0(64));
 FUNC_19(VAR_19, VAR_22);

 VAR_25 = FUNC_11(&VAR_22->device);
 if (VAR_25) {
  FUNC_4(VAR_22->device.dev, "unable to register\n");
  return VAR_25;
 }

 if (VAR_19->dev.of_node) {
  VAR_25 = FUNC_13(VAR_19->dev.of_node,
       VAR_18, VAR_22);
  if (VAR_25) {
   FUNC_4(VAR_22->device.dev,
    "failed to register controller\n");
   return VAR_25;
  }
 }

 FUNC_5(VAR_22->device.dev, "initialized\n");
 return 0;
}
