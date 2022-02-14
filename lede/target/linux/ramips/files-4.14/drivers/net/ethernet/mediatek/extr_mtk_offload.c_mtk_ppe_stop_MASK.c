
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mtk_eth {int dev; TYPE_2__* foe_table; } ;
struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ bfib1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mtk_eth*,int,int,int ) ;
 scalar_t__ FUNC_3 (struct mtk_eth*) ;
 int FUNC_4 (struct mtk_eth*,int) ;
 int FUNC_5 (struct mtk_eth*,int,int) ;

__attribute__((used)) static int FUNC_6(struct mtk_eth *VAR_21)
{
 u32 VAR_22 = 0, VAR_23 = 0;
 int VAR_24;


 FUNC_2(VAR_21, 0xffff, 0x7777, FUNC_0(0));
 FUNC_2(VAR_21, 0xffff, 0x7777, FUNC_0(1));

 if (FUNC_3(VAR_21))
  return -VAR_0;


 for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++)
  VAR_21->foe_table[VAR_24].bfib1.state = VAR_1;


 FUNC_2(VAR_21, 0, VAR_3, VAR_16);
 FUNC_2(VAR_21, VAR_3 | VAR_2, 0,
  VAR_16);


 FUNC_2(VAR_21, VAR_10, 0, VAR_18);


 FUNC_2(VAR_21,
  VAR_9 |
  VAR_7 | VAR_8 |
  VAR_6 | VAR_5,
  0, VAR_17);


 FUNC_2(VAR_21, 0,
  VAR_11 | VAR_14 |
  VAR_13 | VAR_15 |
  VAR_12, VAR_20);

 VAR_22 = FUNC_4(VAR_21, 0x100);
 VAR_23 = FUNC_4(VAR_21, 0x10c);

 FUNC_1(VAR_21->dev, "0x100 = 0x%x, 0x10c = 0x%x\n", VAR_22, VAR_23);

 if (((VAR_22 & 0xff00) >> 0x8) >= (VAR_22 & 0xff) ||
     ((VAR_22 & 0xff00) >> 0x8) >= (VAR_23 & 0xff)) {
  FUNC_1(VAR_21->dev, "reset pse\n");
  FUNC_5(VAR_21, 0x1, 0x4);
 }


 FUNC_5(VAR_21, 0, VAR_19);

 if (FUNC_3(VAR_21))
  return -VAR_0;






 FUNC_2(VAR_21, 0xffff, 0x5555, FUNC_0(0));
 FUNC_2(VAR_21, 0xffff, 0x5555, FUNC_0(1));

 return 0;
}
