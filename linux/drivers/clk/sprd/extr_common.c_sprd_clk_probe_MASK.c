
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct clk_hw_onecell_data {int num; struct clk_hw** hws; } ;
struct clk_hw {TYPE_1__* init; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 int FUNC_2 (struct device*,int ,struct clk_hw_onecell_data*) ;
 int VAR_0 ;

int FUNC_3(struct device *VAR_1, struct clk_hw_onecell_data *VAR_2)
{
 int VAR_3, VAR_4;
 struct clk_hw *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  const char *VAR_6;

  VAR_5 = VAR_2->hws[VAR_3];
  if (!VAR_5)
   continue;

  VAR_6 = VAR_5->init->name;
  VAR_4 = FUNC_1(VAR_1, VAR_5);
  if (VAR_4) {
   FUNC_0(VAR_1, "Couldn't register clock %d - %s\n",
    VAR_3, VAR_6);
   return VAR_4;
  }
 }

 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_1, "Failed to add clock provider\n");

 return VAR_4;
}
