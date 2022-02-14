
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int width; } ;
struct TYPE_4__ {TYPE_1__ s; int fixed; } ;
struct bcm_clk_div {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (struct bcm_clk_div*) ;
 int FUNC_1 (struct bcm_clk_div*,int) ;

u64 FUNC_2(struct bcm_clk_div *VAR_0)
{
 u32 VAR_1;

 if (FUNC_0(VAR_0))
  return (u64)VAR_0->u.fixed;

 VAR_1 = ((u32)1 << VAR_0->u.s.width) - 1;

 return FUNC_1(VAR_0, VAR_1);
}
