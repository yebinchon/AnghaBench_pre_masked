
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct a37xx_mbox* con_priv; } ;
struct armada_37xx_rwtm_tx_msg {int command; int * args; } ;
struct a37xx_mbox {scalar_t__ base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mbox_chan *VAR_7, void *VAR_8)
{
 struct a37xx_mbox *VAR_9 = VAR_7->con_priv;
 struct armada_37xx_rwtm_tx_msg *VAR_10 = VAR_8;
 int VAR_11;
 u32 VAR_12;

 if (!VAR_8)
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_9->base + VAR_6);
 if (!(VAR_12 & VAR_4))
  FUNC_2(VAR_9->dev, "Secure processor not ready\n");

 if ((VAR_12 & VAR_2) >= VAR_3) {
  FUNC_1(VAR_9->dev, "Secure processor command queue full\n");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < 16; ++VAR_11)
  FUNC_4(VAR_10->args[VAR_11], VAR_9->base + FUNC_0(VAR_11));
 FUNC_4(VAR_10->command, VAR_9->base + VAR_5);

 return 0;
}
