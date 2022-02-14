
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane {int type; } ;
struct TYPE_2__ {int nv12; } ;
struct dc_plane_cap {TYPE_1__ pixel_format_support; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;



 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_1(const struct drm_plane *VAR_4,
        const struct dc_plane_cap *VAR_5,
        uint32_t *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0;







 switch (VAR_4->type) {
 case 128:
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); ++VAR_8) {
   if (VAR_9 >= VAR_7)
    break;

   VAR_6[VAR_9++] = VAR_3[VAR_8];
  }

  if (VAR_5 && VAR_5->pixel_format_support.nv12)
   VAR_6[VAR_9++] = VAR_0;
  break;

 case 129:
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); ++VAR_8) {
   if (VAR_9 >= VAR_7)
    break;

   VAR_6[VAR_9++] = VAR_2[VAR_8];
  }
  break;

 case 130:
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); ++VAR_8) {
   if (VAR_9 >= VAR_7)
    break;

   VAR_6[VAR_9++] = VAR_1[VAR_8];
  }
  break;
 }

 return VAR_9;
}
