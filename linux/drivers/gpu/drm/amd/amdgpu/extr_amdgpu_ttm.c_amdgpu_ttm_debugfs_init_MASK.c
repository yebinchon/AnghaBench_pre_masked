
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_minor {struct dentry* debugfs_root; } ;
struct dentry {int d_inode; } ;
struct TYPE_10__ {struct dentry** debugfs_entries; } ;
struct TYPE_9__ {int gart_size; int mc_vram_size; } ;
struct amdgpu_device {scalar_t__ need_swiotlb; TYPE_3__ mman; TYPE_2__ gmc; TYPE_1__* ddev; } ;
struct TYPE_11__ {scalar_t__ domain; int fops; int name; } ;
struct TYPE_8__ {struct drm_minor* primary; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct amdgpu_device*,TYPE_4__*,unsigned int) ;
 TYPE_4__* VAR_4 ;
 struct dentry* FUNC_4 (int ,int,struct dentry*,struct amdgpu_device*,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_6)
{
 return 0;

}
