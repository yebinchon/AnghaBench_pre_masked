
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv17_tv_state {int ptv_204; int* tv_enc; } ;
struct TYPE_2__ {int * tv_enc; } ;
struct nv17_tv_norm_params {TYPE_1__ tv_enc_mode; } ;
struct nv17_tv_encoder {int select_subconnector; int subconnector; int pin_mask; int hue; int saturation; struct nv17_tv_state state; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;






 struct nv17_tv_norm_params* FUNC_0 (struct drm_encoder*) ;
 void* FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct drm_device*,struct nv17_tv_state*,int) ;
 int FUNC_3 (struct drm_device*,struct nv17_tv_state*,int) ;
 struct nv17_tv_encoder* FUNC_4 (struct drm_encoder*) ;

void FUNC_5(struct drm_encoder *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct nv17_tv_encoder *VAR_2 = FUNC_4(VAR_0);
 struct nv17_tv_state *VAR_3 = &VAR_2->state;
 struct nv17_tv_norm_params *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = VAR_2->select_subconnector ?
      VAR_2->select_subconnector :
      VAR_2->subconnector;

 switch (VAR_5) {
 case 130:
 {
  VAR_3->ptv_204 = 0x2;


  if (VAR_2->pin_mask & 0x4)
   VAR_3->ptv_204 |= 0x010000;
  else if (VAR_2->pin_mask & 0x2)
   VAR_3->ptv_204 |= 0x100000;
  else
   VAR_3->ptv_204 |= 0x110000;

  VAR_3->tv_enc[0x7] = 0x10;
  break;
 }
 case 128:
  VAR_3->ptv_204 = 0x11012;
  VAR_3->tv_enc[0x7] = 0x18;
  break;

 case 131:
  VAR_3->ptv_204 = 0x111333;
  VAR_3->tv_enc[0x7] = 0x14;
  break;

 case 129:
  VAR_3->ptv_204 = 0x111012;
  VAR_3->tv_enc[0x7] = 0x18;
  break;
 }

 VAR_3->tv_enc[0x20] = FUNC_1(0, VAR_4->tv_enc_mode.tv_enc[0x20],
      255, VAR_2->saturation);
 VAR_3->tv_enc[0x22] = FUNC_1(0, VAR_4->tv_enc_mode.tv_enc[0x22],
      255, VAR_2->saturation);
 VAR_3->tv_enc[0x25] = VAR_2->hue * 255 / 100;

 FUNC_2(VAR_1, VAR_3, 204);
 FUNC_3(VAR_1, VAR_3, 7);
 FUNC_3(VAR_1, VAR_3, 20);
 FUNC_3(VAR_1, VAR_3, 22);
 FUNC_3(VAR_1, VAR_3, 25);
}
