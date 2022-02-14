
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bmc150_magn_trim_regs {scalar_t__ x1; scalar_t__ x2; scalar_t__ xy1; scalar_t__ xy2; int xyz1; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static s32 FUNC_1(struct bmc150_magn_trim_regs *VAR_2, s16 VAR_3,
        u16 VAR_4)
{
 s16 VAR_5;
 u16 VAR_6 = FUNC_0(VAR_2->xyz1);

 if (VAR_3 == VAR_0)
  return VAR_1;

 if (!VAR_4)
  VAR_4 = VAR_6;

 VAR_5 = ((s16)(((u16)((((s32)VAR_6) << 14) / VAR_4)) - ((u16)0x4000)));
 VAR_5 = ((s16)((((s32)VAR_3) * ((((((((s32)VAR_2->xy2) * ((((s32)VAR_5) *
       ((s32)VAR_5)) >> 7)) + (((s32)VAR_5) *
       ((s32)(((s16)VAR_2->xy1) << 7)))) >> 9) + ((s32)0x100000)) *
       ((s32)(((s16)VAR_2->x2) + ((s16)0xA0)))) >> 12)) >> 13)) +
       (((s16)VAR_2->x1) << 3);

 return (s32)VAR_5;
}
