
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


struct msm_drm_private {int num_crtcs; int num_planes; int num_connectors; int num_encoders; TYPE_6__** encoders; TYPE_7__** connectors; TYPE_8__** planes; TYPE_9__** crtcs; } ;
struct dpu_kms {TYPE_1__* dev; } ;
struct TYPE_18__ {TYPE_2__* funcs; } ;
struct TYPE_17__ {TYPE_3__* funcs; } ;
struct TYPE_16__ {TYPE_4__* funcs; } ;
struct TYPE_15__ {TYPE_5__* funcs; } ;
struct TYPE_14__ {int (* destroy ) (TYPE_6__*) ;} ;
struct TYPE_13__ {int (* destroy ) (TYPE_7__*) ;} ;
struct TYPE_12__ {int (* destroy ) (TYPE_8__*) ;} ;
struct TYPE_11__ {int (* destroy ) (TYPE_9__*) ;} ;
struct TYPE_10__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_5(struct dpu_kms *VAR_0)
{
 struct msm_drm_private *VAR_1;
 int VAR_2;

 if (!VAR_0) {
  FUNC_0("invalid dpu_kms\n");
  return;
 } else if (!VAR_0->dev) {
  FUNC_0("invalid dev\n");
  return;
 } else if (!VAR_0->dev->dev_private) {
  FUNC_0("invalid dev_private\n");
  return;
 }
 VAR_1 = VAR_0->dev->dev_private;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_crtcs; VAR_2++)
  VAR_1->crtcs[VAR_2]->funcs->destroy(VAR_1->crtcs[VAR_2]);
 VAR_1->num_crtcs = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_planes; VAR_2++)
  VAR_1->planes[VAR_2]->funcs->destroy(VAR_1->planes[VAR_2]);
 VAR_1->num_planes = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_connectors; VAR_2++)
  VAR_1->connectors[VAR_2]->funcs->destroy(VAR_1->connectors[VAR_2]);
 VAR_1->num_connectors = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_encoders; VAR_2++)
  VAR_1->encoders[VAR_2]->funcs->destroy(VAR_1->encoders[VAR_2]);
 VAR_1->num_encoders = 0;
}
