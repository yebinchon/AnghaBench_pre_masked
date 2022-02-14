
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lima_ip {scalar_t__ id; int irq; struct lima_device* dev; } ;
struct lima_device {TYPE_2__* empty_vm; int dev; } ;
struct TYPE_3__ {int dma; } ;
struct TYPE_4__ {TYPE_1__ pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct lima_ip*) ;
 int FUNC_2 (struct lima_ip*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct lima_ip *VAR_13)
{
 struct lima_device *VAR_14 = VAR_13->dev;
 int VAR_15;
 u32 VAR_16;

 if (VAR_13->id == VAR_11)
  return 0;

 FUNC_5(VAR_5, 0xCAFEBABE);
 if (FUNC_4(VAR_5) != 0xCAFEB000) {
  FUNC_0(VAR_14->dev, "mmu %s dte write test fail\n", FUNC_2(VAR_13));
  return -VAR_0;
 }

 FUNC_5(VAR_2, VAR_4);
 VAR_15 = FUNC_3(VAR_4,
        VAR_5, VAR_16, VAR_16 == 0);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_14->dev, VAR_13->irq, VAR_12,
          VAR_1, FUNC_2(VAR_13), VAR_13);
 if (VAR_15) {
  FUNC_0(VAR_14->dev, "mmu %s fail to request irq\n", FUNC_2(VAR_13));
  return VAR_15;
 }

 FUNC_5(VAR_6, VAR_7 | VAR_8);
 FUNC_5(VAR_5, VAR_14->empty_vm->pd.dma);
 return FUNC_3(VAR_3,
         VAR_9, VAR_16,
         VAR_16 & VAR_10);
}
