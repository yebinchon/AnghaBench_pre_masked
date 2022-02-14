
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {void* of_node; } ;


 int FUNC_0 (char*,void*,void*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 FUNC_0("Comparing of node %pOF with %pOF\n",
    VAR_0->of_node,
    VAR_1);

 return VAR_0->of_node == VAR_1;
}
