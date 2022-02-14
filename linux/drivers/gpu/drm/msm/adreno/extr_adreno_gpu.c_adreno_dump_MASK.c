
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gpu {int name; } ;
struct adreno_gpu {int* registers; } ;


 int FUNC_0 (struct msm_gpu*,int) ;
 int FUNC_1 (char*,int,...) ;
 struct adreno_gpu* FUNC_2 (struct msm_gpu*) ;

void FUNC_3(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (!VAR_1->registers)
  return;


 FUNC_1("IO:region %s 00000000 00020000\n", VAR_0->name);
 for (VAR_2 = 0; VAR_1->registers[VAR_2] != ~0; VAR_2 += 2) {
  uint32_t VAR_3 = VAR_1->registers[VAR_2];
  uint32_t VAR_4 = VAR_1->registers[VAR_2+1];
  uint32_t VAR_5;

  for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++) {
   uint32_t VAR_6 = FUNC_0(VAR_0, VAR_5);
   FUNC_1("IO:R %08x %08x\n", VAR_5<<2, VAR_6);
  }
 }
}
