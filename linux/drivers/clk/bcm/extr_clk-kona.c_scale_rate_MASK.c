
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int frac_width; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct bcm_clk_div {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (struct bcm_clk_div*) ;

__attribute__((used)) static inline u64
FUNC_1(struct bcm_clk_div *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0))
  return (u64)VAR_1;

 return (u64)VAR_1 << VAR_0->u.s.frac_width;
}
