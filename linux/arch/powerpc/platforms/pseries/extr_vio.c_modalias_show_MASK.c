
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {char* type; } ;
struct device_node {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (char*,char*,char*,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 struct vio_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 const struct vio_dev *VAR_3 = FUNC_4(VAR_0);
 struct device_node *VAR_4;
 const char *VAR_5;

 VAR_4 = VAR_0->of_node;
 if (!VAR_4) {
  FUNC_2(VAR_2, "\n");
  return FUNC_3(VAR_2);
 }
 VAR_5 = FUNC_0(VAR_4, "compatible", ((void*)0));
 if (!VAR_5) {
  FUNC_2(VAR_2, "\n");
  return FUNC_3(VAR_2);
 }

 return FUNC_1(VAR_2, "vio:T%sS%s\n", VAR_3->type, VAR_5);
}
