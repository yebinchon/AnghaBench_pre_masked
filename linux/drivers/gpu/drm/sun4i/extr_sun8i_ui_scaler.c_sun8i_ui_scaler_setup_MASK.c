
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int regs; } ;
struct sun8i_mixer {TYPE_2__ engine; TYPE_1__* cfg; } ;
struct TYPE_3__ {int vi_num; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int) ;
 int* VAR_3 ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct sun8i_mixer*,int) ;
 int FUNC_11 (int) ;

void FUNC_12(struct sun8i_mixer *VAR_4, int VAR_5,
      u32 VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9,
      u32 VAR_10, u32 VAR_11, u32 VAR_12, u32 VAR_13)
{
 u32 VAR_14, VAR_15;
 int VAR_16, VAR_17;
 u32 VAR_18;

 if (FUNC_8(VAR_5 < VAR_4->cfg->vi_num))
  return;

 VAR_18 = FUNC_10(VAR_4, VAR_5);

 VAR_12 <<= VAR_1 - 16;
 VAR_13 <<= VAR_1 - 16;
 VAR_10 <<= VAR_2 - 16;
 VAR_11 <<= VAR_2 - 16;

 VAR_14 = FUNC_7(VAR_6, VAR_7);
 VAR_15 = FUNC_7(VAR_8, VAR_9);

 FUNC_9(VAR_4->engine.regs,
       FUNC_4(VAR_18), VAR_15);
 FUNC_9(VAR_4->engine.regs,
       FUNC_3(VAR_18), VAR_14);
 FUNC_9(VAR_4->engine.regs,
       FUNC_2(VAR_18), VAR_10);
 FUNC_9(VAR_4->engine.regs,
       FUNC_6(VAR_18), VAR_11);
 FUNC_9(VAR_4->engine.regs,
       FUNC_1(VAR_18), VAR_12);
 FUNC_9(VAR_4->engine.regs,
       FUNC_5(VAR_18), VAR_13);
 VAR_17 = FUNC_11(VAR_10) *
   VAR_0;
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
  FUNC_9(VAR_4->engine.regs,
        FUNC_0(VAR_18, VAR_16),
        VAR_3[VAR_17 + VAR_16]);
}
