
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_notify {int size; int types; int index; } ;
struct nvif_notify_uevent_req {int dummy; } ;
struct nvif_notify_uevent_rep {int dummy; } ;
struct TYPE_2__ {int user; } ;
struct nv50_disp_chan {TYPE_1__ chid; } ;


 int VAR_0 ;
 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (int,void**,int *,struct nvif_notify_uevent_req) ;

int
FUNC_2(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
      struct nvkm_notify *VAR_4)
{
 struct nv50_disp_chan *VAR_5 = FUNC_0(VAR_1);
 union {
  struct nvif_notify_uevent_req none;
 } *VAR_6 = VAR_2;
 int VAR_7 = -VAR_0;

 if (!(VAR_7 = FUNC_1(VAR_7, &VAR_2, &VAR_3, VAR_6->none))) {
  VAR_4->size = sizeof(struct nvif_notify_uevent_rep);
  VAR_4->types = 1;
  VAR_4->index = VAR_5->chid.user;
  return 0;
 }

 return VAR_7;
}
