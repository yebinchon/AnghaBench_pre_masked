
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {scalar_t__ regs; } ;
struct mtk_disp_rdma {int data; TYPE_1__ ddp_comp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*) ;
 struct mtk_disp_rdma* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,int ,int ,int ,struct mtk_disp_rdma*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct device*,int ,TYPE_1__*,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct mtk_disp_rdma*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct mtk_disp_rdma *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_13 = FUNC_8(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_5(VAR_10->of_node, VAR_5);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10, "Failed to identify by alias: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_14 = FUNC_6(VAR_10, VAR_10->of_node, &VAR_11->ddp_comp, VAR_12,
    &VAR_7);
 if (VAR_14) {
  FUNC_1(VAR_10, "Failed to initialize component: %d\n", VAR_14);
  return VAR_14;
 }


 FUNC_10(0x0, VAR_11->ddp_comp.regs + VAR_0);
 FUNC_10(0x0, VAR_11->ddp_comp.regs + VAR_1);

 VAR_14 = FUNC_4(VAR_10, VAR_13, VAR_8,
          VAR_4, FUNC_2(VAR_10), VAR_11);
 if (VAR_14 < 0) {
  FUNC_1(VAR_10, "Failed to request irq %d: %d\n", VAR_13, VAR_14);
  return VAR_14;
 }

 VAR_11->data = FUNC_7(VAR_10);

 FUNC_9(VAR_9, VAR_11);

 VAR_14 = FUNC_0(VAR_10, &VAR_6);
 if (VAR_14)
  FUNC_1(VAR_10, "Failed to add component: %d\n", VAR_14);

 return VAR_14;
}
