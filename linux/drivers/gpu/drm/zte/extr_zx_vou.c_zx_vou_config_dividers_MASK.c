
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_vou_hw {int vouctl; } ;
struct zx_crtc_bits {int div_vga_shift; int div_pic_shift; int div_tvenc_shift; int div_hdmi_pnx_shift; int div_hdmi_shift; int div_inf_shift; int div_layer_shift; } ;
struct zx_crtc {struct zx_crtc_bits* bits; struct zx_vou_hw* vou; } ;
struct vou_div_config {int id; int val; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;



 struct zx_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(struct drm_crtc *VAR_3,
       struct vou_div_config *VAR_4, int VAR_5)
{
 struct zx_crtc *VAR_6 = FUNC_0(VAR_3);
 struct zx_vou_hw *VAR_7 = VAR_6->vou;
 const struct zx_crtc_bits *VAR_8 = VAR_6->bits;
 int VAR_9;


 FUNC_1(VAR_7->vouctl + VAR_2, VAR_0, 0);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct vou_div_config *VAR_10 = VAR_4 + VAR_9;
  u32 VAR_11, VAR_12;

  switch (VAR_10->id) {
  case 128:
   VAR_11 = VAR_1;
   VAR_12 = VAR_8->div_vga_shift;
   break;
  case 130:
   VAR_11 = VAR_1;
   VAR_12 = VAR_8->div_pic_shift;
   break;
  case 129:
   VAR_11 = VAR_2;
   VAR_12 = VAR_8->div_tvenc_shift;
   break;
  case 133:
   VAR_11 = VAR_2;
   VAR_12 = VAR_8->div_hdmi_pnx_shift;
   break;
  case 134:
   VAR_11 = VAR_2;
   VAR_12 = VAR_8->div_hdmi_shift;
   break;
  case 132:
   VAR_11 = VAR_2;
   VAR_12 = VAR_8->div_inf_shift;
   break;
  case 131:
   VAR_11 = VAR_2;
   VAR_12 = VAR_8->div_layer_shift;
   break;
  default:
   continue;
  }


  FUNC_1(VAR_7->vouctl + VAR_11, 0x7 << VAR_12,
          VAR_10->val << VAR_12);
 }


 FUNC_1(VAR_7->vouctl + VAR_2, VAR_0,
         VAR_0);
}
