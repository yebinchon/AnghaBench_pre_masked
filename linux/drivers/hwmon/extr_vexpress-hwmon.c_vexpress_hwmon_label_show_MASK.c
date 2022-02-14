
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int of_node; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_1->of_node, "label", ((void*)0));

 return FUNC_1(VAR_3, VAR_0, "%s\n", VAR_4);
}
