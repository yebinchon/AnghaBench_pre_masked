
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node_reused; int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct device *VAR_0, const struct device *VAR_1)
{
 FUNC_1(VAR_0->of_node);
 VAR_0->of_node = FUNC_0(VAR_1->of_node);
 VAR_0->of_node_reused = 1;
}
