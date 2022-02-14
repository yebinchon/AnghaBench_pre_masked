
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_aux {int dummy; } ;
struct TYPE_2__ {int base; } ;
struct nouveau_encoder {TYPE_1__ base; int (* update ) (struct nouveau_encoder*,int ,int *,int ,int ) ;struct nvkm_i2c_aux* aux; int * crtc; } ;
struct nouveau_crtc {int index; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_crtc* FUNC_0 (int *) ;
 struct nouveau_encoder* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,struct nouveau_crtc*) ;
 int FUNC_3 (int *,struct nouveau_crtc*) ;
 int FUNC_4 (struct nouveau_encoder*) ;
 int FUNC_5 (struct nvkm_i2c_aux*,int ,int *,int) ;
 int FUNC_6 (struct nvkm_i2c_aux*,int ,int *,int) ;
 int FUNC_7 (struct nouveau_encoder*,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct drm_encoder *VAR_3)
{
 struct nouveau_encoder *VAR_4 = FUNC_1(VAR_3);
 struct nouveau_crtc *VAR_5 = FUNC_0(VAR_4->crtc);

 VAR_4->crtc = ((void*)0);

 if (VAR_5) {
  struct nvkm_i2c_aux *VAR_6 = VAR_4->aux;
  u8 VAR_7;

  if (VAR_6) {
   int VAR_8 = FUNC_5(VAR_6, VAR_0, &VAR_7, 1);
   if (VAR_8 == 0) {
    VAR_7 &= ~VAR_2;
    VAR_7 |= VAR_1;
    FUNC_6(VAR_6, VAR_0, &VAR_7, 1);
   }
  }

  VAR_4->update(VAR_4, VAR_5->index, ((void*)0), 0, 0);
  FUNC_2(VAR_3, VAR_5);
  FUNC_3(&VAR_4->base.base, VAR_5);
  FUNC_4(VAR_4);
 }
}
