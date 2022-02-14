
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct drm_framebuffer {int* pitches; TYPE_4__* format; } ;
struct TYPE_5__ {struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_7__ {TYPE_2__* primary; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; TYPE_3__ base; } ;
struct TYPE_8__ {int* cpp; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5,
          int VAR_6, u64 VAR_7, bool VAR_8)
{
 struct amdgpu_crtc *VAR_9 = VAR_5->mode_info.crtcs[VAR_6];
 struct drm_framebuffer *VAR_10 = VAR_9->base.primary->fb;


 FUNC_1(VAR_1 + VAR_9->crtc_offset, VAR_8 ?
        VAR_0 : 0);

 FUNC_1(VAR_2 + VAR_9->crtc_offset,
        VAR_10->pitches[0] / VAR_10->format->cpp[0]);

 FUNC_1(VAR_4 + VAR_9->crtc_offset,
        FUNC_2(VAR_7));
 FUNC_1(VAR_3 + VAR_9->crtc_offset,
        (u32)VAR_7);


 FUNC_0(VAR_3 + VAR_9->crtc_offset);
}
