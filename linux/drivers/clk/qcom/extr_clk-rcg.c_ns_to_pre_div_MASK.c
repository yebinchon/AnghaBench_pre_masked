
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pre_div {int pre_div_shift; int pre_div_width; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct pre_div *VAR_0, u32 VAR_1)
{
 VAR_1 >>= VAR_0->pre_div_shift;
 VAR_1 &= FUNC_0(VAR_0->pre_div_width) - 1;
 return VAR_1;
}
