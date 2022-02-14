
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_subdev {int device; } ;
struct nvbios_init {int head; struct nvkm_subdev* subdev; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (int ,int,int ,int) ;

__attribute__((used)) static u8
FUNC_2(struct nvbios_init *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct nvkm_subdev *VAR_3 = VAR_0->subdev;
 if (FUNC_0(VAR_0)) {
  int VAR_4 = VAR_0->head < 0 ? 0 : VAR_0->head;
  return FUNC_1(VAR_3->device, VAR_4, VAR_1, VAR_2);
 }
 return 0x00;
}
