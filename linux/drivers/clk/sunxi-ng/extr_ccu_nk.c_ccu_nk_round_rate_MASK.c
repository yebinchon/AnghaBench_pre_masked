
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_6__ {int features; } ;
struct TYPE_5__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct TYPE_4__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct ccu_nk {unsigned long fixed_post_div; TYPE_3__ common; TYPE_2__ k; TYPE_1__ n; } ;
struct _ccu_nk {int min_n; int max_n; int min_k; int max_k; unsigned long n; unsigned long k; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,struct _ccu_nk*) ;
 struct ccu_nk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long *VAR_3)
{
 struct ccu_nk *VAR_4 = FUNC_1(VAR_1);
 struct _ccu_nk VAR_5;

 if (VAR_4->common.features & VAR_0)
  VAR_2 *= VAR_4->fixed_post_div;

 VAR_5.min_n = VAR_4->n.min ?: 1;
 VAR_5.max_n = VAR_4->n.max ?: 1 << VAR_4->n.width;
 VAR_5.min_k = VAR_4->k.min ?: 1;
 VAR_5.max_k = VAR_4->k.max ?: 1 << VAR_4->k.width;

 FUNC_0(*VAR_3, VAR_2, &VAR_5);
 VAR_2 = *VAR_3 * VAR_5.n * VAR_5.k;

 if (VAR_4->common.features & VAR_0)
  VAR_2 = VAR_2 / VAR_4->fixed_post_div;

 return VAR_2;
}
