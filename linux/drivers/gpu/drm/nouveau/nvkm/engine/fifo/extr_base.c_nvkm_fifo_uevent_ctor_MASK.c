
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_notify {int size; int types; scalar_t__ index; } ;
struct nvif_notify_uevent_req {int dummy; } ;
struct nvif_notify_uevent_rep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,void**,int *,struct nvif_notify_uevent_req) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
        struct nvkm_notify *VAR_4)
{
 union {
  struct nvif_notify_uevent_req none;
 } *VAR_5 = VAR_2;
 int VAR_6 = -VAR_0;

 if (!(VAR_6 = FUNC_0(VAR_6, &VAR_2, &VAR_3, VAR_5->none))) {
  VAR_4->size = sizeof(struct nvif_notify_uevent_rep);
  VAR_4->types = 1;
  VAR_4->index = 0;
 }

 return VAR_6;
}
