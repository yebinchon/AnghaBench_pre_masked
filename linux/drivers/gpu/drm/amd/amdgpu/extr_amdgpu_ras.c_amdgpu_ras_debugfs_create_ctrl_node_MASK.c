
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {int debugfs_root; } ;
struct amdgpu_ras {int dir; int ent; } ;
struct amdgpu_device {TYPE_1__* ddev; } ;
struct TYPE_2__ {struct drm_minor* primary; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,struct amdgpu_device*,int *) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3)
{
 struct amdgpu_ras *VAR_4 = FUNC_0(VAR_3);
 struct drm_minor *VAR_5 = VAR_3->ddev->primary;

 VAR_4->dir = FUNC_1("ras", VAR_5->debugfs_root);
 VAR_4->ent = FUNC_2("ras_ctrl", VAR_1 | VAR_0, VAR_4->dir,
           VAR_3, &VAR_2);
}
