
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct TYPE_4__ {TYPE_3__** shadow; } ;
struct intel_vgpu {TYPE_1__ submission; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_2__* gem_context; } ;
struct TYPE_5__ {int hw_id; } ;


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
  return FUNC_2(VAR_2, "%u\n",
          VAR_4->submission.shadow[0]->gem_context->hw_id);
 }
 return FUNC_2(VAR_2, "\n");
}
