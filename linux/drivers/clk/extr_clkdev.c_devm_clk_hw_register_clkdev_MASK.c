
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_lookup {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct clk_lookup**) ;
 struct clk_lookup** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct clk_lookup**) ;
 int FUNC_3 (struct clk_hw*,struct clk_lookup**,char const*,char const*) ;

int FUNC_4(struct device *VAR_3, struct clk_hw *VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct clk_lookup **VAR_8;

 VAR_8 = FUNC_1(VAR_2, sizeof(*VAR_8), VAR_1);
 if (VAR_8) {
  VAR_7 = FUNC_3(VAR_4, VAR_8, VAR_5, VAR_6);
  if (!VAR_7)
   FUNC_0(VAR_3, VAR_8);
  else
   FUNC_2(VAR_8);
 }
 return VAR_7;
}
