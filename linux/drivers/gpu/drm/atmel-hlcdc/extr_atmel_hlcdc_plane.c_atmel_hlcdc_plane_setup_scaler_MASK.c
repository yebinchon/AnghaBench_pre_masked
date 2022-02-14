
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct atmel_hlcdc_plane_state {int crtc_w; int src_w; int crtc_h; int src_h; } ;
struct TYPE_6__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct atmel_hlcdc_plane {TYPE_3__ layer; } ;
struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {int scaler_config; TYPE_1__ phicoeffs; } ;
struct atmel_hlcdc_layer_desc {TYPE_2__ layout; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct atmel_hlcdc_plane*,int ,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_5(struct atmel_hlcdc_plane *VAR_7,
        struct atmel_hlcdc_plane_state *VAR_8)
{
 const struct atmel_hlcdc_layer_desc *VAR_9 = VAR_7->layer.desc;
 u32 VAR_10, VAR_11;

 if (!VAR_9->layout.scaler_config)
  return;

 if (VAR_8->crtc_w == VAR_8->src_w && VAR_8->crtc_h == VAR_8->src_h) {
  FUNC_2(&VAR_7->layer,
         VAR_9->layout.scaler_config, 0);
  return;
 }

 if (VAR_9->layout.phicoeffs.x) {
  VAR_10 = FUNC_3(VAR_8->src_w,
       VAR_8->crtc_w,
       VAR_1);

  VAR_11 = FUNC_3(VAR_8->src_h,
       VAR_8->crtc_h,
       VAR_2);

  FUNC_4(VAR_7,
    VAR_8->crtc_w < VAR_8->src_w ?
    VAR_3 :
    VAR_5,
    FUNC_0(VAR_5),
    VAR_9->layout.phicoeffs.x);

  FUNC_4(VAR_7,
    VAR_8->crtc_h < VAR_8->src_h ?
    VAR_4 :
    VAR_6,
    FUNC_0(VAR_6),
    VAR_9->layout.phicoeffs.y);
 } else {
  VAR_10 = (1024 * VAR_8->src_w) / VAR_8->crtc_w;
  VAR_11 = (1024 * VAR_8->src_h) / VAR_8->crtc_h;
 }

 FUNC_2(&VAR_7->layer, VAR_9->layout.scaler_config,
        VAR_0 |
        FUNC_1(VAR_10,
             VAR_11));
}
