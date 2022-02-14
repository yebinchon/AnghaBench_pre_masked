
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_udevice {struct nvkm_device* device; struct nvkm_object object; } ;
struct nvkm_device {int timer; } ;
struct nv_device_time_v0 {int time; int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,char*,int ) ;
 int FUNC_1 (int,void**,int *,struct nv_device_time_v0,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_udevice *VAR_1, void *VAR_2, u32 VAR_3)
{
 struct nvkm_object *VAR_4 = &VAR_1->object;
 struct nvkm_device *VAR_5 = VAR_1->device;
 union {
  struct nv_device_time_v0 v0;
 } *VAR_6 = VAR_2;
 int VAR_7 = -VAR_0;

 FUNC_0(VAR_4, "device time size %d\n", VAR_3);
 if (!(VAR_7 = FUNC_1(VAR_7, &VAR_2, &VAR_3, VAR_6->v0, 0, 0, 0))) {
  FUNC_0(VAR_4, "device time vers %d\n", VAR_6->v0.version);
  VAR_6->v0.time = FUNC_2(VAR_5->timer);
 }

 return VAR_7;
}
