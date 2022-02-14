
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvbios_init {int dummy; } ;


 struct nvkm_i2c_aux* FUNC_0 (struct nvbios_init*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvkm_i2c_aux*,int ,int*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static u8
FUNC_4(struct nvbios_init *VAR_0, u32 VAR_1)
{
 struct nvkm_i2c_aux *VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3;

 if (VAR_2 && FUNC_1(VAR_0)) {
  int VAR_4 = FUNC_2(VAR_2, VAR_1, &VAR_3, 1);
  if (VAR_4 == 0)
   return VAR_3;
  FUNC_3("auxch read failed with %d\n", VAR_4);
 }

 return 0x00;
}
