
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;
struct atmel_hlcdc_plane {int layer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 struct atmel_hlcdc_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_6,
          struct drm_plane_state *VAR_7)
{
 struct atmel_hlcdc_plane *VAR_8 = FUNC_2(VAR_6);


 FUNC_1(&VAR_8->layer, VAR_2,
        0xffffffff);


 FUNC_1(&VAR_8->layer, VAR_1,
        VAR_4 |
        VAR_0 |
        VAR_5);


 FUNC_0(&VAR_8->layer, VAR_3);
}
