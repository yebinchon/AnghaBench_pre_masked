
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int) ;
 struct clk* FUNC_1 (struct device_node*,int ) ;
 struct device_node* FUNC_2 (int,int *) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static struct clk *FUNC_4(int VAR_0)
{
 struct device_node *VAR_1;
 struct clk *VAR_2;

 if (!FUNC_0(VAR_0))
  return ((void*)0);

 VAR_1 = FUNC_2(VAR_0, ((void*)0));
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1, 0);
 FUNC_3(VAR_1);
 return VAR_2;
}
