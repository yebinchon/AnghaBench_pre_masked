
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct src_sel {int src_sel_shift; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct src_sel *VAR_1, u32 VAR_2)
{
 VAR_2 >>= VAR_1->src_sel_shift;
 VAR_2 &= VAR_0;
 return VAR_2;
}
