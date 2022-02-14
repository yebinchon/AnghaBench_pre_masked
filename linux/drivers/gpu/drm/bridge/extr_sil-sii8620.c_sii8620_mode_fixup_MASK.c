
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int lock; int use_packed_pixel; } ;
struct drm_display_mode {int dummy; } ;
struct drm_bridge {int dummy; } ;


 struct sii8620* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sii8620*,struct drm_display_mode*) ;

__attribute__((used)) static bool FUNC_4(struct drm_bridge *VAR_0,
          const struct drm_display_mode *VAR_1,
          struct drm_display_mode *VAR_2)
{
 struct sii8620 *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->lock);

 VAR_3->use_packed_pixel = FUNC_3(VAR_3, VAR_2);

 FUNC_2(&VAR_3->lock);

 return 1;
}
