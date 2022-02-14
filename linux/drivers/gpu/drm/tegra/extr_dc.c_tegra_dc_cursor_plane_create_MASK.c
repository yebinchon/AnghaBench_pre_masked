
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_plane {int dummy; } ;
struct tegra_plane {int index; struct drm_plane base; struct tegra_dc* dc; } ;
struct tegra_dc {int dummy; } ;
struct drm_device {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_plane* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_plane*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_plane*,unsigned long,int *,int const*,unsigned int,int *,int ,int *) ;
 int FUNC_4 (struct tegra_plane*) ;
 struct tegra_plane* FUNC_5 (int,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_6 (struct drm_device*) ;

__attribute__((used)) static struct drm_plane *FUNC_7(struct drm_device *VAR_6,
            struct tegra_dc *VAR_7)
{
 unsigned long VAR_8 = FUNC_6(VAR_6);
 struct tegra_plane *VAR_9;
 unsigned int VAR_10;
 const u32 *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_1(-VAR_1);
 VAR_9->index = 6;
 VAR_9->dc = VAR_7;

 VAR_10 = FUNC_0(VAR_3);
 VAR_11 = VAR_3;

 VAR_12 = FUNC_3(VAR_6, &VAR_9->base, VAR_8,
           &VAR_5, VAR_11,
           VAR_10, ((void*)0),
           VAR_0, ((void*)0));
 if (VAR_12 < 0) {
  FUNC_4(VAR_9);
  return FUNC_1(VAR_12);
 }

 FUNC_2(&VAR_9->base, &VAR_4);

 return &VAR_9->base;
}
