
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct nvkm_i2c_bus {struct i2c_adapter i2c; } ;
struct nvkm_i2c_aux {struct i2c_adapter i2c; } ;
struct nvkm_i2c {int dummy; } ;
struct nouveau_encoder {struct nvkm_i2c_aux* aux; struct i2c_adapter* i2c; struct dcb_output* dcb; } ;
struct TYPE_2__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_encoder {scalar_t__ possible_clones; int possible_crtcs; } ;
struct drm_connector {int dev; } ;
struct dcb_output {int type; int hashm; int hasht; int heads; int extdev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (int ,struct drm_encoder*,int *,int,char*,int ,int ) ;
 struct nouveau_encoder* FUNC_5 (int,int ) ;
 struct nouveau_drm* FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct nvkm_i2c_aux* FUNC_7 (struct nvkm_i2c*,int ) ;
 struct nvkm_i2c_bus* FUNC_8 (struct nvkm_i2c*,int ) ;
 struct nvkm_i2c* FUNC_9 (int *) ;
 struct drm_encoder* FUNC_10 (struct nouveau_encoder*) ;

__attribute__((used)) static int
FUNC_11(struct drm_connector *VAR_6, struct dcb_output *VAR_7)
{
 struct nouveau_drm *VAR_8 = FUNC_6(VAR_6->dev);
 struct nvkm_i2c *VAR_9 = FUNC_9(&VAR_8->client.device);
 struct nvkm_i2c_bus *VAR_10 = ((void*)0);
 struct nvkm_i2c_aux *VAR_11 = ((void*)0);
 struct i2c_adapter *VAR_12;
 struct nouveau_encoder *VAR_13;
 struct drm_encoder *VAR_14;
 int VAR_15;

 switch (VAR_7->type) {
 case 128:
  VAR_10 = FUNC_8(VAR_9, FUNC_1(VAR_7->extdev));
  VAR_12 = VAR_10 ? &VAR_10->i2c : ((void*)0);
  VAR_15 = VAR_0;
  break;
 case 129:
  VAR_11 = FUNC_7(VAR_9, FUNC_0(VAR_7->extdev));
  VAR_12 = VAR_11 ? &VAR_11->i2c : ((void*)0);
  VAR_15 = VAR_0;
  break;
 default:
  return -VAR_1;
 }

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;
 VAR_13->dcb = VAR_7;
 VAR_13->i2c = VAR_12;
 VAR_13->aux = VAR_11;

 VAR_14 = FUNC_10(VAR_13);
 VAR_14->possible_crtcs = VAR_7->heads;
 VAR_14->possible_clones = 0;
 FUNC_4(VAR_6->dev, VAR_14, &VAR_4, VAR_15,
    "pior-%04x-%04x", VAR_7->hasht, VAR_7->hashm);
 FUNC_3(VAR_14, &VAR_5);

 FUNC_2(VAR_6, VAR_14);
 return 0;
}
