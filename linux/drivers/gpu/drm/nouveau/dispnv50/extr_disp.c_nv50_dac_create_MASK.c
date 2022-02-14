
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_bus {int i2c; } ;
struct nvkm_i2c {int dummy; } ;
struct nouveau_encoder {int * i2c; struct dcb_output* dcb; } ;
struct TYPE_2__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_encoder {scalar_t__ possible_clones; int possible_crtcs; } ;
struct drm_connector {int dev; } ;
struct dcb_output {int hashm; int hasht; int heads; int i2c_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (int ,struct drm_encoder*,int *,int,char*,int ,int ) ;
 struct nouveau_encoder* FUNC_3 (int,int ) ;
 struct nouveau_drm* FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvkm_i2c_bus* FUNC_5 (struct nvkm_i2c*,int ) ;
 struct nvkm_i2c* FUNC_6 (int *) ;
 struct drm_encoder* FUNC_7 (struct nouveau_encoder*) ;

__attribute__((used)) static int
FUNC_8(struct drm_connector *VAR_5, struct dcb_output *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_4(VAR_5->dev);
 struct nvkm_i2c *VAR_8 = FUNC_6(&VAR_7->client.device);
 struct nvkm_i2c_bus *VAR_9;
 struct nouveau_encoder *VAR_10;
 struct drm_encoder *VAR_11;
 int VAR_12 = VAR_0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_10->dcb = VAR_6;

 VAR_9 = FUNC_5(VAR_8, VAR_6->i2c_index);
 if (VAR_9)
  VAR_10->i2c = &VAR_9->i2c;

 VAR_11 = FUNC_7(VAR_10);
 VAR_11->possible_crtcs = VAR_6->heads;
 VAR_11->possible_clones = 0;
 FUNC_2(VAR_5->dev, VAR_11, &VAR_3, VAR_12,
    "dac-%04x-%04x", VAR_6->hasht, VAR_6->hashm);
 FUNC_1(VAR_11, &VAR_4);

 FUNC_0(VAR_5, VAR_11);
 return 0;
}
