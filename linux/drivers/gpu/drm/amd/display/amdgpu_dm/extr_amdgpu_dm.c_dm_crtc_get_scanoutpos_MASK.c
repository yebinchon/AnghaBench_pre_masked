
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct dm_crtc_state {int * stream; } ;
struct TYPE_3__ {int num_crtc; struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {int state; } ;
struct amdgpu_crtc {TYPE_2__ base; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*,int*,int*,int*) ;
 struct dm_crtc_state* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_1, int VAR_2,
      u32 *VAR_3, u32 *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;

 if ((VAR_2 < 0) || (VAR_2 >= VAR_1->mode_info.num_crtc))
  return -VAR_0;
 else {
  struct amdgpu_crtc *VAR_9 = VAR_1->mode_info.crtcs[VAR_2];
  struct dm_crtc_state *VAR_10 = FUNC_2(
      VAR_9->base.state);

  if (VAR_10->stream == ((void*)0)) {
   FUNC_0("dc_stream_state is NULL for crtc '%d'!\n",
      VAR_2);
   return 0;
  }





  FUNC_1(VAR_10->stream,
      &VAR_5,
      &VAR_6,
      &VAR_7,
      &VAR_8);

  *VAR_4 = VAR_8 | (VAR_7 << 16);
  *VAR_3 = VAR_5 | (VAR_6 << 16);
 }

 return 0;
}
