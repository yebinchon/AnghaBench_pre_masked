
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int features; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_3__ {unsigned long shift; int width; int flags; int table; } ;
struct ccu_div {unsigned long fixed_post_div; TYPE_2__ common; TYPE_1__ div; int mux; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (TYPE_2__*,int *,int,unsigned long) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,unsigned long,int ,int ,int) ;
 struct ccu_div* FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct ccu_div *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_3->common.base + VAR_3->common.reg);
 VAR_4 = VAR_5 >> VAR_3->div.shift;
 VAR_4 &= (1 << VAR_3->div.width) - 1;

 VAR_2 = FUNC_0(&VAR_3->common, &VAR_3->mux, -1,
        VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3->div.table,
      VAR_3->div.flags, VAR_3->div.width);

 if (VAR_3->common.features & VAR_0)
  VAR_4 /= VAR_3->fixed_post_div;

 return VAR_4;
}
