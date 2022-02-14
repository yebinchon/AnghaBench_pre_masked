
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_wb_job {int sg_tables; } ;
struct rcar_du_crtc {int vsp; } ;
struct drm_writeback_job {struct rcar_du_wb_job* priv; int fb; } ;
struct drm_writeback_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rcar_du_wb_job*) ;
 struct rcar_du_wb_job* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct rcar_du_crtc* FUNC_3 (struct drm_writeback_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_writeback_connector *VAR_2,
      struct drm_writeback_job *VAR_3)
{
 struct rcar_du_crtc *VAR_4 = FUNC_3(VAR_2);
 struct rcar_du_wb_job *VAR_5;
 int VAR_6;

 if (!VAR_3->fb)
  return 0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_6 = FUNC_2(VAR_4->vsp, VAR_3->fb, VAR_5->sg_tables);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5);
  return VAR_6;
 }

 VAR_3->priv = VAR_5;
 return 0;
}
