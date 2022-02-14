
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int frac_width; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct bcm_clk_div {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

u64 FUNC_2(struct bcm_clk_div *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u64 VAR_4;

 FUNC_0(!VAR_2);
 FUNC_0(VAR_3 >= VAR_0);

 VAR_4 = (u64)VAR_2 * VAR_0 + VAR_3;
 VAR_4 <<= VAR_1->u.s.frac_width;

 return FUNC_1(VAR_4, VAR_0);
}
