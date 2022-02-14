
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int fixed; } ;
struct bcm_clk_div {TYPE_1__ u; } ;


 scalar_t__ FUNC_0 (struct bcm_clk_div*) ;
 int FUNC_1 (struct bcm_clk_div*,int ) ;

__attribute__((used)) static inline u64
FUNC_2(struct bcm_clk_div *VAR_0)
{
 if (FUNC_0(VAR_0))
  return (u64)VAR_0->u.fixed;

 return FUNC_1(VAR_0, 0);
}
