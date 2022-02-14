
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mn {int mnctr_mode_shift; int mnctr_en_bit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct mn *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 VAR_6 = VAR_1 << VAR_2->mnctr_mode_shift;
 VAR_6 |= FUNC_0(VAR_2->mnctr_en_bit);
 VAR_5 &= ~VAR_6;

 if (VAR_4) {
  VAR_5 |= FUNC_0(VAR_2->mnctr_en_bit);
  VAR_5 |= VAR_0 << VAR_2->mnctr_mode_shift;
 }

 return VAR_5;
}
