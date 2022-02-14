
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vsp1_du_writeback_config {scalar_t__* mem; int pitch; int pixelformat; } ;
struct rcar_du_wb_job {TYPE_4__* sg_tables; } ;
struct rcar_du_wb_conn_state {TYPE_3__* format; } ;
struct TYPE_6__ {struct drm_connector_state* state; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct rcar_du_crtc {TYPE_5__ writeback; } ;
struct drm_framebuffer {scalar_t__* offsets; int * pitches; } ;
struct drm_connector_state {TYPE_2__* writeback_job; } ;
struct TYPE_9__ {int sgl; } ;
struct TYPE_8__ {unsigned int planes; int v4l2; } ;
struct TYPE_7__ {struct rcar_du_wb_job* priv; struct drm_framebuffer* fb; } ;


 int FUNC_0 (TYPE_5__*,struct drm_connector_state*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct rcar_du_wb_conn_state* FUNC_2 (struct drm_connector_state*) ;

void FUNC_3(struct rcar_du_crtc *VAR_0,
        struct vsp1_du_writeback_config *VAR_1)
{
 struct rcar_du_wb_conn_state *VAR_2;
 struct drm_connector_state *VAR_3;
 struct rcar_du_wb_job *VAR_4;
 struct drm_framebuffer *VAR_5;
 unsigned int VAR_6;

 VAR_3 = VAR_0->writeback.base.state;
 if (!VAR_3 || !VAR_3->writeback_job)
  return;

 VAR_5 = VAR_3->writeback_job->fb;
 VAR_4 = VAR_3->writeback_job->priv;
 VAR_2 = FUNC_2(VAR_3);

 VAR_1->pixelformat = VAR_2->format->v4l2;
 VAR_1->pitch = VAR_5->pitches[0];

 for (VAR_6 = 0; VAR_6 < VAR_2->format->planes; ++VAR_6)
  VAR_1->mem[VAR_6] = FUNC_1(VAR_4->sg_tables[VAR_6].sgl)
       + VAR_5->offsets[VAR_6];

 FUNC_0(&VAR_0->writeback, VAR_3);
}
