
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_crtc; struct amdgpu_crtc** crtcs; } ;
struct TYPE_4__ {scalar_t__ new_active_crtc_count; int new_active_crtcs; } ;
struct TYPE_5__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_3__ mode_info; TYPE_2__ pm; } ;
struct amdgpu_crtc {int line_time; int crtc_id; int wm_high; int wm_low; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_4)
{
 struct amdgpu_crtc *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_4->pm.dpm.new_active_crtc_count == 0)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->mode_info.num_crtc; VAR_6++) {
  if (VAR_4->pm.dpm.new_active_crtcs & (1 << VAR_6)) {
   VAR_5 = VAR_4->mode_info.crtcs[VAR_6];
   break;
  }
 }

 if (VAR_5 == ((void*)0))
  return 0;

 if (VAR_5->line_time <= 0)
  return 0;

 if (FUNC_0(VAR_4,
           VAR_1,
           VAR_5->crtc_id) != VAR_0)
  return 0;

 if (FUNC_0(VAR_4,
           VAR_3,
           VAR_5->wm_high / VAR_5->line_time) != VAR_0)
  return 0;

 if (FUNC_0(VAR_4,
           VAR_2,
           VAR_5->wm_low / VAR_5->line_time) != VAR_0)
  return 0;

 return 0;
}
