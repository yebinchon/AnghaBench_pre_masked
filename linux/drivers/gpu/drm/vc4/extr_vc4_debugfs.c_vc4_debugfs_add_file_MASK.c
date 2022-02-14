
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dev {int debugfs_list; } ;
struct TYPE_2__ {char const* name; int (* show ) (struct seq_file*,void*) ;void* data; } ;
struct vc4_debugfs_info_entry {int link; TYPE_1__ info; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 struct vc4_debugfs_info_entry* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;

void FUNC_3(struct drm_device *VAR_1,
     const char *VAR_2,
     int (*VAR_3)(struct seq_file*, void*),
     void *VAR_4)
{
 struct vc4_dev *VAR_5 = FUNC_2(VAR_1);

 struct vc4_debugfs_info_entry *VAR_6 =
  FUNC_0(VAR_1->dev, sizeof(*VAR_6), VAR_0);

 if (!VAR_6)
  return;

 VAR_6->info.name = VAR_2;
 VAR_6->info.show = VAR_3;
 VAR_6->info.data = VAR_4;

 FUNC_1(&VAR_6->link, &VAR_5->debugfs_list);
}
