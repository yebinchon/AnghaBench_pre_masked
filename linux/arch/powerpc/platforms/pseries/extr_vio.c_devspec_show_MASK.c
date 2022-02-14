
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,struct device_node*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct device_node *VAR_3 = VAR_0->of_node;

 return FUNC_0(VAR_2, "%pOF\n", VAR_3);
}
