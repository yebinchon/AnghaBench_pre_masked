
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct freq_tbl {int pre_div; unsigned long m; unsigned long n; int src; int member_0; } ;
struct frac_entry {int num; unsigned long den; } ;
struct TYPE_6__ {TYPE_2__* parent_map; } ;
struct TYPE_4__ {int regmap; } ;
struct clk_rcg {TYPE_3__ s; int ns_reg; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;
struct TYPE_5__ {scalar_t__ cfg; int src; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_rcg*,struct freq_tbl*) ;
 int FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 struct frac_entry* VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 struct clk_rcg* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 struct clk_rcg *VAR_5 = FUNC_4(VAR_2);
 int VAR_6 = 100000;
 const struct frac_entry *VAR_7 = VAR_1;
 unsigned long VAR_8;
 struct freq_tbl VAR_9 = { 0 };
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14 = FUNC_1(VAR_2);

 VAR_13 = FUNC_3(VAR_5->clkr.regmap, VAR_5->ns_reg, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_2(&VAR_5->s, VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  if (VAR_11 == VAR_5->s.parent_map[VAR_12].cfg) {
   VAR_9.src = VAR_5->s.parent_map[VAR_12].src;
   break;
  }
 }


 VAR_9.pre_div = 1;


 for (; VAR_7->num; VAR_7++) {
  VAR_8 = (VAR_3 * VAR_7->den) / VAR_7->num;

  if ((VAR_4 < (VAR_8 - VAR_6)) ||
   (VAR_4 > (VAR_8 + VAR_6)))
   continue;

  VAR_9.m = VAR_7->num;
  VAR_9.n = VAR_7->den;

  return FUNC_0(VAR_5, &VAR_9);
 }

 return -VAR_0;
}
