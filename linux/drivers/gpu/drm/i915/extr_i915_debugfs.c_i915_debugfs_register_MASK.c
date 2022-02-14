
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_minor {int debugfs_root; int dev; } ;
struct TYPE_4__ {struct drm_minor* primary; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_5__ {char* name; int * fops; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,struct drm_minor*) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

int FUNC_4(struct drm_i915_private *VAR_7)
{
 struct drm_minor *VAR_8 = VAR_7->drm.primary;
 int VAR_9;

 FUNC_1("i915_forcewake_user", VAR_2, VAR_8->debugfs_root,
       FUNC_3(VAR_8->dev), &VAR_6);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  FUNC_1(VAR_4[VAR_9].name,
        VAR_1 | VAR_3,
        VAR_8->debugfs_root,
        FUNC_3(VAR_8->dev),
        VAR_4[VAR_9].fops);
 }

 return FUNC_2(VAR_5,
     VAR_0,
     VAR_8->debugfs_root, VAR_8);
}
