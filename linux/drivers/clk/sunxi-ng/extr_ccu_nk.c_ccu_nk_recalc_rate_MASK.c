
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_6__ {int features; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_5__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct TYPE_4__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct ccu_nk {unsigned long fixed_post_div; TYPE_3__ common; TYPE_2__ k; TYPE_1__ n; } ;


 int VAR_0 ;
 struct ccu_nk* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct ccu_nk *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_3->common.base + VAR_3->common.reg);

 VAR_5 = VAR_7 >> VAR_3->n.shift;
 VAR_5 &= (1 << VAR_3->n.width) - 1;
 VAR_5 += VAR_3->n.offset;
 if (!VAR_5)
  VAR_5++;

 VAR_6 = VAR_7 >> VAR_3->k.shift;
 VAR_6 &= (1 << VAR_3->k.width) - 1;
 VAR_6 += VAR_3->k.offset;
 if (!VAR_6)
  VAR_6++;

 VAR_4 = VAR_2 * VAR_5 * VAR_6;
 if (VAR_3->common.features & VAR_0)
  VAR_4 /= VAR_3->fixed_post_div;

 return VAR_4;
}
