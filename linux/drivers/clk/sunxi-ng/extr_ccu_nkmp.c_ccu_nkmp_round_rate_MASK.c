
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_10__ {int features; } ;
struct TYPE_9__ {int width; scalar_t__ max; } ;
struct TYPE_8__ {int width; scalar_t__ max; } ;
struct TYPE_7__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct TYPE_6__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct ccu_nkmp {unsigned long fixed_post_div; unsigned long max_rate; TYPE_5__ common; TYPE_4__ p; TYPE_3__ m; TYPE_2__ k; TYPE_1__ n; } ;
struct _ccu_nkmp {int min_n; int max_n; int min_k; int max_k; int min_m; int max_m; int min_p; int max_p; int p; int m; int k; int n; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned long,unsigned long,struct _ccu_nkmp*) ;
 struct ccu_nkmp* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long *VAR_3)
{
 struct ccu_nkmp *VAR_4 = FUNC_2(VAR_1);
 struct _ccu_nkmp VAR_5;

 if (VAR_4->common.features & VAR_0)
  VAR_2 *= VAR_4->fixed_post_div;

 if (VAR_4->max_rate && VAR_2 > VAR_4->max_rate) {
  VAR_2 = VAR_4->max_rate;
  if (VAR_4->common.features & VAR_0)
   VAR_2 /= VAR_4->fixed_post_div;
  return VAR_2;
 }

 VAR_5.min_n = VAR_4->n.min ?: 1;
 VAR_5.max_n = VAR_4->n.max ?: 1 << VAR_4->n.width;
 VAR_5.min_k = VAR_4->k.min ?: 1;
 VAR_5.max_k = VAR_4->k.max ?: 1 << VAR_4->k.width;
 VAR_5.min_m = 1;
 VAR_5.max_m = VAR_4->m.max ?: 1 << VAR_4->m.width;
 VAR_5.min_p = 1;
 VAR_5.max_p = VAR_4->p.max ?: 1 << ((1 << VAR_4->p.width) - 1);

 FUNC_1(*VAR_3, VAR_2, &VAR_5);

 VAR_2 = FUNC_0(*VAR_3, VAR_5.n, VAR_5.k,
      VAR_5.m, VAR_5.p);
 if (VAR_4->common.features & VAR_0)
  VAR_2 = VAR_2 / VAR_4->fixed_post_div;

 return VAR_2;
}
