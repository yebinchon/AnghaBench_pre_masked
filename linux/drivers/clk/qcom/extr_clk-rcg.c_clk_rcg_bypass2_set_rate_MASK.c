
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct freq_tbl {int src; scalar_t__ pre_div; int member_0; } ;
struct TYPE_6__ {TYPE_2__* parent_map; } ;
struct TYPE_4__ {int regmap; } ;
struct clk_rcg {TYPE_3__ s; int p; int ns_reg; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;
struct TYPE_5__ {scalar_t__ cfg; int src; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_rcg*,struct freq_tbl*) ;
 int FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 struct clk_rcg* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_rcg *VAR_4 = FUNC_5(VAR_1);
 struct freq_tbl VAR_5 = { 0 };
 u32 VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10 = FUNC_1(VAR_1);

 VAR_9 = FUNC_4(VAR_4->clkr.regmap, VAR_4->ns_reg, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_3(&VAR_4->s, VAR_6);
 VAR_5.pre_div = FUNC_2(&VAR_4->p, VAR_6) + 1;

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (VAR_7 == VAR_4->s.parent_map[VAR_8].cfg) {
   VAR_5.src = VAR_4->s.parent_map[VAR_8].src;
   return FUNC_0(VAR_4, &VAR_5);
  }
 }

 return -VAR_0;
}
