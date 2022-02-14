
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_12__ {int id; } ;
struct drm_plane {TYPE_4__ base; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct TYPE_16__ {void* safe_lut; void* danger_lut; } ;
struct dpu_plane {TYPE_8__ pipe_qos_cfg; TYPE_7__* pipe_hw; scalar_t__ pipe; TYPE_3__* catalog; int is_rt_pipe; } ;
struct TYPE_13__ {int pixel_format; } ;
struct dpu_format {int fetch_mode; TYPE_5__ base; } ;
struct TYPE_14__ {int (* setup_danger_safe_lut ) (TYPE_7__*,TYPE_8__*) ;} ;
struct TYPE_15__ {TYPE_6__ ops; } ;
struct TYPE_10__ {void** safe_lut_tbl; void** danger_lut_tbl; } ;
struct TYPE_11__ {TYPE_2__ perf; } ;
struct TYPE_9__ {int format; } ;


 int FUNC_0 (char*,int ,scalar_t__,char*,int,void*,void*) ;
 scalar_t__ FUNC_1 (struct dpu_format const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dpu_format* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_7__*,TYPE_8__*) ;
 struct dpu_plane* FUNC_4 (struct drm_plane*) ;
 int FUNC_5 (scalar_t__,int ,int,void*,void*) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_4,
  struct drm_framebuffer *VAR_5)
{
 struct dpu_plane *VAR_6 = FUNC_4(VAR_4);
 const struct dpu_format *VAR_7 = ((void*)0);
 u32 VAR_8, VAR_9;

 if (!VAR_6->is_rt_pipe) {
  VAR_8 = VAR_6->catalog->perf.danger_lut_tbl
    [VAR_2];
  VAR_9 = VAR_6->catalog->perf.safe_lut_tbl
    [VAR_2];
 } else {
  VAR_7 = FUNC_2(
    VAR_5->format->format,
    VAR_5->modifier);

  if (VAR_7 && FUNC_1(VAR_7)) {
   VAR_8 = VAR_6->catalog->perf.danger_lut_tbl
     [VAR_0];
   VAR_9 = VAR_6->catalog->perf.safe_lut_tbl
     [VAR_0];
  } else {
   VAR_8 = VAR_6->catalog->perf.danger_lut_tbl
     [VAR_1];
   VAR_9 = VAR_6->catalog->perf.safe_lut_tbl
     [VAR_1];
  }
 }

 VAR_6->pipe_qos_cfg.danger_lut = VAR_8;
 VAR_6->pipe_qos_cfg.safe_lut = VAR_9;

 FUNC_5(VAR_6->pipe - VAR_3,
   (VAR_7) ? VAR_7->base.pixel_format : 0,
   (VAR_7) ? VAR_7->fetch_mode : 0,
   VAR_6->pipe_qos_cfg.danger_lut,
   VAR_6->pipe_qos_cfg.safe_lut);

 FUNC_0("plane%u: pnum:%d fmt: %4.4s mode:%d luts[0x%x, 0x%x]\n",
  VAR_4->base.id,
  VAR_6->pipe - VAR_3,
  VAR_7 ? (char *)&VAR_7->base.pixel_format : ((void*)0),
  VAR_7 ? VAR_7->fetch_mode : -1,
  VAR_6->pipe_qos_cfg.danger_lut,
  VAR_6->pipe_qos_cfg.safe_lut);

 VAR_6->pipe_hw->ops.setup_danger_safe_lut(VAR_6->pipe_hw,
   &VAR_6->pipe_qos_cfg);
}
