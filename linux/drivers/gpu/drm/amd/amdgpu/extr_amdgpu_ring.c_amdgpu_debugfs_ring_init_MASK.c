
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {struct dentry* debugfs_root; } ;
struct dentry {int d_inode; } ;
struct amdgpu_ring {char* name; struct dentry* ent; scalar_t__ ring_size; } ;
struct amdgpu_device {TYPE_1__* ddev; } ;
struct TYPE_2__ {struct drm_minor* primary; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (char*,int,struct dentry*,struct amdgpu_ring*,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_4,
        struct amdgpu_ring *VAR_5)
{
 return 0;
}
