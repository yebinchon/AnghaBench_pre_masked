
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct of_phandle_args {int np; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct clk_hw {struct clk_core* core; } ;
struct clk_core {struct device_node* of_node; struct device* dev; TYPE_1__* parents; } ;
struct TYPE_2__ {char* fw_name; int index; } ;


 int VAR_0 ;
 struct clk_core* FUNC_0 (struct clk_hw*) ;
 struct clk_hw* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct clk_hw*) ;
 struct clk_hw* FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (struct device*) ;
 struct clk_hw* FUNC_5 (struct of_phandle_args*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*,int,char const*,struct of_phandle_args*) ;

__attribute__((used)) static struct clk_core *FUNC_8(struct clk_core *VAR_1, u8 VAR_2)
{
 const char *VAR_3 = VAR_1->parents[VAR_2].fw_name;
 int VAR_4 = VAR_1->parents[VAR_2].index;
 struct clk_hw *VAR_5 = FUNC_1(-VAR_0);
 struct device *VAR_6 = VAR_1->dev;
 const char *VAR_7 = VAR_6 ? FUNC_4(VAR_6) : ((void*)0);
 struct device_node *VAR_8 = VAR_1->of_node;
 struct of_phandle_args VAR_9;

 if (VAR_8 && (VAR_3 || VAR_4 >= 0) &&
     !FUNC_7(VAR_8, VAR_4, VAR_3, &VAR_9)) {
  VAR_5 = FUNC_5(&VAR_9);
  FUNC_6(VAR_9.np);
 } else if (VAR_3) {




  VAR_5 = FUNC_3(VAR_7, VAR_3);
 }

 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 return VAR_5->core;
}
