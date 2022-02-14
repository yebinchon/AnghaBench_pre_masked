
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct drm_framebuffer {int* pitches; TYPE_4__* format; } ;
struct TYPE_5__ {struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_7__ {TYPE_2__* primary; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; TYPE_3__ base; } ;
struct TYPE_8__ {int* cpp; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_6,
    int VAR_7, u64 VAR_8, bool VAR_9)
{
 struct amdgpu_crtc *VAR_10 = VAR_6->mode_info.crtcs[VAR_7];
 struct drm_framebuffer *VAR_11 = VAR_10->base.primary->fb;
 u32 VAR_12;


 VAR_12 = FUNC_1(VAR_2 + VAR_10->crtc_offset);
 VAR_12 = FUNC_0(VAR_12, VAR_0,
       VAR_1, VAR_9 ? 1 : 0);
 FUNC_2(VAR_2 + VAR_10->crtc_offset, VAR_12);

 FUNC_2(VAR_3 + VAR_10->crtc_offset,
        VAR_11->pitches[0] / VAR_11->format->cpp[0]);

 FUNC_2(VAR_5 + VAR_10->crtc_offset,
        FUNC_4(VAR_8));

 FUNC_2(VAR_4 + VAR_10->crtc_offset,
        FUNC_3(VAR_8));

 FUNC_1(VAR_4 + VAR_10->crtc_offset);
}
