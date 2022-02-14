
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


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_i2c_bus {int i2c; } ;
struct nvkm_i2c_aux {int i2c; } ;
struct nvkm_i2c {int dummy; } ;
struct nvkm_bios {int dummy; } ;
struct nv50_disp {TYPE_3__* disp; } ;
struct TYPE_13__ {int mstm; } ;
struct nouveau_encoder {int * i2c; TYPE_6__ dp; struct nvkm_i2c_aux* aux; int update; struct dcb_output* dcb; } ;
struct TYPE_8__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_12__ {TYPE_4__ base; } ;
struct TYPE_14__ {int ddc; } ;
struct nouveau_connector {scalar_t__ type; TYPE_5__ base; TYPE_7__ aux; } ;
struct drm_encoder {int dev; scalar_t__ possible_clones; int possible_crtcs; } ;
struct drm_connector {int dev; } ;
struct dcb_output {int type; int i2c_index; int hashm; int hasht; int heads; } ;
struct TYPE_9__ {scalar_t__ oclass; } ;
struct TYPE_10__ {TYPE_2__ object; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (int ,struct drm_encoder*,int *,int,char*,int ,int ) ;
 struct nouveau_encoder* FUNC_3 (int,int ) ;
 struct nouveau_connector* FUNC_4 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_5 (int ) ;
 struct nv50_disp* FUNC_6 (int ) ;
 int FUNC_7 (struct nouveau_encoder*,TYPE_7__*,int,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_9 (struct nvkm_bios*,scalar_t__) ;
 struct nvkm_i2c_aux* FUNC_10 (struct nvkm_i2c*,int ) ;
 struct nvkm_i2c_bus* FUNC_11 (struct nvkm_i2c*,int ) ;
 struct nvkm_bios* FUNC_12 (int *) ;
 struct nvkm_i2c* FUNC_13 (int *) ;
 struct drm_encoder* FUNC_14 (struct nouveau_encoder*) ;

__attribute__((used)) static int
FUNC_15(struct drm_connector *VAR_9, struct dcb_output *VAR_10)
{
 struct nouveau_connector *VAR_11 = FUNC_4(VAR_9);
 struct nouveau_drm *VAR_12 = FUNC_5(VAR_9->dev);
 struct nvkm_bios *VAR_13 = FUNC_12(&VAR_12->client.device);
 struct nvkm_i2c *VAR_14 = FUNC_13(&VAR_12->client.device);
 struct nouveau_encoder *VAR_15;
 struct drm_encoder *VAR_16;
 u8 VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21;
 int VAR_22, VAR_23;

 switch (VAR_10->type) {
 case 129: VAR_22 = VAR_1; break;
 case 128:
 case 130:
 default:
  VAR_22 = VAR_2;
  break;
 }

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_3;
 VAR_15->dcb = VAR_10;
 VAR_15->update = VAR_8;

 VAR_16 = FUNC_14(VAR_15);
 VAR_16->possible_crtcs = VAR_10->heads;
 VAR_16->possible_clones = 0;
 FUNC_2(VAR_9->dev, VAR_16, &VAR_6, VAR_22,
    "sor-%04x-%04x", VAR_10->hasht, VAR_10->hashm);
 FUNC_1(VAR_16, &VAR_7);

 FUNC_0(VAR_9, VAR_16);

 if (VAR_10->type == 130) {
  struct nv50_disp *VAR_24 = FUNC_6(VAR_16->dev);
  struct nvkm_i2c_aux *VAR_25 =
   FUNC_10(VAR_14, VAR_10->i2c_index);
  if (VAR_25) {
   if (VAR_24->disp->object.oclass < VAR_4) {




    VAR_15->i2c = &VAR_25->i2c;
   } else {
    VAR_15->i2c = &VAR_11->aux.ddc;
   }
   VAR_15->aux = VAR_25;
  }

  if (VAR_11->type != VAR_0 &&
      (VAR_21 = FUNC_8(VAR_13, &VAR_17, &VAR_18, &VAR_19, &VAR_20)) &&
      VAR_17 >= 0x40 && (FUNC_9(VAR_13, VAR_21 + 0x08) & 0x04)) {
   VAR_23 = FUNC_7(VAR_15, &VAR_11->aux, 16,
         VAR_11->base.base.id,
         &VAR_15->dp.mstm);
   if (VAR_23)
    return VAR_23;
  }
 } else {
  struct nvkm_i2c_bus *VAR_26 =
   FUNC_11(VAR_14, VAR_10->i2c_index);
  if (VAR_26)
   VAR_15->i2c = &VAR_26->i2c;
 }

 return 0;
}
