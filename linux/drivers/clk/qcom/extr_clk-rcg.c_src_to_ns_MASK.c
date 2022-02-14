
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct src_sel {int src_sel_shift; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct src_sel *VAR_1, u8 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_0;
 VAR_4 <<= VAR_1->src_sel_shift;
 VAR_3 &= ~VAR_4;

 VAR_3 |= VAR_2 << VAR_1->src_sel_shift;
 return VAR_3;
}
