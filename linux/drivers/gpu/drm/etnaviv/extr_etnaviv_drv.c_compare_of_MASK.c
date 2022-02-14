
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1)
{
 struct device_node *VAR_2 = VAR_1;

 return VAR_0->of_node == VAR_2;
}
