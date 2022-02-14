
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_wb_job {int sg_tables; } ;
struct rcar_du_crtc {int vsp; } ;
struct drm_writeback_job {int fb; struct rcar_du_wb_job* priv; } ;
struct drm_writeback_connector {int dummy; } ;


 int FUNC_0 (struct rcar_du_wb_job*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct rcar_du_crtc* FUNC_2 (struct drm_writeback_connector*) ;

__attribute__((used)) static void FUNC_3(struct drm_writeback_connector *VAR_0,
       struct drm_writeback_job *VAR_1)
{
 struct rcar_du_crtc *VAR_2 = FUNC_2(VAR_0);
 struct rcar_du_wb_job *VAR_3 = VAR_1->priv;

 if (!VAR_1->fb)
  return;

 FUNC_1(VAR_2->vsp, VAR_1->fb, VAR_3->sg_tables);
 FUNC_0(VAR_3);
}
