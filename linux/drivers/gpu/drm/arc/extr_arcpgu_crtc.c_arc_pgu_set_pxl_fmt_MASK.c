
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct simplefb_format {scalar_t__ fourcc; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_crtc {TYPE_2__* primary; } ;
struct arcpgu_drm_private {int dummy; } ;
struct TYPE_6__ {scalar_t__ format; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct simplefb_format*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct arcpgu_drm_private*,int ) ;
 int FUNC_3 (struct arcpgu_drm_private*,int ,int) ;
 struct arcpgu_drm_private* FUNC_4 (struct drm_crtc*) ;
 struct simplefb_format* VAR_3 ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_4)
{
 struct arcpgu_drm_private *VAR_5 = FUNC_4(VAR_4);
 const struct drm_framebuffer *VAR_6 = VAR_4->primary->state->fb;
 uint32_t VAR_7 = VAR_6->format->format;
 struct simplefb_format *VAR_8 = ((void*)0);
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
  if (VAR_3[VAR_9].fourcc == VAR_7)
   VAR_8 = &VAR_3[VAR_9];
 }

 if (FUNC_1(!VAR_8))
  return;

 if (VAR_8->fourcc == VAR_2)
  FUNC_3(VAR_5, VAR_1,
         FUNC_2(VAR_5, VAR_1) |
        VAR_0);

}
