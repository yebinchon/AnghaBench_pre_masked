
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct trinity_power_info {scalar_t__ override_dynamic_mgpg; } ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_div; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int,scalar_t__,int,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_12 (struct radeon_device*) ;
 struct trinity_power_info* FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_15(struct radeon_device *VAR_10)
{
 struct trinity_power_info *VAR_11 = FUNC_13(VAR_10);
 u32 VAR_12, VAR_13;
 u32 VAR_14;
 struct atom_clock_dividers VAR_15;
 u32 VAR_16 = FUNC_12(VAR_10);
 u32 VAR_17 = 1;
 int VAR_18;
 u32 VAR_19 = (FUNC_2(VAR_7) & VAR_0) >> VAR_1;

 VAR_18 = FUNC_11(VAR_10, VAR_5,
          25000, 0, &VAR_15);
 if (VAR_18)
  return;

 VAR_14 = FUNC_3(VAR_6);
 VAR_14 &= ~(VAR_9 | VAR_8);
 if (VAR_17)
  VAR_14 |= FUNC_5(1);
 VAR_14 |= FUNC_1(VAR_15.post_div);
 FUNC_9(VAR_6, VAR_14);

 FUNC_10(500, VAR_16, 16, &VAR_12, &VAR_13);

 FUNC_7(VAR_4, FUNC_4(VAR_12) | FUNC_6(VAR_13));

 FUNC_8(VAR_2, FUNC_0(VAR_12), ~VAR_3);


 if (VAR_11->override_dynamic_mgpg && (VAR_19 == 0))
  FUNC_14(VAR_10);

}
