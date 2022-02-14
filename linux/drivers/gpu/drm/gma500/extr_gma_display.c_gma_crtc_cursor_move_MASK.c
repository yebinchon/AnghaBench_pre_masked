
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gma_crtc {int pipe; int cursor_addr; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 struct gma_crtc* FUNC_3 (struct drm_crtc*) ;

int FUNC_4(struct drm_crtc *VAR_8, int VAR_9, int VAR_10)
{
 struct drm_device *VAR_11 = VAR_8->dev;
 struct gma_crtc *VAR_12 = FUNC_3(VAR_8);
 int VAR_13 = VAR_12->pipe;
 uint32_t VAR_14 = 0;
 uint32_t VAR_15;

 if (VAR_9 < 0) {
  VAR_14 |= (VAR_5 << VAR_6);
  VAR_9 = -VAR_9;
 }
 if (VAR_10 < 0) {
  VAR_14 |= (VAR_5 << VAR_7);
  VAR_10 = -VAR_10;
 }

 VAR_14 |= ((VAR_9 & VAR_4) << VAR_6);
 VAR_14 |= ((VAR_10 & VAR_4) << VAR_7);

 VAR_15 = VAR_12->cursor_addr;

 if (FUNC_1(VAR_11, 0)) {
  FUNC_0((VAR_13 == 0) ? VAR_1 : VAR_3, VAR_14);
  FUNC_0((VAR_13 == 0) ? VAR_0 : VAR_2, VAR_15);
  FUNC_2(VAR_11);
 }
 return 0;
}
