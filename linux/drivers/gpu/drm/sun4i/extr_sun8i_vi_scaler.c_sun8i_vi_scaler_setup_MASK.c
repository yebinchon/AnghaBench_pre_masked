
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int regs; } ;
struct sun8i_mixer {TYPE_2__ engine; TYPE_1__* cfg; } ;
struct drm_format_info {int hsub; int vsub; } ;
struct TYPE_3__ {scalar_t__ is_de3; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct sun8i_mixer*,int) ;
 int FUNC_15 (int ,int,int,int,struct drm_format_info const*) ;

void FUNC_16(struct sun8i_mixer *VAR_4, int VAR_5,
      u32 VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9,
      u32 VAR_10, u32 VAR_11, u32 VAR_12, u32 VAR_13,
      const struct drm_format_info *VAR_14)
{
 u32 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 u32 VAR_19;

 VAR_19 = FUNC_14(VAR_4, VAR_5);

 VAR_12 <<= VAR_2 - 16;
 VAR_13 <<= VAR_2 - 16;
 VAR_10 <<= VAR_3 - 16;
 VAR_11 <<= VAR_3 - 16;

 VAR_17 = FUNC_12(VAR_6, VAR_7);
 VAR_18 = FUNC_12(VAR_8, VAR_9);






 if (VAR_14->hsub == 2 && VAR_14->vsub == 2) {
  VAR_15 = VAR_12 >> 1;
  VAR_16 = (VAR_13 >> 1) -
   (1UL << (VAR_3 - 2));
 } else {
  VAR_15 = VAR_12;
  VAR_16 = VAR_13;
 }

 if (VAR_4->cfg->is_de3) {
  u32 VAR_20;

  if (VAR_14->hsub == 1 && VAR_14->vsub == 1)
   VAR_20 = VAR_1;
  else
   VAR_20 = VAR_0;

  FUNC_13(VAR_4->engine.regs,
        FUNC_0(VAR_19), VAR_20);
 }

 FUNC_13(VAR_4->engine.regs,
       FUNC_6(VAR_19), VAR_18);
 FUNC_13(VAR_4->engine.regs,
       FUNC_9(VAR_19), VAR_17);
 FUNC_13(VAR_4->engine.regs,
       FUNC_8(VAR_19), VAR_10);
 FUNC_13(VAR_4->engine.regs,
       FUNC_11(VAR_19), VAR_11);
 FUNC_13(VAR_4->engine.regs,
       FUNC_7(VAR_19), VAR_12);
 FUNC_13(VAR_4->engine.regs,
       FUNC_10(VAR_19), VAR_13);
 FUNC_13(VAR_4->engine.regs,
       FUNC_3(VAR_19),
       FUNC_12(VAR_6 / VAR_14->hsub,
       VAR_7 / VAR_14->vsub));
 FUNC_13(VAR_4->engine.regs,
       FUNC_2(VAR_19),
       VAR_10 / VAR_14->hsub);
 FUNC_13(VAR_4->engine.regs,
       FUNC_5(VAR_19),
       VAR_11 / VAR_14->vsub);
 FUNC_13(VAR_4->engine.regs,
       FUNC_1(VAR_19), VAR_15);
 FUNC_13(VAR_4->engine.regs,
       FUNC_4(VAR_19), VAR_16);
 FUNC_15(VAR_4->engine.regs, VAR_19,
      VAR_10, VAR_11, VAR_14);
}
