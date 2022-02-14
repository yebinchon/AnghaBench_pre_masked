
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int debugfs_root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,struct drm_minor*) ;
 int VAR_0 ;

int
FUNC_2(struct drm_minor *VAR_1)
{
 return FUNC_1(VAR_0,
     FUNC_0(VAR_0),
     VAR_1->debugfs_root, VAR_1);
}
