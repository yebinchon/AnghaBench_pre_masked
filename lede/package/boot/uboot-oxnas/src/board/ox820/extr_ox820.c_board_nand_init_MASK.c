
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct nand_chip {int chip_delay; int read_buf; int dev_ready; TYPE_1__ ecc; int cmd_ctrl; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int VAR_23 ;
 int FUNC_1 (struct nand_chip*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct nand_chip *VAR_26)
{

 FUNC_3(VAR_22, 1);
 FUNC_3(VAR_22, 0);


 FUNC_0(VAR_21);



 FUNC_2(VAR_1, 12, VAR_4);
 FUNC_2(VAR_1, 13, VAR_5);
 FUNC_2(VAR_1, 14, VAR_6);
 FUNC_2(VAR_1, 15, VAR_7);
 FUNC_2(VAR_1, 16, VAR_8);
 FUNC_2(VAR_1, 17, VAR_9);
 FUNC_2(VAR_1, 18, VAR_10);
 FUNC_2(VAR_1, 19, VAR_11);

 FUNC_2(VAR_1, 20, VAR_14);
 FUNC_2(VAR_1, 21, VAR_13);
 FUNC_2(VAR_1, 22, VAR_12);
 FUNC_2(VAR_1, 23, VAR_2);
 FUNC_2(VAR_1, 24, VAR_3);



 FUNC_4((0x3f << VAR_17)
   | (0x3f << VAR_19)
   | (0x1f << VAR_20)
   | (0x03 << VAR_18) |
   VAR_15,
  VAR_16);

 VAR_26->cmd_ctrl = VAR_24;
 VAR_26->ecc.mode = VAR_0;
 VAR_26->chip_delay = 30;
 VAR_26->dev_ready = VAR_23;
 VAR_26->read_buf = VAR_25;

 FUNC_1(VAR_26);

 return 0;
}
