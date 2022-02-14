
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int * man; } ;
struct TYPE_4__ {TYPE_1__ bdev; } ;
struct amdgpu_device {TYPE_2__ mman; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_1(VAR_2);
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;

 return FUNC_2(VAR_4, VAR_0, "%llu\n",
  FUNC_0(&VAR_6->mman.bdev.man[VAR_1]));
}
