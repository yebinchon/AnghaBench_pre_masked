
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_adpll_data {TYPE_2__* clocks; scalar_t__ regs; int * parent_clocks; TYPE_1__* c; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_3__ {scalar_t__ is_type_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct ti_adpll_data*,int ,int ,int ,char*,int ,int ) ;
 int FUNC_1 (struct ti_adpll_data*,size_t,int ,char*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct ti_adpll_data*,int ,int ,char*,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ti_adpll_data*,size_t,char*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct ti_adpll_data *VAR_21)
{
 int VAR_22;

 if (VAR_21->c->is_type_s)
  return 0;


 VAR_22 = FUNC_2(VAR_21, VAR_14, VAR_15,
     "clkdcoldo", VAR_21->clocks[VAR_13].clk,
     VAR_21->regs + VAR_3,
     VAR_0, 0);
 if (VAR_22)
  return VAR_22;


 VAR_22 = FUNC_1(VAR_21, VAR_17, -VAR_9,
        "m2", VAR_21->clocks[VAR_13].clk,
        VAR_21->regs + VAR_7,
        VAR_5,
        VAR_6,
        VAR_8);
 if (VAR_22)
  return VAR_22;


 VAR_22 = FUNC_2(VAR_21, VAR_18, VAR_16,
     "clkoutldo", VAR_21->clocks[VAR_17].clk,
     VAR_21->regs + VAR_3,
     VAR_2,
     0);
 if (VAR_22)
  return VAR_22;


 VAR_22 = FUNC_3(VAR_21, VAR_10, "bypass",
    VAR_21->clocks[VAR_19].clk,
    VAR_21->parent_clocks[VAR_11],
    VAR_21->regs + VAR_3,
    VAR_4);
 if (VAR_22)
  return VAR_22;


 VAR_22 = FUNC_0(VAR_21, VAR_12, VAR_20,
       VAR_1, "clkout",
       VAR_21->clocks[VAR_17].clk,
       VAR_21->clocks[VAR_10].clk);
 if (VAR_22)
  return VAR_22;

 return 0;
}
