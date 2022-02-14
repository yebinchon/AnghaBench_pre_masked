
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_framebuffer {scalar_t__ width; scalar_t__ height; int* pitches; TYPE_3__* format; } ;
struct TYPE_5__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_2__ mode; } ;
struct drm_connector_state {TYPE_1__* writeback_job; int crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_6__ {scalar_t__ format; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct drm_connector_state* FUNC_3 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_4 (struct drm_atomic_state*,int ) ;
 scalar_t__* VAR_1 ;
 int FUNC_5 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_2,
       struct drm_atomic_state *VAR_3)
{
 struct drm_connector_state *VAR_4;
 struct drm_crtc_state *VAR_5;
 struct drm_framebuffer *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_4->writeback_job)
  return 0;

 VAR_5 = FUNC_4(VAR_3, VAR_4->crtc);

 VAR_6 = VAR_4->writeback_job->fb;
 if (VAR_6->width != VAR_5->mode.hdisplay ||
     VAR_6->height != VAR_5->mode.vdisplay) {
  FUNC_1("Invalid framebuffer size %ux%u\n",
         VAR_6->width, VAR_6->height);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_6->format->format == VAR_1[VAR_7])
   break;
 }

 if (VAR_7 == FUNC_0(VAR_1))
  return -VAR_0;


 if (VAR_6->pitches[0] & FUNC_2(3, 0))
  return -VAR_0;

 FUNC_5(VAR_5);

 return 0;
}
