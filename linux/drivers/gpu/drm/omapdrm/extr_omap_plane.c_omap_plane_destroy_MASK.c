
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_plane {int name; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct omap_plane*) ;
 struct omap_plane* FUNC_3 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_0)
{
 struct omap_plane *VAR_1 = FUNC_3(VAR_0);

 FUNC_0("%s", VAR_1->name);

 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
