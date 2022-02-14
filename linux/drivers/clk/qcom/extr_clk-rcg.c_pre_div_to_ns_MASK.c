
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pre_div {int pre_div_shift; int pre_div_width; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct pre_div *VAR_0, u8 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0->pre_div_width) - 1;
 VAR_3 <<= VAR_0->pre_div_shift;
 VAR_2 &= ~VAR_3;

 VAR_2 |= VAR_1 << VAR_0->pre_div_shift;
 return VAR_2;
}
