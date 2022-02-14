
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct drm_connector_state* state; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct komeda_wb_connector {TYPE_5__ base; } ;
struct komeda_pipeline {int id; } ;
struct komeda_dev {TYPE_4__* funcs; } ;
struct komeda_crtc_state {int active_pipes; int affected_pipes; } ;
struct TYPE_7__ {TYPE_1__* dev; } ;
struct komeda_crtc {struct komeda_wb_connector* wb_conn; struct komeda_pipeline* slave; struct komeda_pipeline* master; TYPE_2__ base; } ;
struct drm_crtc_state {int state; } ;
struct drm_crtc {int state; } ;
struct drm_connector_state {scalar_t__ writeback_job; } ;
struct TYPE_9__ {int (* flush ) (struct komeda_dev*,int ,int ) ;} ;
struct TYPE_6__ {struct komeda_dev* dev_private; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (TYPE_5__*,struct drm_connector_state*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct komeda_pipeline*,int ) ;
 int FUNC_5 (struct komeda_dev*,int ,int ) ;
 struct komeda_crtc* FUNC_6 (struct drm_crtc*) ;
 struct komeda_crtc_state* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct komeda_crtc *VAR_2 = FUNC_6(VAR_0);
 struct komeda_crtc_state *VAR_3 = FUNC_7(VAR_0->state);
 struct komeda_dev *VAR_4 = VAR_2->base.dev->dev_private;
 struct komeda_pipeline *VAR_5 = VAR_2->master;
 struct komeda_pipeline *VAR_6 = VAR_2->slave;
 struct komeda_wb_connector *VAR_7 = VAR_2->wb_conn;
 struct drm_connector_state *VAR_8;

 FUNC_0("CRTC%d_FLUSH: active_pipes: 0x%x, affected: 0x%x.\n",
    FUNC_1(VAR_0),
    VAR_3->active_pipes, VAR_3->affected_pipes);


 if (FUNC_3(VAR_5->id, VAR_3->affected_pipes))
  FUNC_4(VAR_5, VAR_1->state);

 if (VAR_6 && FUNC_3(VAR_6->id, VAR_3->affected_pipes))
  FUNC_4(VAR_6, VAR_1->state);

 VAR_8 = VAR_7 ? VAR_7->base.base.state : ((void*)0);
 if (VAR_8 && VAR_8->writeback_job)
  FUNC_2(&VAR_7->base, VAR_8);


 VAR_4->funcs->flush(VAR_4, VAR_5->id, VAR_3->active_pipes);
}
