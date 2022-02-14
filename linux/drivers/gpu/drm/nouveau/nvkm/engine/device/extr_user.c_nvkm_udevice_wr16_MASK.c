
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct nvkm_udevice {int device; } ;
struct nvkm_object {int dummy; } ;


 struct nvkm_udevice* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_0, u64 VAR_1, u16 VAR_2)
{
 struct nvkm_udevice *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_3->device, VAR_1, VAR_2);
 return 0;
}
