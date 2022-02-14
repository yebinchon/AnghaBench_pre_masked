
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_10__ {int features; int lock; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_9__ {int width; int shift; scalar_t__ max; } ;
struct TYPE_8__ {int width; int shift; int offset; scalar_t__ max; } ;
struct TYPE_7__ {int width; int shift; int offset; scalar_t__ max; scalar_t__ min; } ;
struct TYPE_6__ {int width; int shift; int offset; scalar_t__ max; scalar_t__ min; } ;
struct ccu_nkmp {unsigned long fixed_post_div; int lock; TYPE_5__ common; TYPE_4__ p; TYPE_3__ m; TYPE_2__ k; TYPE_1__ n; } ;
struct _ccu_nkmp {int min_n; int max_n; int min_k; int max_k; int min_m; int max_m; int min_p; int max_p; int n; int k; int m; int p; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (unsigned long,unsigned long,struct _ccu_nkmp*) ;
 struct ccu_nkmp* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct ccu_nkmp *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 struct _ccu_nkmp VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;

 if (VAR_4->common.features & VAR_0)
  VAR_2 = VAR_2 * VAR_4->fixed_post_div;

 VAR_9.min_n = VAR_4->n.min ?: 1;
 VAR_9.max_n = VAR_4->n.max ?: 1 << VAR_4->n.width;
 VAR_9.min_k = VAR_4->k.min ?: 1;
 VAR_9.max_k = VAR_4->k.max ?: 1 << VAR_4->k.width;
 VAR_9.min_m = 1;
 VAR_9.max_m = VAR_4->m.max ?: 1 << VAR_4->m.width;
 VAR_9.min_p = 1;
 VAR_9.max_p = VAR_4->p.max ?: 1 << ((1 << VAR_4->p.width) - 1);

 FUNC_2(VAR_3, VAR_2, &VAR_9);







 if (VAR_4->n.width)
  VAR_5 = FUNC_0(VAR_4->n.width + VAR_4->n.shift - 1,
     VAR_4->n.shift);
 if (VAR_4->k.width)
  VAR_6 = FUNC_0(VAR_4->k.width + VAR_4->k.shift - 1,
     VAR_4->k.shift);
 if (VAR_4->m.width)
  VAR_7 = FUNC_0(VAR_4->m.width + VAR_4->m.shift - 1,
     VAR_4->m.shift);
 if (VAR_4->p.width)
  VAR_8 = FUNC_0(VAR_4->p.width + VAR_4->p.shift - 1,
     VAR_4->p.shift);

 FUNC_6(VAR_4->common.lock, VAR_10);

 VAR_11 = FUNC_5(VAR_4->common.base + VAR_4->common.reg);
 VAR_11 &= ~(VAR_5 | VAR_6 | VAR_7 | VAR_8);

 VAR_11 |= ((VAR_9.n - VAR_4->n.offset) << VAR_4->n.shift) & VAR_5;
 VAR_11 |= ((VAR_9.k - VAR_4->k.offset) << VAR_4->k.shift) & VAR_6;
 VAR_11 |= ((VAR_9.m - VAR_4->m.offset) << VAR_4->m.shift) & VAR_7;
 VAR_11 |= (FUNC_4(VAR_9.p) << VAR_4->p.shift) & VAR_8;

 FUNC_8(VAR_11, VAR_4->common.base + VAR_4->common.reg);

 FUNC_7(VAR_4->common.lock, VAR_10);

 FUNC_1(&VAR_4->common, VAR_4->lock);

 return 0;
}
