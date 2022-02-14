
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct clk* FUNC_1 (int *,char*,char*,int ,int,int) ;
 struct clk** VAR_9 ;
 int VAR_10 ;
 struct clk* FUNC_2 (char*,int ,int ,int,scalar_t__,int ,int,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct clk *VAR_11;


 VAR_11 = FUNC_2("cclk", VAR_7,
         FUNC_0(VAR_7), VAR_2,
         VAR_8 + VAR_0, 0, 4, 0, 0, ((void*)0));
 VAR_9[VAR_4] = VAR_11;


 VAR_11 = FUNC_2("sclk", VAR_10,
         FUNC_0(VAR_10),
         VAR_2 | VAR_1,
         VAR_8 + VAR_3, 0, 4, 0, 0, ((void*)0));
 VAR_9[VAR_5] = VAR_11;


 VAR_11 = FUNC_1(((void*)0), "twd", "cclk", 0, 1, 4);
 VAR_9[VAR_6] = VAR_11;
}
