
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_crtc {TYPE_3__* dev; } ;
struct dm_crtc_state {struct dc_stream_state* stream; } ;
struct dc_stream_state {TYPE_1__* ctx; } ;
struct TYPE_5__ {int dc_lock; } ;
struct amdgpu_device {TYPE_2__ dm; } ;
typedef enum amdgpu_dm_pipe_crc_source { ____Placeholder_amdgpu_dm_pipe_crc_source } amdgpu_dm_pipe_crc_source ;
struct TYPE_6__ {struct amdgpu_device* dev_private; } ;
struct TYPE_4__ {int dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct dc_stream_state*,int,int) ;
 int FUNC_2 (struct dc_stream_state*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_crtc *VAR_3,
     struct dm_crtc_state *VAR_4,
     enum amdgpu_dm_pipe_crc_source VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->dev->dev_private;
 struct dc_stream_state *VAR_7 = VAR_4->stream;
 bool VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = 0;


 if (!VAR_7)
  return 0;

 FUNC_5(&VAR_6->dm.dc_lock);


 if (FUNC_3(VAR_5)) {
  if (!FUNC_1(VAR_7->ctx->dc,
          VAR_7, VAR_8, VAR_8)) {
   VAR_9 = -VAR_2;
   goto unlock;
  }
 }


 if (!FUNC_4(VAR_5))
  FUNC_2(VAR_7, VAR_1);
 else
  FUNC_2(VAR_7,
         VAR_0);

unlock:
 FUNC_6(&VAR_6->dm.dc_lock);

 return VAR_9;
}
