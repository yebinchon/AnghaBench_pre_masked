
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct nvif_ioctl_nop_v0 {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_object*,char*,int ) ;
 int FUNC_1 (int,void**,int *,struct nvif_ioctl_nop_v0,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_client *VAR_2,
        struct nvkm_object *VAR_3, void *VAR_4, u32 VAR_5)
{
 union {
  struct nvif_ioctl_nop_v0 v0;
 } *VAR_6 = VAR_4;
 int VAR_7 = -VAR_0;

 FUNC_0(VAR_3, "nop size %d\n", VAR_5);
 if (!(VAR_7 = FUNC_1(VAR_7, &VAR_4, &VAR_5, VAR_6->v0, 0, 0, 0))) {
  FUNC_0(VAR_3, "nop vers %lld\n", VAR_6->v0.version);
  VAR_6->v0.version = VAR_1;
 }

 return VAR_7;
}
