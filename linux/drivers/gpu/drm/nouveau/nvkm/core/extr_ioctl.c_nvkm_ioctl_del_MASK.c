
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct nvif_ioctl_del {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,char*,...) ;
 int FUNC_1 (int,void**,int *,struct nvif_ioctl_del) ;
 int FUNC_2 (struct nvkm_object**) ;
 int FUNC_3 (struct nvkm_object*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_client *VAR_1,
        struct nvkm_object *VAR_2, void *VAR_3, u32 VAR_4)
{
 union {
  struct nvif_ioctl_del none;
 } *VAR_5 = VAR_3;
 int VAR_6 = -VAR_0;

 FUNC_0(VAR_2, "delete size %d\n", VAR_4);
 if (!(VAR_6 = FUNC_1(VAR_6, &VAR_3, &VAR_4, VAR_5->none))) {
  FUNC_0(VAR_2, "delete\n");
  FUNC_3(VAR_2, 0);
  FUNC_2(&VAR_2);
 }

 return VAR_6 ? VAR_6 : 1;
}
