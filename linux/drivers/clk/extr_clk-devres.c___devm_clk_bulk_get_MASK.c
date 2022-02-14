
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_bulk_devres {int num_clks; struct clk_bulk_data* clks; } ;
struct clk_bulk_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int,struct clk_bulk_data*) ;
 int FUNC_1 (struct device*,int,struct clk_bulk_data*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct clk_bulk_devres*) ;
 struct clk_bulk_devres* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct clk_bulk_devres*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, int VAR_4,
          struct clk_bulk_data *VAR_5, bool VAR_6)
{
 struct clk_bulk_devres *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_2,
         sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_6)
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (!VAR_8) {
  VAR_7->clks = VAR_5;
  VAR_7->num_clks = VAR_4;
  FUNC_2(VAR_3, VAR_7);
 } else {
  FUNC_4(VAR_7);
 }

 return VAR_8;
}
