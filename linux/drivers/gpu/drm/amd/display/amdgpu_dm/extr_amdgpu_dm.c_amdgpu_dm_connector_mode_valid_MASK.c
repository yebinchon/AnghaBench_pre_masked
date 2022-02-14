
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_display_mode {int flags; int clock; int hdisplay; int vdisplay; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct dc_stream_state {int dummy; } ;
struct dc_sink {int dummy; } ;
struct TYPE_5__ {scalar_t__ force; } ;
struct amdgpu_dm_connector {struct dc_sink* dc_sink; int dc_em_sink; TYPE_2__ base; } ;
struct TYPE_6__ {int dc; } ;
struct amdgpu_device {TYPE_3__ dm; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_4__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dc_stream_state* FUNC_2 (struct amdgpu_dm_connector*,struct drm_display_mode*,int *,int *) ;
 int FUNC_3 (struct dc_stream_state*) ;
 int FUNC_4 (int ,struct dc_stream_state*) ;
 int FUNC_5 (struct amdgpu_dm_connector*) ;
 struct amdgpu_dm_connector* FUNC_6 (struct drm_connector*) ;

enum drm_mode_status FUNC_7(struct drm_connector *VAR_6,
       struct drm_display_mode *VAR_7)
{
 int VAR_8 = VAR_4;
 struct dc_sink *VAR_9;
 struct amdgpu_device *VAR_10 = VAR_6->dev->dev_private;

 struct dc_stream_state *VAR_11;
 struct amdgpu_dm_connector *VAR_12 = FUNC_6(VAR_6);
 enum dc_status VAR_13 = VAR_0;

 if ((VAR_7->flags & VAR_3) ||
   (VAR_7->flags & VAR_2))
  return VAR_8;





 if (VAR_12->base.force != VAR_1 &&
  !VAR_12->dc_em_sink)
  FUNC_5(VAR_12);

 VAR_9 = FUNC_6(VAR_6)->dc_sink;

 if (VAR_9 == ((void*)0)) {
  FUNC_1("dc_sink is NULL!\n");
  goto fail;
 }

 VAR_11 = FUNC_2(VAR_12, VAR_7, ((void*)0), ((void*)0));
 if (VAR_11 == ((void*)0)) {
  FUNC_1("Failed to create stream for sink!\n");
  goto fail;
 }

 VAR_13 = FUNC_4(VAR_10->dm.dc, VAR_11);

 if (VAR_13 == VAR_0)
  VAR_8 = VAR_5;
 else
  FUNC_0("Mode %dx%d (clk %d) failed DC validation with error %d\n",
         VAR_7->vdisplay,
         VAR_7->hdisplay,
         VAR_7->clock,
         VAR_13);

 FUNC_3(VAR_11);

fail:

 return VAR_8;
}
