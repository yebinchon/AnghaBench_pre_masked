
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lima_ip {struct lima_device* dev; } ;
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct lima_ip *VAR_9)
{
 struct lima_device *VAR_10 = VAR_9->dev;
 u32 VAR_11 = FUNC_2(VAR_6);
 u32 VAR_12;

 if (VAR_11 & VAR_7) {
  FUNC_0(VAR_10->dev, "mmu resume\n");

  FUNC_3(VAR_3, 0);
  FUNC_3(VAR_2, 0xCAFEBABE);
  FUNC_1(VAR_1,
          VAR_2, VAR_12, VAR_12 == 0);
  FUNC_3(VAR_3, VAR_4 | VAR_5);
  FUNC_3(VAR_2, VAR_10->empty_vm->pd.dma);
  FUNC_1(VAR_0,
          VAR_6, VAR_12,
          VAR_12 & VAR_8);
 }
}
