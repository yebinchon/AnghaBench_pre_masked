
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_lookup {int dummy; } ;


 int FUNC_0 (int) ;
 struct clk_lookup* FUNC_1 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,int ,int ,struct clk_lookup*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_3, const char *VAR_4,
        const char *VAR_5)
{
 struct clk_lookup *VAR_6;
 int VAR_7;

 FUNC_3(&VAR_0);
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 FUNC_4(&VAR_0);

 FUNC_0(!VAR_6);
 VAR_7 = FUNC_2(VAR_3, VAR_2,
         VAR_1, VAR_6);
 FUNC_0(VAR_7);
}
