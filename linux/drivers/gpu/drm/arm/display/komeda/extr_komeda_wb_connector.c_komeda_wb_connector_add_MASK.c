
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int possible_crtcs; } ;
struct drm_writeback_connector {int base; TYPE_2__ encoder; } ;
struct komeda_wb_connector {TYPE_3__* wb_layer; struct drm_writeback_connector base; } ;
struct TYPE_8__ {struct komeda_dev* dev_private; } ;
struct komeda_kms_dev {TYPE_4__ base; } ;
struct komeda_dev {int fmt_tbl; } ;
struct komeda_crtc {struct komeda_wb_connector* wb_conn; int base; TYPE_1__* master; } ;
struct TYPE_7__ {int layer_type; } ;
struct TYPE_5__ {TYPE_3__* wb_layer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,struct drm_writeback_connector*,int *,int *,int *,int ) ;
 int FUNC_4 (struct komeda_wb_connector*) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct komeda_wb_connector* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct komeda_kms_dev *VAR_5,
       struct komeda_crtc *VAR_6)
{
 struct komeda_dev *VAR_7 = VAR_5->base.dev_private;
 struct komeda_wb_connector *VAR_8;
 struct drm_writeback_connector *VAR_9;
 u32 *VAR_10, VAR_11 = 0;
 int VAR_12;

 if (!VAR_6->master->wb_layer)
  return 0;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->wb_layer = VAR_6->master->wb_layer;

 VAR_9 = &VAR_8->base;
 VAR_9->encoder.possible_crtcs = FUNC_0(FUNC_2(&VAR_6->base));

 VAR_10 = FUNC_5(&VAR_7->fmt_tbl,
            VAR_8->wb_layer->layer_type,
            &VAR_11);

 VAR_12 = FUNC_3(&VAR_5->base, VAR_9,
        &VAR_3,
        &VAR_4,
        VAR_10, VAR_11);
 FUNC_6(VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_8);
  return VAR_12;
 }

 FUNC_1(&VAR_9->base, &VAR_2);

 VAR_6->wb_conn = VAR_8;

 return 0;
}
