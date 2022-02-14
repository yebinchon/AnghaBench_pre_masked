
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int compat; int type; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct vio_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 const struct vio_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "MODALIAS=vio:T%sS%s", VAR_2->type, VAR_2->compat);
 return 0;
}
