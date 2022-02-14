
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct bmc150_magn_trim_regs {int z4; int z3; int z2; int z1; int xyz1; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static s32 FUNC_1(struct bmc150_magn_trim_regs *VAR_2, s16 VAR_3,
        u16 VAR_4)
{
 s32 VAR_5;
 u16 VAR_6 = FUNC_0(VAR_2->xyz1);
 u16 VAR_7 = FUNC_0(VAR_2->z1);
 s16 VAR_8 = FUNC_0(VAR_2->z2);
 s16 VAR_9 = FUNC_0(VAR_2->z3);
 s16 VAR_10 = FUNC_0(VAR_2->z4);

 if (VAR_3 == VAR_0)
  return VAR_1;

 VAR_5 = (((((s32)(VAR_3 - VAR_10)) << 15) - ((((s32)VAR_9) * ((s32)(((s16)VAR_4) -
       ((s16)VAR_6)))) >> 2)) / (VAR_8 + ((s16)(((((s32)VAR_7) *
       ((((s16)VAR_4) << 1))) + (1 << 15)) >> 16))));

 return VAR_5;
}
