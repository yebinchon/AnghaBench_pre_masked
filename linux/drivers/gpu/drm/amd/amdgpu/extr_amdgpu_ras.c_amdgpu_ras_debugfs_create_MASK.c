
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_name; } ;
struct ras_manager {TYPE_1__ fs_data; scalar_t__ ent; } ;
struct ras_fs_if {int debugfs_name; int head; } ;
struct amdgpu_ras {int dir; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ras_manager* FUNC_0 (struct amdgpu_device*,int *) ;
 struct amdgpu_ras* FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (int ,int,int ,struct ras_manager*,int *) ;
 int FUNC_3 (struct ras_manager*) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct amdgpu_device *VAR_3,
  struct ras_fs_if *VAR_4)
{
 struct amdgpu_ras *VAR_5 = FUNC_1(VAR_3);
 struct ras_manager *VAR_6 = FUNC_0(VAR_3, &VAR_4->head);

 if (!VAR_6 || VAR_6->ent)
  return;

 FUNC_3(VAR_6);

 FUNC_4(VAR_6->fs_data.debugfs_name,
   VAR_4->debugfs_name,
   sizeof(VAR_6->fs_data.debugfs_name));

 VAR_6->ent = FUNC_2(VAR_6->fs_data.debugfs_name,
           VAR_1 | VAR_0, VAR_5->dir, VAR_6,
           &VAR_2);
}
