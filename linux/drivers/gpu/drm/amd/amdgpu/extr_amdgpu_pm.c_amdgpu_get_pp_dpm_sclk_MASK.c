
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct TYPE_7__ {TYPE_4__* ops; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; TYPE_3__ virt; } ;
typedef int ssize_t ;
struct TYPE_8__ {int (* get_pp_clk ) (struct amdgpu_device*,int ,char*) ;} ;
struct TYPE_5__ {scalar_t__ print_clock_levels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int ,char*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 struct drm_device* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (struct amdgpu_device*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
  struct device_attribute *VAR_4,
  char *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_3(VAR_3);
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;

 if (FUNC_2(VAR_7) && FUNC_0(VAR_7) &&
     VAR_7->virt.ops->get_pp_clk)
  return VAR_7->virt.ops->get_pp_clk(VAR_7, VAR_1, VAR_5);

 if (FUNC_4(VAR_7))
  return FUNC_5(&VAR_7->smu, VAR_2, VAR_5);
 else if (VAR_7->powerplay.pp_funcs->print_clock_levels)
  return FUNC_1(VAR_7, VAR_1, VAR_5);
 else
  return FUNC_6(VAR_5, VAR_0, "\n");
}
