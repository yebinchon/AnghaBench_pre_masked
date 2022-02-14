
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int dummy; } ;
struct nvif_ioctl_wr_v0 {int size; int data; int addr; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_1 (int,void**,int *,struct nvif_ioctl_wr_v0,int ,int ,int) ;
 int FUNC_2 (struct nvkm_object*,int ,int ) ;
 int FUNC_3 (struct nvkm_object*,int ,int ) ;
 int FUNC_4 (struct nvkm_object*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_client *VAR_2,
       struct nvkm_object *VAR_3, void *VAR_4, u32 VAR_5)
{
 union {
  struct nvif_ioctl_wr_v0 v0;
 } *VAR_6 = VAR_4;
 int VAR_7 = -VAR_1;

 FUNC_0(VAR_3, "wr size %d\n", VAR_5);
 if (!(VAR_7 = FUNC_1(VAR_7, &VAR_4, &VAR_5, VAR_6->v0, 0, 0, 0))) {
  FUNC_0(VAR_3,
      "wr vers %d size %d addr %016llx data %08x\n",
      VAR_6->v0.version, VAR_6->v0.size, VAR_6->v0.addr,
      VAR_6->v0.data);
 } else
  return VAR_7;

 switch (VAR_6->v0.size) {
 case 1: return FUNC_2(VAR_3, VAR_6->v0.addr, VAR_6->v0.data);
 case 2: return FUNC_3(VAR_3, VAR_6->v0.addr, VAR_6->v0.data);
 case 4: return FUNC_4(VAR_3, VAR_6->v0.addr, VAR_6->v0.data);
 default:
  break;
 }

 return -VAR_0;
}
