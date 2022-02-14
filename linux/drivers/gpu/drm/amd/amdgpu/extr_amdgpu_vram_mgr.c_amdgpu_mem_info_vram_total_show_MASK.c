
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int real_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_0(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;

 return FUNC_1(VAR_3, VAR_0, "%llu\n", VAR_5->gmc.real_vram_size);
}
