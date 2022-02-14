
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {scalar_t__ vouctl; } ;
struct vou_inf {int clocks_en_bits; } ;
struct drm_crtc {int dummy; } ;
typedef enum vou_inf_id { ____Placeholder_vou_inf_id } vou_inf_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct zx_vou_hw* FUNC_0 (struct drm_crtc*) ;
 struct vou_inf* VAR_2 ;
 int FUNC_1 (scalar_t__,int,int ) ;

void FUNC_2(enum vou_inf_id VAR_3, struct drm_crtc *VAR_4)
{
 struct zx_vou_hw *VAR_5 = FUNC_0(VAR_4);
 struct vou_inf *VAR_6 = &VAR_2[VAR_3];


 FUNC_1(VAR_5->vouctl + VAR_1, 1 << VAR_3, 0);


 FUNC_1(VAR_5->vouctl + VAR_0, VAR_6->clocks_en_bits, 0);
}
