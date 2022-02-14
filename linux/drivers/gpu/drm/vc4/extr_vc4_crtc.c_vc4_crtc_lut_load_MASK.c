
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vc4_dev {int dummy; } ;
struct vc4_crtc {int channel; int* lut_r; int* lut_g; int* lut_b; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int gamma_size; struct drm_device* dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vc4_crtc* FUNC_1 (struct drm_crtc*) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_3(struct drm_crtc *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct vc4_dev *VAR_5 = FUNC_2(VAR_4);
 struct vc4_crtc *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7;





 FUNC_0(VAR_0,
    VAR_1 |
    (VAR_6->channel * 3 * VAR_3->gamma_size));

 for (VAR_7 = 0; VAR_7 < VAR_3->gamma_size; VAR_7++)
  FUNC_0(VAR_2, VAR_6->lut_r[VAR_7]);
 for (VAR_7 = 0; VAR_7 < VAR_3->gamma_size; VAR_7++)
  FUNC_0(VAR_2, VAR_6->lut_g[VAR_7]);
 for (VAR_7 = 0; VAR_7 < VAR_3->gamma_size; VAR_7++)
  FUNC_0(VAR_2, VAR_6->lut_b[VAR_7]);
}
