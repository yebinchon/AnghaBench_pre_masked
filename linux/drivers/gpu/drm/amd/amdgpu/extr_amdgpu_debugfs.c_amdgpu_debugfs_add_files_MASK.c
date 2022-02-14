
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_info_list {int dummy; } ;
struct amdgpu_device {unsigned int debugfs_count; TYPE_2__* ddev; TYPE_1__* debugfs; } ;
struct TYPE_6__ {int debugfs_root; } ;
struct TYPE_5__ {TYPE_3__* primary; } ;
struct TYPE_4__ {unsigned int num_files; struct drm_info_list const* files; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_info_list const*,unsigned int,int ,TYPE_3__*) ;

int FUNC_2(struct amdgpu_device *VAR_2,
        const struct drm_info_list *VAR_3,
        unsigned VAR_4)
{
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->debugfs_count; VAR_5++) {
  if (VAR_2->debugfs[VAR_5].files == VAR_3) {

   return 0;
  }
 }

 VAR_5 = VAR_2->debugfs_count + 1;
 if (VAR_5 > VAR_0) {
  FUNC_0("Reached maximum number of debugfs components.\n");
  FUNC_0("Report so we increase "
     "AMDGPU_DEBUGFS_MAX_COMPONENTS.\n");
  return -VAR_1;
 }
 VAR_2->debugfs[VAR_2->debugfs_count].files = VAR_3;
 VAR_2->debugfs[VAR_2->debugfs_count].num_files = VAR_4;
 VAR_2->debugfs_count = VAR_5;





 return 0;
}
