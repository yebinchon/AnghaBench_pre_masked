
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct nv50_mstm {TYPE_12__** msto; TYPE_3__* outp; } ;
struct TYPE_19__ {int base; TYPE_4__* funcs; } ;
struct nv50_mstc {TYPE_6__ connector; struct drm_dp_mst_port* port; struct nv50_mstm* mstm; } ;
struct drm_dp_mst_port {int dummy; } ;
struct TYPE_18__ {int tile_property; int path_property; } ;
struct drm_device {TYPE_5__ mode_config; } ;
struct TYPE_17__ {int (* reset ) (TYPE_6__*) ;} ;
struct TYPE_14__ {struct drm_device* dev; } ;
struct TYPE_15__ {TYPE_1__ base; } ;
struct TYPE_16__ {TYPE_2__ base; } ;
struct TYPE_13__ {int encoder; } ;


 int FUNC_0 (TYPE_12__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (struct drm_device*,TYPE_6__*,int *,int ) ;
 int FUNC_4 (TYPE_6__*,char const*) ;
 int FUNC_5 (struct drm_dp_mst_port*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct nv50_mstc*) ;
 struct nv50_mstc* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_11(struct nv50_mstm *VAR_5, struct drm_dp_mst_port *VAR_6,
       const char *VAR_7, struct nv50_mstc **VAR_8)
{
 struct drm_device *VAR_9 = VAR_5->outp->base.base.dev;
 struct nv50_mstc *VAR_10;
 int VAR_11, VAR_12;

 if (!(VAR_10 = *VAR_8 = FUNC_8(sizeof(*VAR_10), VAR_2)))
  return -VAR_1;
 VAR_10->mstm = VAR_5;
 VAR_10->port = VAR_6;

 VAR_11 = FUNC_3(VAR_9, &VAR_10->connector, &VAR_3,
     VAR_0);
 if (VAR_11) {
  FUNC_7(*VAR_8);
  *VAR_8 = ((void*)0);
  return VAR_11;
 }

 FUNC_2(&VAR_10->connector, &VAR_4);

 VAR_10->connector.funcs->reset(&VAR_10->connector);
 FUNC_9(&VAR_10->connector);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5->msto) && VAR_5->msto[VAR_12]; VAR_12++)
  FUNC_1(&VAR_10->connector, &VAR_5->msto[VAR_12]->encoder);

 FUNC_6(&VAR_10->connector.base, VAR_9->mode_config.path_property, 0);
 FUNC_6(&VAR_10->connector.base, VAR_9->mode_config.tile_property, 0);
 FUNC_4(&VAR_10->connector, VAR_7);
 FUNC_5(VAR_6);
 return 0;
}
