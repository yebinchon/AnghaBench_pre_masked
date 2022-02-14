
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct nvif_ioctl_ntfy_put_v0 {int index; int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_1 (int,void**,int *,struct nvif_ioctl_ntfy_put_v0,int ,int ,int) ;
 int FUNC_2 (struct nvkm_client*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_client *VAR_1,
      struct nvkm_object *VAR_2, void *VAR_3, u32 VAR_4)
{
 union {
  struct nvif_ioctl_ntfy_put_v0 v0;
 } *VAR_5 = VAR_3;
 int VAR_6 = -VAR_0;

 FUNC_0(VAR_2, "ntfy put size %d\n", VAR_4);
 if (!(VAR_6 = FUNC_1(VAR_6, &VAR_3, &VAR_4, VAR_5->v0, 0, 0, 0))) {
  FUNC_0(VAR_2, "ntfy put vers %d index %d\n",
      VAR_5->v0.version, VAR_5->v0.index);
  VAR_6 = FUNC_2(VAR_1, VAR_5->v0.index);
 }

 return VAR_6;
}
