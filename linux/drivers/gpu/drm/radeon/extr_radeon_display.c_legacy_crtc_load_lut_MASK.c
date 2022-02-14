
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u16 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_4)
{
 struct radeon_crtc *VAR_5 = FUNC_3(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 u16 *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 uint32_t VAR_12;

 VAR_12 = FUNC_0(VAR_1);
 if (VAR_5->crtc_id == 0)
  VAR_12 &= (uint32_t)~VAR_0;
 else
  VAR_12 |= VAR_0;
 FUNC_1(VAR_1, VAR_12);

 FUNC_2(VAR_3, 0);
 VAR_8 = VAR_4->gamma_store;
 VAR_9 = VAR_8 + VAR_4->gamma_size;
 VAR_10 = VAR_9 + VAR_4->gamma_size;
 for (VAR_11 = 0; VAR_11 < 256; VAR_11++) {
  FUNC_1(VAR_2,
         ((*VAR_8++ & 0xffc0) << 14) |
         ((*VAR_9++ & 0xffc0) << 4) |
         (*VAR_10++ >> 6));
 }
}
