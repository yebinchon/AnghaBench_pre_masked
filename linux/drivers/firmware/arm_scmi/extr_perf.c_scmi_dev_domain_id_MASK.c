
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int* args; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int ,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1)
{
 struct of_phandle_args VAR_2;

 if (FUNC_0(VAR_1->of_node, "clocks", "#clock-cells",
           0, &VAR_2))
  return -VAR_0;

 return VAR_2.args[0];
}
