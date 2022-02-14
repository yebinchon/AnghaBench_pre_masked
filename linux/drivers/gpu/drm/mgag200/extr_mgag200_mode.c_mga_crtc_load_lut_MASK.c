
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mga_device {int dummy; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct drm_device {struct mga_device* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; int enabled; TYPE_1__* primary; struct drm_device* dev; } ;
struct TYPE_4__ {int* cpp; int depth; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 struct mga_device *VAR_6 = VAR_5->dev_private;
 struct drm_framebuffer *VAR_7 = VAR_4->primary->fb;
 u16 *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 if (!VAR_4->enabled)
  return;

 VAR_8 = VAR_4->gamma_store;
 VAR_9 = VAR_8 + VAR_4->gamma_size;
 VAR_10 = VAR_9 + VAR_4->gamma_size;

 FUNC_0(VAR_0 + VAR_2, 0);

 if (VAR_7 && VAR_7->format->cpp[0] * 8 == 16) {
  int VAR_12 = (VAR_7->format->depth == 15) ? 8 : 4;
  u8 VAR_13, VAR_14;
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11 += VAR_12) {
   if (VAR_7->format->depth == 16) {
    if (VAR_11 > (VAR_3 >> 1)) {
     VAR_13 = VAR_14 = 0;
    } else {
     VAR_13 = *VAR_8++ >> 8;
     VAR_14 = *VAR_10++ >> 8;
     VAR_8++;
     VAR_10++;
    }
   } else {
    VAR_13 = *VAR_8++ >> 8;
    VAR_14 = *VAR_10++ >> 8;
   }

   FUNC_0(VAR_0 + VAR_1, VAR_13);
   FUNC_0(VAR_0 + VAR_1, *VAR_9++ >> 8);
   FUNC_0(VAR_0 + VAR_1, VAR_14);
  }
  return;
 }
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {

  FUNC_0(VAR_0 + VAR_1, *VAR_8++ >> 8);
  FUNC_0(VAR_0 + VAR_1, *VAR_9++ >> 8);
  FUNC_0(VAR_0 + VAR_1, *VAR_10++ >> 8);
 }
}
