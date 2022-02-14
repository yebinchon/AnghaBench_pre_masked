
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_9__ {int features; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_8__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct TYPE_7__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct ccu_nm {unsigned long fixed_post_div; TYPE_3__ common; int sdm; TYPE_2__ m; TYPE_1__ n; int frac; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;
 unsigned long FUNC_1 (TYPE_3__*,int *) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 unsigned long FUNC_4 (TYPE_3__*,int *,unsigned long,unsigned long) ;
 struct ccu_nm* FUNC_5 (struct clk_hw*) ;
 unsigned long FUNC_6 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_7(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct ccu_nm *VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4;
 unsigned long VAR_5, VAR_6;
 u32 VAR_7;

 if (FUNC_0(&VAR_3->common, &VAR_3->frac)) {
  VAR_4 = FUNC_1(&VAR_3->common, &VAR_3->frac);

  if (VAR_3->common.features & VAR_0)
   VAR_4 /= VAR_3->fixed_post_div;

  return VAR_4;
 }

 VAR_7 = FUNC_6(VAR_3->common.base + VAR_3->common.reg);

 VAR_5 = VAR_7 >> VAR_3->n.shift;
 VAR_5 &= (1 << VAR_3->n.width) - 1;
 VAR_5 += VAR_3->n.offset;
 if (!VAR_5)
  VAR_5++;

 VAR_6 = VAR_7 >> VAR_3->m.shift;
 VAR_6 &= (1 << VAR_3->m.width) - 1;
 VAR_6 += VAR_3->m.offset;
 if (!VAR_6)
  VAR_6++;

 if (FUNC_3(&VAR_3->common, &VAR_3->sdm))
  VAR_4 = FUNC_4(&VAR_3->common, &VAR_3->sdm, VAR_6, VAR_5);
 else
  VAR_4 = FUNC_2(VAR_2, VAR_5, VAR_6);

 if (VAR_3->common.features & VAR_0)
  VAR_4 /= VAR_3->fixed_post_div;

 return VAR_4;
}
