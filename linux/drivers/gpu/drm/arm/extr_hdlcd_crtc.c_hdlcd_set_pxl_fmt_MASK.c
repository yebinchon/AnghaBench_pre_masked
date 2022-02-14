
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int offset; int length; } ;
struct TYPE_11__ {int offset; int length; } ;
struct TYPE_10__ {int offset; int length; } ;
struct simplefb_format {int bits_per_pixel; TYPE_6__ blue; TYPE_5__ green; TYPE_4__ red; int fourcc; } ;
struct hdlcd_drm_private {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_crtc {TYPE_2__* primary; } ;
struct TYPE_9__ {int format; } ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_7__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (struct simplefb_format*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 struct hdlcd_drm_private* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct hdlcd_drm_private*,int ,int) ;
 struct simplefb_format* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_5)
{
 unsigned int VAR_6;
 struct hdlcd_drm_private *VAR_7 = FUNC_2(VAR_5);
 const struct drm_framebuffer *VAR_8 = VAR_5->primary->state->fb;
 uint32_t VAR_9;
 struct simplefb_format *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_9 = VAR_8->format->format;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  if (VAR_4[VAR_11].fourcc == VAR_9)
   VAR_10 = &VAR_4[VAR_11];
 }

 if (FUNC_1(!VAR_10))
  return 0;


 VAR_6 = (VAR_10->bits_per_pixel + 7) / 8;
 FUNC_3(VAR_7, VAR_2, (VAR_6 - 1) << 3);
 FUNC_3(VAR_7, VAR_3, VAR_10->red.offset |



      ((VAR_10->red.length & 0xf) << 8));
 FUNC_3(VAR_7, VAR_1, VAR_10->green.offset |
      ((VAR_10->green.length & 0xf) << 8));
 FUNC_3(VAR_7, VAR_0, VAR_10->blue.offset |
      ((VAR_10->blue.length & 0xf) << 8));

 return 0;
}
