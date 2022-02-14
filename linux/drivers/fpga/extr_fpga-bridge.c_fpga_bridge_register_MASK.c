
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; int of_node; } ;
struct fpga_bridge {int name; struct device dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int *,int *,struct device*) ;

int FUNC_3(struct fpga_bridge *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1->of_node, ((void*)0), ((void*)0), VAR_1);

 FUNC_0(VAR_1->parent, "fpga bridge [%s] registered\n", VAR_0->name);

 return 0;
}
