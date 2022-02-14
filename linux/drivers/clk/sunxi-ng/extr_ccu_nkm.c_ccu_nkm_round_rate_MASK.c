
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_8__ {int features; } ;
struct TYPE_7__ {int width; scalar_t__ max; } ;
struct TYPE_6__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct TYPE_5__ {int width; scalar_t__ max; scalar_t__ min; } ;
struct ccu_nkm {unsigned long fixed_post_div; TYPE_4__ common; TYPE_3__ m; TYPE_2__ k; TYPE_1__ n; } ;
struct ccu_mux_internal {int dummy; } ;
struct _ccu_nkm {int min_n; int max_n; int min_k; int max_k; int min_m; int max_m; unsigned long n; unsigned long k; unsigned long m; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,struct _ccu_nkm*) ;

__attribute__((used)) static unsigned long FUNC_1(struct ccu_mux_internal *VAR_1,
     struct clk_hw *VAR_2,
     unsigned long *VAR_3,
     unsigned long VAR_4,
     void *VAR_5)
{
 struct ccu_nkm *VAR_6 = VAR_5;
 struct _ccu_nkm VAR_7;

 VAR_7.min_n = VAR_6->n.min ?: 1;
 VAR_7.max_n = VAR_6->n.max ?: 1 << VAR_6->n.width;
 VAR_7.min_k = VAR_6->k.min ?: 1;
 VAR_7.max_k = VAR_6->k.max ?: 1 << VAR_6->k.width;
 VAR_7.min_m = 1;
 VAR_7.max_m = VAR_6->m.max ?: 1 << VAR_6->m.width;

 if (VAR_6->common.features & VAR_0)
  VAR_4 *= VAR_6->fixed_post_div;

 FUNC_0(*VAR_3, VAR_4, &VAR_7);

 VAR_4 = *VAR_3 * VAR_7.n * VAR_7.k / VAR_7.m;

 if (VAR_6->common.features & VAR_0)
  VAR_4 /= VAR_6->fixed_post_div;

 return VAR_4;
}
