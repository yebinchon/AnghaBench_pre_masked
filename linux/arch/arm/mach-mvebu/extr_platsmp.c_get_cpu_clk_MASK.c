
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct clk* FUNC_3 (struct device_node*,int ) ;
 struct device_node* FUNC_4 (int,int *) ;

__attribute__((used)) static struct clk *FUNC_5(int VAR_0)
{
 struct clk *VAR_1;
 struct device_node *VAR_2 = FUNC_4(VAR_0, ((void*)0));

 if (FUNC_1(!VAR_2, "missing cpu node\n"))
  return ((void*)0);
 VAR_1 = FUNC_3(VAR_2, 0);
 if (FUNC_2(FUNC_0(VAR_1)))
  return ((void*)0);
 return VAR_1;
}
