
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_event {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct nvif_ioctl_ntfy_new_v0 {int index; int event; int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_1 (int,void**,int *,struct nvif_ioctl_ntfy_new_v0,int ,int ,int) ;
 int FUNC_2 (struct nvkm_object*,struct nvkm_event*,void*,int ) ;
 int FUNC_3 (struct nvkm_object*,int ,struct nvkm_event**) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_client *VAR_1,
      struct nvkm_object *VAR_2, void *VAR_3, u32 VAR_4)
{
 union {
  struct nvif_ioctl_ntfy_new_v0 v0;
 } *VAR_5 = VAR_3;
 struct nvkm_event *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_0(VAR_2, "ntfy new size %d\n", VAR_4);
 if (!(VAR_7 = FUNC_1(VAR_7, &VAR_3, &VAR_4, VAR_5->v0, 0, 0, 1))) {
  FUNC_0(VAR_2, "ntfy new vers %d event %02x\n",
      VAR_5->v0.version, VAR_5->v0.event);
  VAR_7 = FUNC_3(VAR_2, VAR_5->v0.event, &VAR_6);
  if (VAR_7 == 0) {
   VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4);
   if (VAR_7 >= 0) {
    VAR_5->v0.index = VAR_7;
    VAR_7 = 0;
   }
  }
 }

 return VAR_7;
}
