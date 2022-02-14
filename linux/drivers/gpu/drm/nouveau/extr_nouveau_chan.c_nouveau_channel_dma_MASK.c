
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvif_device {int object; } ;
struct nv03_channel_dma_v0 {int chid; int offset; int pushbuf; scalar_t__ version; } ;
struct nouveau_drm {int dummy; } ;
struct TYPE_2__ {int addr; int ctxdma; } ;
struct nouveau_channel {int chid; int user; TYPE_1__ push; } ;
typedef int args ;






 int FUNC_0 (struct nouveau_channel**) ;
 int FUNC_1 (struct nouveau_drm*,struct nvif_device*,int,struct nouveau_channel**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,struct nv03_channel_dma_v0*,int,int *) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_drm *VAR_0, struct nvif_device *VAR_1,
      struct nouveau_channel **VAR_2)
{
 static const u16 VAR_3[] = { 128,
     129,
     130,
     131,
     0 };
 const u16 *VAR_4 = VAR_3;
 struct nv03_channel_dma_v0 VAR_5;
 struct nouveau_channel *VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_0, VAR_1, 0x10000, &VAR_6);
 *VAR_2 = VAR_6;
 if (VAR_7)
  return VAR_7;


 VAR_5.version = 0;
 VAR_5.pushbuf = FUNC_2(&VAR_6->push.ctxdma);
 VAR_5.offset = VAR_6->push.addr;

 do {
  VAR_7 = FUNC_3(&VAR_1->object, 0, *VAR_4++,
           &VAR_5, sizeof(VAR_5), &VAR_6->user);
  if (VAR_7 == 0) {
   VAR_6->chid = VAR_5.chid;
   return VAR_7;
  }
 } while (VAR_7 && *VAR_4);

 FUNC_0(VAR_2);
 return VAR_7;
}
