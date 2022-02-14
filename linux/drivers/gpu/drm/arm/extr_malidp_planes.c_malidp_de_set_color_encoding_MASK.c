
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malidp_plane {TYPE_1__* layer; int hwdev; } ;
typedef enum drm_color_range { ____Placeholder_drm_color_range } drm_color_range ;
typedef enum drm_color_encoding { ____Placeholder_drm_color_encoding } drm_color_encoding ;
struct TYPE_2__ {scalar_t__ yuv2rgb_offset; scalar_t__ base; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int *** VAR_1 ;

__attribute__((used)) static void FUNC_1(struct malidp_plane *VAR_2,
      enum drm_color_encoding VAR_3,
      enum drm_color_range VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

  FUNC_0(VAR_2->hwdev, VAR_1[VAR_3][VAR_4][VAR_5],
    VAR_2->layer->base + VAR_2->layer->yuv2rgb_offset +
    VAR_5 * 4);
 }
}
