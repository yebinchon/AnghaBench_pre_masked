
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ frac_width; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct bcm_clk_div {TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bcm_clk_div*) ;
 scalar_t__ FUNC_2 (struct bcm_clk_div*) ;

__attribute__((used)) static inline u32
FUNC_3(struct bcm_clk_div *VAR_0, u64 VAR_1)
{
 FUNC_0(VAR_1 < FUNC_2(VAR_0));
 FUNC_0(VAR_1 > FUNC_1(VAR_0));

 return (u32)(VAR_1 - ((u64)1 << VAR_0->u.s.frac_width));
}
