
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct ipack_device {int id_device; int id_vendor; int id_format; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,int ,int ) ;
 struct ipack_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct ipack_device *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3,
      "MODALIAS=ipack:f%02Xv%08Xd%08X", VAR_4->id_format,
      VAR_4->id_vendor, VAR_4->id_device))
  return -VAR_1;

 return 0;
}
