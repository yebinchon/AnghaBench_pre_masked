
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int view; } ;
struct TYPE_13__ {int iW; int iH; int oW; int oH; } ;
struct drm_display_mode {int vdisplay; int flags; int hdisplay; scalar_t__ vtotal; } ;
struct TYPE_9__ {struct drm_display_mode mode; struct drm_display_mode adjusted_mode; } ;
struct nv50_head_atom {TYPE_7__ set; TYPE_6__ view; TYPE_2__ state; } ;
struct TYPE_11__ {scalar_t__ mode; int hborder; int vborder; } ;
struct TYPE_12__ {int mode; TYPE_4__ underscan; int full; } ;
struct TYPE_8__ {struct drm_connector* connector; } ;
struct nouveau_conn_atom {TYPE_5__ scaler; TYPE_1__ state; } ;
struct edid {int dummy; } ;
struct drm_connector {TYPE_3__* edid_blob_ptr; } ;
struct TYPE_10__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct edid*) ;
 int FUNC_1 (struct drm_display_mode*,int*,int*) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct nv50_head_atom *VAR_6,
       struct nv50_head_atom *VAR_7,
       struct nouveau_conn_atom *VAR_8)
{
 struct drm_connector *VAR_9 = VAR_8->state.connector;
 struct drm_display_mode *VAR_10 = &VAR_7->state.adjusted_mode;
 struct drm_display_mode *VAR_11 = &VAR_7->state.mode;
 int VAR_12 = VAR_8->scaler.mode;
 struct edid *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (VAR_9->edid_blob_ptr)
  VAR_13 = (struct edid *)VAR_9->edid_blob_ptr->data;
 else
  VAR_13 = ((void*)0);

 if (!VAR_8->scaler.full) {
  if (VAR_12 == VAR_3)
   VAR_10 = VAR_11;
 } else {

  VAR_12 = VAR_2;
 }




 VAR_14 = VAR_11->vdisplay;
 if ((VAR_11->flags & VAR_1) == VAR_0)
  VAR_14 += VAR_11->vtotal;
 VAR_7->view.iW = VAR_11->hdisplay;
 VAR_7->view.iH = VAR_14;

 FUNC_1(VAR_10, &VAR_15, &VAR_16);
 VAR_7->view.oW = VAR_15;
 VAR_7->view.oH = VAR_16;





 if ((VAR_8->scaler.underscan.mode == VAR_5 ||
     (VAR_8->scaler.underscan.mode == VAR_4 &&
      FUNC_0(VAR_13)))) {
  u32 VAR_17 = VAR_8->scaler.underscan.hborder;
  u32 VAR_18 = VAR_8->scaler.underscan.vborder;
  u32 VAR_19 = (VAR_7->view.oH << 19) / VAR_7->view.oW;

  if (VAR_17) {
   VAR_7->view.oW -= (VAR_17 * 2);
   if (VAR_18) VAR_7->view.oH -= (VAR_18 * 2);
   else VAR_7->view.oH = ((VAR_7->view.oW * VAR_19) + (VAR_19 / 2)) >> 19;
  } else {
   VAR_7->view.oW -= (VAR_7->view.oW >> 4) + 32;
   if (VAR_18) VAR_7->view.oH -= (VAR_18 * 2);
   else VAR_7->view.oH = ((VAR_7->view.oW * VAR_19) + (VAR_19 / 2)) >> 19;
  }
 }




 switch (VAR_12) {
 case 128:



  VAR_7->view.oW = FUNC_2(VAR_7->view.iW, VAR_7->view.oW);
  VAR_7->view.oH = FUNC_2(VAR_7->view.iH, VAR_7->view.oH);
  break;
 case 129:
  if (VAR_7->view.oW * VAR_7->view.iH > VAR_7->view.iW * VAR_7->view.oH) {

   u32 VAR_20 = (VAR_7->view.iW << 19) / VAR_7->view.iH;
   VAR_7->view.oW = ((VAR_7->view.oH * VAR_20) + (VAR_20 / 2)) >> 19;
  } else {

   u32 VAR_21 = (VAR_7->view.iH << 19) / VAR_7->view.iW;
   VAR_7->view.oH = ((VAR_7->view.oW * VAR_21) + (VAR_21 / 2)) >> 19;
  }
  break;
 default:
  break;
 }

 VAR_7->set.view = 1;
}
