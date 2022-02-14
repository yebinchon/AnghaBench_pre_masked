
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_memory {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_memory*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nvkm_memory*) ;
 int FUNC_4 (struct nvkm_memory*) ;
 int FUNC_5 (struct nvkm_memory*,int) ;
 int FUNC_6 (struct nvkm_memory*,int,int) ;
 int FUNC_7 (int) ;

int
FUNC_8(struct nvkm_vmm *VAR_0, struct nvkm_memory *VAR_1)
{
 u64 VAR_2[2], VAR_3;
 int VAR_4 = FUNC_1(VAR_0, VAR_1), VAR_5;
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_1);
 VAR_2[0] = FUNC_5(VAR_1, 0x200);
 VAR_2[1] = FUNC_5(VAR_1, 0x204);
 VAR_3 = FUNC_0(0);

 FUNC_6(VAR_1, 0x21c, 0x00000000);

 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  if (VAR_3 & FUNC_0(VAR_5)) {
   FUNC_6(VAR_1, 0x2a4 + (VAR_5 * 0x10), VAR_2[1]);
   FUNC_6(VAR_1, 0x2a0 + (VAR_5 * 0x10), VAR_2[0]);
  } else {
   FUNC_6(VAR_1, 0x2a4 + (VAR_5 * 0x10), 0x00000001);
   FUNC_6(VAR_1, 0x2a0 + (VAR_5 * 0x10), 0x00000001);
  }
  FUNC_6(VAR_1, 0x2a8 + (VAR_5 * 0x10), 0x00000000);
 }

 FUNC_6(VAR_1, 0x298, FUNC_2(VAR_3));
 FUNC_6(VAR_1, 0x29c, FUNC_7(VAR_3));
 FUNC_3(VAR_1);
 return 0;
}
