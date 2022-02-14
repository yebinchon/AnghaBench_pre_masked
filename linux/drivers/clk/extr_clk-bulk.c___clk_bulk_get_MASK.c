
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_bulk_data {int id; int * clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct clk_bulk_data*) ;
 int * FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, int VAR_3,
     struct clk_bulk_data *VAR_4, bool VAR_5)
{
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_4[VAR_7].clk = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_4[VAR_7].clk = FUNC_3(VAR_2, VAR_4[VAR_7].id);
  if (FUNC_0(VAR_4[VAR_7].clk)) {
   VAR_6 = FUNC_1(VAR_4[VAR_7].clk);
   VAR_4[VAR_7].clk = ((void*)0);

   if (VAR_6 == -VAR_0 && VAR_5)
    continue;

   if (VAR_6 != -VAR_1)
    FUNC_4(VAR_2, "Failed to get clk '%s': %d\n",
     VAR_4[VAR_7].id, VAR_6);
   goto err;
  }
 }

 return 0;

err:
 FUNC_2(VAR_7, VAR_4);

 return VAR_6;
}
