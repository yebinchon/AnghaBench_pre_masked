
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_14__ {TYPE_1__* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct ipmmu_vmsa_device {int iommu; TYPE_2__* features; int ctx; struct ipmmu_vmsa_device* root; int num_ctx; int base; int utlb_ctx; int lock; TYPE_3__* dev; } ;
struct TYPE_13__ {int has_cache_leaf_nodes; scalar_t__ reserved_context; int number_of_contexts; scalar_t__ use_ns_alias_offset; int num_utlbs; } ;
struct TYPE_12__ {int fwnode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,struct resource*) ;
 struct ipmmu_vmsa_device* FUNC_9 (TYPE_3__*,int,int ) ;
 int FUNC_10 (TYPE_3__*,int,int ,int ,int ,struct ipmmu_vmsa_device*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,TYPE_3__*,int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ipmmu_vmsa_device*) ;
 struct ipmmu_vmsa_device* FUNC_18 () ;
 int VAR_7 ;
 scalar_t__ FUNC_19 (struct ipmmu_vmsa_device*) ;
 int VAR_8 ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 TYPE_2__* FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_1__*,char*,int *) ;
 int VAR_9 ;
 int FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct ipmmu_vmsa_device*) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_10)
{
 struct ipmmu_vmsa_device *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_9(&VAR_10->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  FUNC_5(&VAR_10->dev, "cannot allocate device data\n");
  return -VAR_0;
 }

 VAR_11->dev = &VAR_10->dev;
 FUNC_28(&VAR_11->lock);
 FUNC_3(VAR_11->ctx, VAR_6);
 VAR_11->features = FUNC_22(&VAR_10->dev);
 FUNC_20(VAR_11->utlb_ctx, VAR_5, VAR_11->features->num_utlbs);
 FUNC_11(&VAR_10->dev, FUNC_0(40));


 VAR_12 = FUNC_25(VAR_10, VAR_4, 0);
 VAR_11->base = FUNC_8(&VAR_10->dev, VAR_12);
 if (FUNC_1(VAR_11->base))
  return FUNC_2(VAR_11->base);
 if (VAR_11->features->use_ns_alias_offset)
  VAR_11->base += VAR_3;

 VAR_11->num_ctx = FUNC_21(VAR_6, VAR_11->features->number_of_contexts);





 if (!VAR_11->features->has_cache_leaf_nodes ||
     !FUNC_23(VAR_10->dev.of_node, "renesas,ipmmu-main", ((void*)0)))
  VAR_11->root = VAR_11;
 else
  VAR_11->root = FUNC_18();




 if (!VAR_11->root)
  return -VAR_1;


 if (FUNC_19(VAR_11)) {
  VAR_13 = FUNC_24(VAR_10, 0);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_14 = FUNC_10(&VAR_10->dev, VAR_13, VAR_7, 0,
           FUNC_7(&VAR_10->dev), VAR_11);
  if (VAR_14 < 0) {
   FUNC_5(&VAR_10->dev, "failed to request IRQ %d\n", VAR_13);
   return VAR_14;
  }

  FUNC_17(VAR_11);

  if (VAR_11->features->reserved_context) {
   FUNC_6(&VAR_10->dev, "IPMMU context 0 is reserved\n");
   FUNC_27(0, VAR_11->ctx);
  }
 }






 if (!VAR_11->features->has_cache_leaf_nodes || !FUNC_19(VAR_11)) {
  VAR_14 = FUNC_15(&VAR_11->iommu, &VAR_10->dev, ((void*)0),
          FUNC_7(&VAR_10->dev));
  if (VAR_14)
   return VAR_14;

  FUNC_14(&VAR_11->iommu, &VAR_8);
  FUNC_13(&VAR_11->iommu,
     &VAR_10->dev.of_node->fwnode);

  VAR_14 = FUNC_12(&VAR_11->iommu);
  if (VAR_14)
   return VAR_14;





 }







 FUNC_26(VAR_10, VAR_11);

 return 0;
}
