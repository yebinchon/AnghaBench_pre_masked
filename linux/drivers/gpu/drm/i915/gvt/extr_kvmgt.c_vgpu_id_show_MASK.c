
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_device {int dummy; } ;
struct intel_vgpu {int id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mdev_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct mdev_device *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3) {
  struct intel_vgpu *VAR_4 = (struct intel_vgpu *)
   FUNC_1(VAR_3);
  return FUNC_2(VAR_2, "%d\n", VAR_4->id);
 }
 return FUNC_2(VAR_2, "\n");
}
