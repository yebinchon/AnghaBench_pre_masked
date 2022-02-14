
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nvkm_udevice {int device; } ;
struct nvkm_object {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct nvkm_udevice* FUNC_1 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_0, u64 VAR_1, u8 *VAR_2)
{
 struct nvkm_udevice *VAR_3 = FUNC_1(VAR_0);
 *VAR_2 = FUNC_0(VAR_3->device, VAR_1);
 return 0;
}
