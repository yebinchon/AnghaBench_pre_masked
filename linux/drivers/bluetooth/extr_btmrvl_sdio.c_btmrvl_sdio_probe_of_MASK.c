
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
struct btmrvl_sdio_card {scalar_t__ plt_of_node; struct btmrvl_plt_wake_cfg* plt_wake_cfg; } ;
struct btmrvl_plt_wake_cfg {int irq_bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 struct btmrvl_plt_wake_cfg* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int,int ,int ,char*,struct btmrvl_sdio_card*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3,
    struct btmrvl_sdio_card *VAR_4)
{
 struct btmrvl_plt_wake_cfg *VAR_5;
 int VAR_6;

 if (!VAR_3->of_node ||
     !FUNC_6(VAR_1, VAR_3->of_node)) {
  FUNC_1(VAR_3, "sdio device tree data not available\n");
  return -1;
 }

 VAR_4->plt_of_node = VAR_3->of_node;

 VAR_4->plt_wake_cfg = FUNC_2(VAR_3, sizeof(*VAR_4->plt_wake_cfg),
       VAR_0);
 VAR_5 = VAR_4->plt_wake_cfg;
 if (VAR_5 && VAR_4->plt_of_node) {
  VAR_5->irq_bt = FUNC_5(VAR_4->plt_of_node, 0);
  if (!VAR_5->irq_bt) {
   FUNC_0(VAR_3, "fail to parse irq_bt from device tree\n");
   VAR_5->irq_bt = -1;
  } else {
   VAR_6 = FUNC_3(VAR_3, VAR_5->irq_bt,
            VAR_2,
            0, "bt_wake", VAR_4);
   if (VAR_6) {
    FUNC_0(VAR_3,
     "Failed to request irq_bt %d (%d)\n",
     VAR_5->irq_bt, VAR_6);
   }
   FUNC_4(VAR_5->irq_bt);
  }
 }

 return 0;
}
