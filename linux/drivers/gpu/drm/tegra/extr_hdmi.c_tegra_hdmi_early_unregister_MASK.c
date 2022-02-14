
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_output {int dummy; } ;
struct tegra_hdmi {int * debugfs_files; } ;
struct drm_minor {int dummy; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_minor* primary; } ;


 unsigned int FUNC_0 (int ) ;
 struct tegra_output* FUNC_1 (struct drm_connector*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned int,struct drm_minor*) ;
 int FUNC_3 (int *) ;
 struct tegra_hdmi* FUNC_4 (struct tegra_output*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_1)
{
 struct tegra_output *VAR_2 = FUNC_1(VAR_1);
 struct drm_minor *VAR_3 = VAR_1->dev->primary;
 unsigned int VAR_4 = FUNC_0(VAR_0);
 struct tegra_hdmi *VAR_5 = FUNC_4(VAR_2);

 FUNC_2(VAR_5->debugfs_files, VAR_4, VAR_3);
 FUNC_3(VAR_5->debugfs_files);
 VAR_5->debugfs_files = ((void*)0);
}
