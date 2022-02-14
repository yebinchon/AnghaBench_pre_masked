
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_10__ {int features; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_9__ {unsigned long shift; int width; } ;
struct TYPE_8__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct TYPE_7__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct TYPE_6__ {unsigned long shift; int width; scalar_t__ offset; } ;
struct ccu_nkmp {unsigned long fixed_post_div; TYPE_5__ common; TYPE_4__ p; TYPE_3__ m; TYPE_2__ k; TYPE_1__ n; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,int) ;
 struct ccu_nkmp* FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct ccu_nkmp *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_3->common.base + VAR_3->common.reg);

 VAR_4 = VAR_9 >> VAR_3->n.shift;
 VAR_4 &= (1 << VAR_3->n.width) - 1;
 VAR_4 += VAR_3->n.offset;
 if (!VAR_4)
  VAR_4++;

 VAR_6 = VAR_9 >> VAR_3->k.shift;
 VAR_6 &= (1 << VAR_3->k.width) - 1;
 VAR_6 += VAR_3->k.offset;
 if (!VAR_6)
  VAR_6++;

 VAR_5 = VAR_9 >> VAR_3->m.shift;
 VAR_5 &= (1 << VAR_3->m.width) - 1;
 VAR_5 += VAR_3->m.offset;
 if (!VAR_5)
  VAR_5++;

 VAR_7 = VAR_9 >> VAR_3->p.shift;
 VAR_7 &= (1 << VAR_3->p.width) - 1;

 VAR_8 = FUNC_0(VAR_2, VAR_4, VAR_6, VAR_5, 1 << VAR_7);
 if (VAR_3->common.features & VAR_0)
  VAR_8 /= VAR_3->fixed_post_div;

 return VAR_8;
}
