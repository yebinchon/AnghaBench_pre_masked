
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_7__ {int features; } ;
struct TYPE_6__ {int width; scalar_t__ max; } ;
struct TYPE_5__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct ccu_nm {unsigned long fixed_post_div; unsigned long min_rate; unsigned long max_rate; TYPE_3__ common; TYPE_2__ m; TYPE_1__ n; int sdm; int frac; } ;
struct _ccu_nm {int min_n; int max_n; int min_m; int max_m; int m; int n; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ,int ) ;
 int FUNC_2 (unsigned long,unsigned long,struct _ccu_nm*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,unsigned long) ;
 struct ccu_nm* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long *VAR_3)
{
 struct ccu_nm *VAR_4 = FUNC_4(VAR_1);
 struct _ccu_nm VAR_5;

 if (VAR_4->common.features & VAR_0)
  VAR_2 *= VAR_4->fixed_post_div;

 if (VAR_2 < VAR_4->min_rate) {
  VAR_2 = VAR_4->min_rate;
  if (VAR_4->common.features & VAR_0)
   VAR_2 /= VAR_4->fixed_post_div;
  return VAR_2;
 }

 if (VAR_4->max_rate && VAR_2 > VAR_4->max_rate) {
  VAR_2 = VAR_4->max_rate;
  if (VAR_4->common.features & VAR_0)
   VAR_2 /= VAR_4->fixed_post_div;
  return VAR_2;
 }

 if (FUNC_0(&VAR_4->common, &VAR_4->frac, VAR_2)) {
  if (VAR_4->common.features & VAR_0)
   VAR_2 /= VAR_4->fixed_post_div;
  return VAR_2;
 }

 if (FUNC_3(&VAR_4->common, &VAR_4->sdm, VAR_2)) {
  if (VAR_4->common.features & VAR_0)
   VAR_2 /= VAR_4->fixed_post_div;
  return VAR_2;
 }

 VAR_5.min_n = VAR_4->n.min ?: 1;
 VAR_5.max_n = VAR_4->n.max ?: 1 << VAR_4->n.width;
 VAR_5.min_m = 1;
 VAR_5.max_m = VAR_4->m.max ?: 1 << VAR_4->m.width;

 FUNC_2(*VAR_3, VAR_2, &VAR_5);
 VAR_2 = FUNC_1(*VAR_3, VAR_5.n, VAR_5.m);

 if (VAR_4->common.features & VAR_0)
  VAR_2 /= VAR_4->fixed_post_div;

 return VAR_2;
}
