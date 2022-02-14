
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idx; int dma_addr; int * buf; } ;
struct TYPE_3__ {scalar_t__ idx; int dma_addr; int * buf; } ;
struct rsxx_dma_ctrl {scalar_t__ regmap; TYPE_2__ cmd; TYPE_1__ status; } ;
struct pci_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct pci_dev *VAR_14, struct rsxx_dma_ctrl *VAR_15)
{
 VAR_15->status.buf = FUNC_1(&VAR_14->dev, VAR_11,
    &VAR_15->status.dma_addr, VAR_5);
 VAR_15->cmd.buf = FUNC_1(&VAR_14->dev, VAR_2,
    &VAR_15->cmd.dma_addr, VAR_5);
 if (VAR_15->status.buf == ((void*)0) || VAR_15->cmd.buf == ((void*)0))
  return -VAR_4;

 FUNC_5(VAR_15->status.buf, 0xac, VAR_11);
 FUNC_3(FUNC_4(VAR_15->status.dma_addr),
  VAR_15->regmap + VAR_10);
 FUNC_3(FUNC_6(VAR_15->status.dma_addr),
  VAR_15->regmap + VAR_9);

 FUNC_5(VAR_15->cmd.buf, 0x83, VAR_2);
 FUNC_3(FUNC_4(VAR_15->cmd.dma_addr), VAR_15->regmap + VAR_1);
 FUNC_3(FUNC_6(VAR_15->cmd.dma_addr), VAR_15->regmap + VAR_0);

 VAR_15->status.idx = FUNC_2(VAR_15->regmap + VAR_7);
 if (VAR_15->status.idx > VAR_8) {
  FUNC_0(&VAR_14->dev, "Failed reading status cnt x%x\n",
   VAR_15->status.idx);
  return -VAR_3;
 }
 FUNC_3(VAR_15->status.idx, VAR_15->regmap + VAR_7);
 FUNC_3(VAR_15->status.idx, VAR_15->regmap + VAR_13);

 VAR_15->cmd.idx = FUNC_2(VAR_15->regmap + VAR_6);
 if (VAR_15->cmd.idx > VAR_8) {
  FUNC_0(&VAR_14->dev, "Failed reading cmd cnt x%x\n",
   VAR_15->status.idx);
  return -VAR_3;
 }
 FUNC_3(VAR_15->cmd.idx, VAR_15->regmap + VAR_6);
 FUNC_3(VAR_15->cmd.idx, VAR_15->regmap + VAR_12);

 return 0;
}
