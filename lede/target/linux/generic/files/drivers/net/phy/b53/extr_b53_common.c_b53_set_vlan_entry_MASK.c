
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b53_device {int core_rev; int * vta_regs; } ;


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
 int FUNC_0 (struct b53_device*,int ) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;
 int FUNC_2 (struct b53_device*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;

__attribute__((used)) static void FUNC_5(struct b53_device *VAR_18, u16 VAR_19, u16 VAR_20,
          u16 VAR_21)
{
 if (FUNC_3(VAR_18)) {
  u32 VAR_22 = 0;

  if (VAR_20) {
   VAR_22 = ((VAR_21 & VAR_6) << VAR_8) |
    VAR_20;
   if (VAR_18->core_rev >= 3)
    VAR_22 |= VAR_11 | VAR_19 << VAR_13;
   else
    VAR_22 |= VAR_10;
  }

  FUNC_2(VAR_18, VAR_1, VAR_4, VAR_22);
  FUNC_1(VAR_18, VAR_1, VAR_2, VAR_19 |
       VAR_16 | VAR_15);
 } else if (FUNC_4(VAR_18)) {
  u16 VAR_23 = 0;

  if (VAR_20)
   VAR_23 = ((VAR_21 & VAR_7) << VAR_9) |
    VAR_20 | VAR_12;

  FUNC_1(VAR_18, VAR_1, VAR_5, VAR_23);
  FUNC_1(VAR_18, VAR_1, VAR_3, VAR_19 |
       VAR_16 | VAR_15);
 } else {
  FUNC_1(VAR_18, VAR_0, VAR_18->vta_regs[1], VAR_19);
  FUNC_2(VAR_18, VAR_0, VAR_18->vta_regs[2],
       (VAR_21 << VAR_17) | VAR_20);

  FUNC_0(VAR_18, VAR_14);
 }
}
