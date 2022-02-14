
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {int pm_ier; int pm_imr; struct intel_uncore* uncore; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_uncore*,int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_1(struct intel_gt *VAR_8)
{
 struct intel_uncore *VAR_9 = VAR_8->uncore;


 u32 VAR_10[] = {
  (VAR_7 << VAR_1 |
   VAR_6 << VAR_1 |
   VAR_7 << VAR_0 |
   VAR_6 << VAR_0),

  (VAR_7 << VAR_2 |
   VAR_6 << VAR_2 |
   VAR_7 << VAR_3 |
   VAR_6 << VAR_3),

  0,

  (VAR_7 << VAR_4 |
   VAR_6 << VAR_4)
 };

 VAR_8->pm_ier = 0x0;
 VAR_8->pm_imr = ~VAR_8->pm_ier;
 FUNC_0(VAR_9, VAR_5, 0, ~VAR_10[0], VAR_10[0]);
 FUNC_0(VAR_9, VAR_5, 1, ~VAR_10[1], VAR_10[1]);




 FUNC_0(VAR_9, VAR_5, 2, VAR_8->pm_imr, VAR_8->pm_ier);
 FUNC_0(VAR_9, VAR_5, 3, ~VAR_10[3], VAR_10[3]);
}
