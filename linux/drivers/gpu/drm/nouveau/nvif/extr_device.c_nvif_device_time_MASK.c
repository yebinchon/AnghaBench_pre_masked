
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvif_device {int object; } ;
struct nv_device_time_v0 {int time; } ;
typedef int args ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,struct nv_device_time_v0*,int) ;

u64
FUNC_2(struct nvif_device *VAR_1)
{
 struct nv_device_time_v0 VAR_2 = {};
 int VAR_3 = FUNC_1(&VAR_1->object, VAR_0,
       &VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_3 != 0);
 return VAR_2.time;
}
