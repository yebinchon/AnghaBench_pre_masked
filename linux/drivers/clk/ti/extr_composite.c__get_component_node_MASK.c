
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {struct device_node* np; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;

__attribute__((used)) static struct device_node *FUNC_1(struct device_node *VAR_0, int VAR_1)
{
 int VAR_2;
 struct of_phandle_args VAR_3;

 VAR_2 = FUNC_0(VAR_0, "clocks", "#clock-cells", VAR_1,
     &VAR_3);
 if (VAR_2)
  return ((void*)0);

 return VAR_3.np;
}
