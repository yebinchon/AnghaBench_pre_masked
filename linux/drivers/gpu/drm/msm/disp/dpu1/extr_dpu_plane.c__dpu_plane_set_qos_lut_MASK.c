
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_14__ {int id; } ;
struct drm_plane {TYPE_5__ base; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct TYPE_18__ {int creq_lut; } ;
struct TYPE_11__ {int src_rect; } ;
struct dpu_plane {TYPE_9__ pipe_qos_cfg; TYPE_8__* pipe_hw; int is_rt_pipe; scalar_t__ pipe; TYPE_4__* catalog; TYPE_2__ pipe_cfg; } ;
struct TYPE_15__ {int pixel_format; } ;
struct dpu_format {TYPE_6__ base; } ;
struct TYPE_16__ {int (* setup_creq_lut ) (TYPE_8__*,TYPE_9__*) ;} ;
struct TYPE_17__ {TYPE_7__ ops; } ;
struct TYPE_12__ {int * qos_lut_tbl; } ;
struct TYPE_13__ {TYPE_3__ perf; } ;
struct TYPE_10__ {int format; } ;


 int FUNC_0 (char*,int ,scalar_t__,char*,int ,size_t,int ) ;
 scalar_t__ FUNC_1 (struct dpu_format const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_2 (struct drm_plane*,struct dpu_format const*,int ) ;
 int FUNC_3 (int *,size_t) ;
 struct dpu_format* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*) ;
 struct dpu_plane* FUNC_7 (struct drm_plane*) ;
 int FUNC_8 (scalar_t__,int ,int ,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_9(struct drm_plane *VAR_4,
  struct drm_framebuffer *VAR_5)
{
 struct dpu_plane *VAR_6 = FUNC_7(VAR_4);
 const struct dpu_format *VAR_7 = ((void*)0);
 u64 VAR_8;
 u32 VAR_9 = 0, VAR_10;

 if (!VAR_6->is_rt_pipe) {
  VAR_10 = VAR_2;
 } else {
  VAR_7 = FUNC_4(
    VAR_5->format->format,
    VAR_5->modifier);
  VAR_9 = FUNC_2(VAR_4, VAR_7,
    FUNC_5(&VAR_6->pipe_cfg.src_rect));

  if (VAR_7 && FUNC_1(VAR_7))
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_1;
 }

 VAR_8 = FUNC_3(
   &VAR_6->catalog->perf.qos_lut_tbl[VAR_10], VAR_9);

 VAR_6->pipe_qos_cfg.creq_lut = VAR_8;

 FUNC_8(VAR_6->pipe - VAR_3,
   (VAR_7) ? VAR_7->base.pixel_format : 0,
   VAR_6->is_rt_pipe, VAR_9, VAR_8, VAR_10);

 FUNC_0("plane%u: pnum:%d fmt: %4.4s rt:%d fl:%u lut:0x%llx\n",
   VAR_4->base.id,
   VAR_6->pipe - VAR_3,
   VAR_7 ? (char *)&VAR_7->base.pixel_format : ((void*)0),
   VAR_6->is_rt_pipe, VAR_9, VAR_8);

 VAR_6->pipe_hw->ops.setup_creq_lut(VAR_6->pipe_hw, &VAR_6->pipe_qos_cfg);
}
