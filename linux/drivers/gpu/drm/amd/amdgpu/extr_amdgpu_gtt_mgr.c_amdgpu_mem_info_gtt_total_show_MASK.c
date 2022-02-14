
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* man; } ;
struct TYPE_6__ {TYPE_2__ bdev; } ;
struct amdgpu_device {TYPE_3__ mman; } ;
typedef int ssize_t ;
struct TYPE_4__ {int size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_0(VAR_2);
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;

 return FUNC_1(VAR_4, VAR_0, "%llu\n",
   (VAR_6->mman.bdev.man[VAR_1].size) * VAR_0);
}
