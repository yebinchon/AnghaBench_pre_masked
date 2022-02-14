
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ set_ppfeature_status; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 struct drm_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2,
  const char *VAR_3,
  size_t VAR_4)
{
 struct drm_device *VAR_5 = FUNC_1(VAR_1);
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 uint64_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 0, &VAR_7);
 if (VAR_8)
  return -VAR_0;

 FUNC_4("featuremask = 0x%llx\n", VAR_7);

 if (FUNC_2(VAR_6)) {
  VAR_8 = FUNC_5(&VAR_6->smu, VAR_7);
  if (VAR_8)
   return -VAR_0;
 } else if (VAR_6->powerplay.pp_funcs->set_ppfeature_status) {
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  if (VAR_8)
   return -VAR_0;
 }

 return VAR_4;
}
