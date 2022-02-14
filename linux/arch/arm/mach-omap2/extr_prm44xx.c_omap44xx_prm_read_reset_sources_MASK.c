
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct prm_reset_src_map {int reg_shift; int std_shift; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct prm_reset_src_map* VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static u32 FUNC_2(void)
{
 struct prm_reset_src_map *VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5;
 s32 VAR_6 = FUNC_1();

 if (VAR_6 == VAR_1)
  return 0;


 VAR_5 = FUNC_0(VAR_6,
        VAR_0);

 VAR_3 = VAR_2;
 while (VAR_3->reg_shift >= 0 && VAR_3->std_shift >= 0) {
  if (VAR_5 & (1 << VAR_3->reg_shift))
   VAR_4 |= 1 << VAR_3->std_shift;
  VAR_3++;
 }

 return VAR_4;
}
