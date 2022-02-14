
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dm_crtc_state {int * stream; } ;
struct TYPE_3__ {int num_crtc; struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {int state; } ;
struct amdgpu_crtc {TYPE_2__ base; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 struct dm_crtc_state* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct amdgpu_device *VAR_0, int VAR_1)
{
 if (VAR_1 >= VAR_0->mode_info.num_crtc)
  return 0;
 else {
  struct amdgpu_crtc *VAR_2 = VAR_0->mode_info.crtcs[VAR_1];
  struct dm_crtc_state *VAR_3 = FUNC_2(
    VAR_2->base.state);


  if (VAR_3->stream == ((void*)0)) {
   FUNC_0("dc_stream_state is NULL for crtc '%d'!\n",
      VAR_1);
   return 0;
  }

  return FUNC_1(VAR_3->stream);
 }
}
