
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct freq_tbl {int pre_div; int src; int member_0; } ;
struct TYPE_8__ {TYPE_3__* parent_map; } ;
struct TYPE_6__ {int regmap; } ;
struct TYPE_5__ {int pre_div_width; } ;
struct clk_rcg {TYPE_4__ s; int ns_reg; TYPE_2__ clkr; TYPE_1__ p; } ;
struct clk_hw {int dummy; } ;
struct TYPE_7__ {scalar_t__ cfg; int src; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct clk_rcg*,struct freq_tbl*) ;
 int FUNC_2 (struct clk_hw*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 struct clk_rcg* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_rcg *VAR_4 = FUNC_5(VAR_1);
 struct freq_tbl VAR_5 = { 0 };
 int VAR_6 = FUNC_0(VAR_4->p.pre_div_width);
 int VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10, VAR_11 = FUNC_2(VAR_1);

 if (VAR_2 == 0)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_4->clkr.regmap, VAR_4->ns_reg, &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_3(&VAR_4->s, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  if (VAR_8 == VAR_4->s.parent_map[VAR_9].cfg) {
   VAR_5.src = VAR_4->s.parent_map[VAR_9].src;
   break;
  }
 }

 VAR_7 = VAR_3 / VAR_2;

 if (VAR_7 >= 1 && VAR_7 <= VAR_6) {
  VAR_5.pre_div = VAR_7;
  return FUNC_1(VAR_4, &VAR_5);
 }

 return -VAR_0;
}
