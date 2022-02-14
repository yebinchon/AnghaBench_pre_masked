
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
struct nouveau_drm {TYPE_1__ vbios; } ;
struct drm_minor {int debugfs_root; int dev; } ;
struct dentry {int dummy; } ;
struct TYPE_7__ {int i_size; } ;
struct TYPE_6__ {int fops; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ,int,int ,int ,int ) ;
 struct dentry* FUNC_3 (char*,int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,int ,int ,struct drm_minor*) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 struct nouveau_drm* FUNC_6 (int ) ;

int
FUNC_7(struct drm_minor *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_6(VAR_6->dev);
 struct dentry *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  VAR_8 = FUNC_2(VAR_4[VAR_9].name,
          VAR_2 | VAR_3,
          VAR_6->debugfs_root, VAR_6->dev,
          VAR_4[VAR_9].fops);
  if (!VAR_8)
   return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_5,
           VAR_1,
           VAR_6->debugfs_root, VAR_6);
 if (VAR_10)
  return VAR_10;




 VAR_8 = FUNC_3("vbios.rom", VAR_6->debugfs_root);
 if (!VAR_8)
  return 0;

 FUNC_1(VAR_8)->i_size = VAR_7->vbios.length;
 FUNC_4(VAR_8);

 return 0;
}
