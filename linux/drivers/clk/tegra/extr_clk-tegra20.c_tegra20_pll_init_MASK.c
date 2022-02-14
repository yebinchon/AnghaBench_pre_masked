
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct clk* FUNC_0 (int *,char*,char*,int,int,int) ;
 struct clk** VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct clk* FUNC_1 (char*,char*,scalar_t__,int ,int ,int,int,int,int *) ;
 struct clk* FUNC_2 (char*,char*,scalar_t__,int *,int ,int *,int *) ;
 struct clk* FUNC_3 (char*,char*,scalar_t__,int,int ,int,int ,int *) ;
 struct clk* FUNC_4 (char*,char*,scalar_t__,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct clk *VAR_28;


 VAR_28 = FUNC_2("pll_c", "pll_ref", VAR_18, ((void*)0), 0,
       &VAR_21, ((void*)0));
 VAR_19[VAR_8] = VAR_28;


 VAR_28 = FUNC_1("pll_c_out1_div", "pll_c",
    VAR_18 + VAR_4, 0, VAR_17,
    8, 8, 1, ((void*)0));
 VAR_28 = FUNC_3("pll_c_out1", "pll_c_out1_div",
    VAR_18 + VAR_4, 1, 0, VAR_2,
    0, ((void*)0));
 VAR_19[VAR_9] = VAR_28;


 VAR_28 = FUNC_2("pll_m", "pll_ref", VAR_18, ((void*)0),
       VAR_1, &VAR_24, ((void*)0));
 VAR_19[VAR_13] = VAR_28;


 VAR_28 = FUNC_1("pll_m_out1_div", "pll_m",
    VAR_18 + VAR_5, 0, VAR_17,
    8, 8, 1, ((void*)0));
 VAR_28 = FUNC_3("pll_m_out1", "pll_m_out1_div",
    VAR_18 + VAR_5, 1, 0,
    VAR_2, 0, ((void*)0));
 VAR_19[VAR_14] = VAR_28;


 VAR_28 = FUNC_2("pll_x", "pll_ref", VAR_18, ((void*)0), 0,
       &VAR_26, ((void*)0));
 VAR_19[VAR_16] = VAR_28;


 VAR_28 = FUNC_2("pll_u", "pll_ref", VAR_18, ((void*)0), 0,
       &VAR_25, ((void*)0));
 VAR_19[VAR_15] = VAR_28;


 VAR_28 = FUNC_2("pll_d", "pll_ref", VAR_18, ((void*)0), 0,
       &VAR_22, ((void*)0));
 VAR_19[VAR_10] = VAR_28;


 VAR_28 = FUNC_0(((void*)0), "pll_d_out0", "pll_d",
     VAR_2, 1, 2);
 VAR_19[VAR_11] = VAR_28;


 VAR_28 = FUNC_2("pll_a", "pll_p_out1", VAR_18, ((void*)0), 0,
       &VAR_20, ((void*)0));
 VAR_19[VAR_6] = VAR_28;


 VAR_28 = FUNC_1("pll_a_out0_div", "pll_a",
    VAR_18 + VAR_3, 0, VAR_17,
    8, 8, 1, ((void*)0));
 VAR_28 = FUNC_3("pll_a_out0", "pll_a_out0_div",
    VAR_18 + VAR_3, 1, 0, VAR_0 |
    VAR_2, 0, ((void*)0));
 VAR_19[VAR_7] = VAR_28;


 VAR_28 = FUNC_4("pll_e", "pll_ref", VAR_18, VAR_27,
        0, &VAR_23, ((void*)0));
 VAR_19[VAR_12] = VAR_28;
}
