
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_adpll_data {scalar_t__ regs; TYPE_2__* clocks; scalar_t__* parent_clocks; TYPE_1__* c; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_3__ {int is_type_s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct ti_adpll_data*,int ,int ,int ,char*,int ,int ) ;
 int FUNC_1 (struct ti_adpll_data*,size_t,int ,char*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct ti_adpll_data*,size_t,char*,int ,int,int) ;
 int FUNC_3 (struct ti_adpll_data*,size_t,char*,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct ti_adpll_data *VAR_26)
{
 int VAR_27;

 if (!VAR_26->c->is_type_s)
  return 0;


 VAR_27 = FUNC_3(VAR_26, VAR_12, "bypass",
    VAR_26->clocks[VAR_22].clk,
    VAR_26->parent_clocks[VAR_14],
    VAR_26->regs + VAR_1,
    VAR_2);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_1(VAR_26, VAR_20, -VAR_11, "m2",
        VAR_26->clocks[VAR_17].clk,
        VAR_26->regs + VAR_6,
        VAR_4,
        VAR_5,
        VAR_10);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_2(VAR_26, VAR_18, "div2",
      VAR_26->clocks[VAR_20].clk,
      1, 2);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_0(VAR_26, VAR_15, VAR_23,
       VAR_0, "clkout",
       VAR_26->clocks[VAR_18].clk,
       VAR_26->clocks[VAR_12].clk);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_0(VAR_26, VAR_16, VAR_25, 0,
       "clkout2", VAR_26->clocks[VAR_20].clk,
       VAR_26->clocks[VAR_12].clk);
 if (VAR_27)
  return VAR_27;


 if (VAR_26->parent_clocks[VAR_13]) {
  VAR_27 = FUNC_3(VAR_26, VAR_19, "hif",
     VAR_26->clocks[VAR_17].clk,
     VAR_26->parent_clocks[VAR_13],
     VAR_26->regs + VAR_1,
     VAR_3);
  if (VAR_27)
   return VAR_27;
 }


 VAR_27 = FUNC_1(VAR_26, VAR_21, VAR_24, "m3",
        VAR_26->clocks[VAR_19].clk,
        VAR_26->regs + VAR_9,
        VAR_7,
        VAR_8,
        VAR_10);
 if (VAR_27)
  return VAR_27;



 return 0;
}
