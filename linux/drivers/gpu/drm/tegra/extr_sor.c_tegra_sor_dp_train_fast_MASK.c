
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tegra_sor {int aux; TYPE_2__* soc; } ;
struct drm_dp_link {unsigned int num_lanes; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int dp_padctl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_23 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_24 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_25 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct drm_dp_link*,int) ;
 int FUNC_15 (struct tegra_sor*,int ) ;
 int FUNC_16 (struct tegra_sor*,int,int ) ;
 int FUNC_17 (int,int) ;

__attribute__((used)) static int FUNC_18(struct tegra_sor *VAR_26,
       struct drm_dp_link *VAR_27)
{
 unsigned int VAR_28;
 u8 VAR_29;
 u32 VAR_30;
 int VAR_31;


 VAR_30 = FUNC_4(0x40) |
  FUNC_3(0x40) |
  FUNC_2(0x40) |
  FUNC_1(0x40);
 FUNC_16(VAR_26, VAR_30, VAR_22);

 VAR_30 = FUNC_12(0x0f) |
  FUNC_11(0x0f) |
  FUNC_10(0x0f) |
  FUNC_9(0x0f);
 FUNC_16(VAR_26, VAR_30, VAR_24);

 VAR_30 = FUNC_8(0x00) |
  FUNC_7(0x00) |
  FUNC_6(0x00) |
  FUNC_5(0x00);
 FUNC_16(VAR_26, VAR_30, VAR_23);


 FUNC_16(VAR_26, 0, VAR_25);

 VAR_30 = FUNC_15(VAR_26, VAR_26->soc->regs->dp_padctl0);
 VAR_30 |= VAR_9;
 VAR_30 &= ~VAR_10;
 VAR_30 |= FUNC_0(2);
 FUNC_16(VAR_26, VAR_30, VAR_26->soc->regs->dp_padctl0);

 VAR_30 = FUNC_15(VAR_26, VAR_26->soc->regs->dp_padctl0);
 VAR_30 |= VAR_8 | VAR_7 |
   VAR_6 | VAR_5;
 FUNC_16(VAR_26, VAR_30, VAR_26->soc->regs->dp_padctl0);

 FUNC_17(10, 100);

 VAR_30 = FUNC_15(VAR_26, VAR_26->soc->regs->dp_padctl0);
 VAR_30 &= ~(VAR_8 | VAR_7 |
     VAR_6 | VAR_5);
 FUNC_16(VAR_26, VAR_30, VAR_26->soc->regs->dp_padctl0);

 VAR_31 = FUNC_13(VAR_26->aux, VAR_1);
 if (VAR_31 < 0)
  return VAR_31;

 for (VAR_28 = 0, VAR_30 = 0; VAR_28 < VAR_27->num_lanes; VAR_28++) {
  unsigned long VAR_32 = VAR_16 |
         VAR_21 |
         VAR_18;
  VAR_30 = (VAR_30 << 8) | VAR_32;
 }

 FUNC_16(VAR_26, VAR_30, VAR_15);

 VAR_29 = VAR_2;

 VAR_31 = FUNC_14(VAR_26->aux, VAR_27, VAR_29);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_30 = FUNC_15(VAR_26, VAR_11);
 VAR_30 |= VAR_14;
 VAR_30 &= ~VAR_13;
 VAR_30 |= VAR_12;
 FUNC_16(VAR_26, VAR_30, VAR_11);

 for (VAR_28 = 0, VAR_30 = 0; VAR_28 < VAR_27->num_lanes; VAR_28++) {
  unsigned long VAR_33 = VAR_16 |
         VAR_21 |
         VAR_19;
  VAR_30 = (VAR_30 << 8) | VAR_33;
 }

 FUNC_16(VAR_26, VAR_30, VAR_15);

 VAR_29 = VAR_0 | VAR_3;

 VAR_31 = FUNC_14(VAR_26->aux, VAR_27, VAR_29);
 if (VAR_31 < 0)
  return VAR_31;

 for (VAR_28 = 0, VAR_30 = 0; VAR_28 < VAR_27->num_lanes; VAR_28++) {
  unsigned long VAR_34 = VAR_16 |
         VAR_20 |
         VAR_17;
  VAR_30 = (VAR_30 << 8) | VAR_34;
 }

 FUNC_16(VAR_26, VAR_30, VAR_15);

 VAR_29 = VAR_4;

 VAR_31 = FUNC_14(VAR_26->aux, VAR_27, VAR_29);
 if (VAR_31 < 0)
  return VAR_31;

 return 0;
}
