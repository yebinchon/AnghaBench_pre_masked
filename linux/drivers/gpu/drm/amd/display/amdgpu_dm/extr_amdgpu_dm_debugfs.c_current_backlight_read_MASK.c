
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct dc {int dummy; } ;
struct TYPE_4__ {struct dc* dc; } ;
struct amdgpu_device {TYPE_2__ dm; } ;
struct TYPE_3__ {struct drm_device* dev; } ;


 unsigned int FUNC_0 (struct dc*) ;
 int FUNC_1 (struct seq_file*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *)VAR_0->private;
 struct drm_device *VAR_3 = VAR_2->minor->dev;
 struct amdgpu_device *VAR_4 = VAR_3->dev_private;
 struct dc *VAR_5 = VAR_4->dm.dc;
 unsigned int VAR_6 = FUNC_0(VAR_5);

 FUNC_1(VAR_0, "0x%x\n", VAR_6);
 return 0;
}
