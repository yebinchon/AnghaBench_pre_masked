
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvif_ioctl_v0 {int type; unsigned long long token; void* owner; void* object; } ;
struct nouveau_abi16_chan {TYPE_1__* chan; } ;
struct TYPE_4__ {int object; } ;
struct nouveau_abi16 {TYPE_2__ device; } ;
struct drm_file {int dummy; } ;
struct TYPE_3__ {int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* VAR_4 ;

 struct nouveau_abi16* FUNC_0 (struct drm_file*) ;
 struct nouveau_abi16_chan* FUNC_1 (struct nouveau_abi16*,unsigned long long) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int,void**,int *,struct nvif_ioctl_v0,int ,int ,int) ;

int
FUNC_4(struct drm_file *VAR_5, void *VAR_6, u32 VAR_7)
{
 union {
  struct nvif_ioctl_v0 v0;
 } *VAR_8 = VAR_6;
 struct nouveau_abi16_chan *VAR_9;
 struct nouveau_abi16 *VAR_10;
 int VAR_11 = -VAR_3;

 if (!(VAR_11 = FUNC_3(VAR_11, &VAR_6, &VAR_7, VAR_8->v0, 0, 0, 1))) {
  switch (VAR_8->v0.type) {
  case 129:
  case 130:
  case 128:
   break;
  default:
   return -VAR_0;
  }
 } else
  return VAR_11;

 if (!(VAR_10 = FUNC_0(VAR_5)))
  return -VAR_2;

 if (VAR_8->v0.token != ~0ULL) {
  if (!(VAR_9 = FUNC_1(VAR_10, VAR_8->v0.token)))
   return -VAR_1;
  VAR_8->v0.object = FUNC_2(&VAR_9->chan->user);
  VAR_8->v0.owner = VAR_4;
  return 0;
 }

 VAR_8->v0.object = FUNC_2(&VAR_10->device.object);
 VAR_8->v0.owner = VAR_4;
 return 0;
}
