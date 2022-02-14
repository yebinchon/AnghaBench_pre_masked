
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dc {int * debugfs_files; } ;
struct drm_minor {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_minor* primary; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int,struct drm_minor*) ;
 int FUNC_2 (int *) ;
 struct tegra_dc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);
 struct drm_minor *VAR_3 = VAR_1->dev->primary;
 struct tegra_dc *VAR_4 = FUNC_3(VAR_1);

 FUNC_1(VAR_4->debugfs_files, VAR_2, VAR_3);
 FUNC_2(VAR_4->debugfs_files);
 VAR_4->debugfs_files = ((void*)0);
}
