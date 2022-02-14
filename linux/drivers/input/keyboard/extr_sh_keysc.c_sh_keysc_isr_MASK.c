
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_keysc_info {size_t mode; int* keycodes; int delay; } ;
struct sh_keysc_priv {int input; int last_keys; struct sh_keysc_info pdata; } ;
struct platform_device {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int keyout; int keyin; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sh_keysc_priv* FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct sh_keysc_priv*,unsigned char) ;
 int FUNC_13 (int *,int ,char*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_14 (struct sh_keysc_priv*,int ) ;
 int FUNC_15 (struct sh_keysc_priv*,int ,int) ;
 scalar_t__ FUNC_16 (int,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_11, void *VAR_12)
{
 struct platform_device *VAR_13 = VAR_12;
 struct sh_keysc_priv *VAR_14 = FUNC_11(VAR_13);
 struct sh_keysc_info *VAR_15 = &VAR_14->pdata;
 int VAR_16 = VAR_10[VAR_15->mode].keyout;
 int VAR_17 = VAR_10[VAR_15->mode].keyin;
 FUNC_0(VAR_7, VAR_6);
 FUNC_0(VAR_8, VAR_6);
 FUNC_0(VAR_9, VAR_6);
 unsigned char VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;

 FUNC_8(&VAR_13->dev, "isr!\n");

 FUNC_5(VAR_9, VAR_6);
 FUNC_7(VAR_8, VAR_6);

 do {
  FUNC_7(VAR_7, VAR_6);
  VAR_18 = 0;

  FUNC_15(VAR_14, VAR_2, VAR_3);

  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
   VAR_22 = VAR_17 * VAR_20;


   FUNC_15(VAR_14, VAR_5, 0xffff ^ (3 << (VAR_20 * 2)));
   FUNC_17(VAR_15->delay);
   VAR_19 = FUNC_14(VAR_14, VAR_4);


   for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++) {
    if (VAR_19 & (1 << VAR_21))
     FUNC_2(VAR_22 + VAR_21, VAR_7);
   }


   VAR_18 |= VAR_19 ^ ((1 << VAR_17) - 1);
  }

  FUNC_12(VAR_14, VAR_18);

  FUNC_4(VAR_7, VAR_7, VAR_6);
  FUNC_3(VAR_9, VAR_9, VAR_7, VAR_6);
  FUNC_6(VAR_8, VAR_8, VAR_7, VAR_6);

  FUNC_13(&VAR_13->dev, VAR_7, "keys");

 } while (FUNC_14(VAR_14, VAR_2) & 0x01);

 FUNC_13(&VAR_13->dev, VAR_14->last_keys, "last_keys");
 FUNC_13(&VAR_13->dev, VAR_8, "keys0");
 FUNC_13(&VAR_13->dev, VAR_9, "keys1");

 for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
  VAR_21 = VAR_15->keycodes[VAR_20];
  if (!VAR_21)
   continue;

  if (FUNC_16(VAR_20, VAR_8) == FUNC_16(VAR_20, VAR_14->last_keys))
   continue;

  if (FUNC_16(VAR_20, VAR_9) || FUNC_16(VAR_20, VAR_8)) {
   FUNC_9(VAR_14->input, VAR_0, VAR_21, 1);
   FUNC_2(VAR_20, VAR_14->last_keys);
  }

  if (!FUNC_16(VAR_20, VAR_9)) {
   FUNC_9(VAR_14->input, VAR_0, VAR_21, 0);
   FUNC_1(VAR_20, VAR_14->last_keys);
  }

 }
 FUNC_10(VAR_14->input);

 return VAR_1;
}
