
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int type; } ;
struct kobj_uevent_env {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ,char const*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 struct vio_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 const struct vio_dev *VAR_3 = FUNC_2(VAR_1);
 struct device_node *VAR_4;
 const char *VAR_5;

 VAR_4 = VAR_1->of_node;
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_4, "compatible", ((void*)0));
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_2, "MODALIAS=vio:T%sS%s", VAR_3->type, VAR_5);
 return 0;
}
