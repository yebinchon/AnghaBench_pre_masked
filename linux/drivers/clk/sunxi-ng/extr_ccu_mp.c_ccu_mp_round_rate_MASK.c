
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct ccu_mux_internal {int dummy; } ;
struct TYPE_6__ {int features; } ;
struct TYPE_5__ {int width; scalar_t__ max; } ;
struct TYPE_4__ {int width; scalar_t__ max; } ;
struct ccu_mp {unsigned long fixed_post_div; TYPE_3__ common; TYPE_2__ p; TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long*,unsigned long,unsigned int,unsigned int) ;
 int FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct ccu_mux_internal *VAR_2,
           struct clk_hw *VAR_3,
           unsigned long *VAR_4,
           unsigned long VAR_5,
           void *VAR_6)
{
 struct ccu_mp *VAR_7 = VAR_6;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;

 if (VAR_7->common.features & VAR_0)
  VAR_5 *= VAR_7->fixed_post_div;

 VAR_8 = VAR_7->m.max ?: 1 << VAR_7->m.width;
 VAR_9 = VAR_7->p.max ?: 1 << ((1 << VAR_7->p.width) - 1);

 if (!(FUNC_2(VAR_3) & VAR_1)) {
  FUNC_0(*VAR_4, VAR_5, VAR_8, VAR_9, &VAR_10, &VAR_11);
  VAR_5 = *VAR_4 / VAR_11 / VAR_10;
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_5,
       VAR_8, VAR_9);
 }

 if (VAR_7->common.features & VAR_0)
  VAR_5 /= VAR_7->fixed_post_div;

 return VAR_5;
}
