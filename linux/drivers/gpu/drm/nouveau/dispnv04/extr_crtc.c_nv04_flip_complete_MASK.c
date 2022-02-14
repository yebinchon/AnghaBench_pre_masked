
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvif_notify {TYPE_1__* object; } ;
struct nv04_page_flip_state {int pitch; int bpp; TYPE_2__* crtc; scalar_t__ offset; } ;
struct nouveau_drm {int dev; struct nouveau_channel* channel; } ;
struct nouveau_cli {struct nouveau_drm* drm; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_3__ {scalar_t__ client; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct nouveau_channel*,struct nv04_page_flip_state*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

int
FUNC_3(struct nvif_notify *VAR_1)
{
 struct nouveau_cli *VAR_2 = (void *)VAR_1->object->client;
 struct nouveau_drm *VAR_3 = VAR_2->drm;
 struct nouveau_channel *VAR_4 = VAR_3->channel;
 struct nv04_page_flip_state VAR_5;

 if (!FUNC_1(VAR_4, &VAR_5)) {
  FUNC_2(VAR_3->dev, FUNC_0(VAR_5.crtc),
     VAR_5.offset + VAR_5.crtc->y *
     VAR_5.pitch + VAR_5.crtc->x *
     VAR_5.bpp / 8);
 }

 return VAR_0;
}
