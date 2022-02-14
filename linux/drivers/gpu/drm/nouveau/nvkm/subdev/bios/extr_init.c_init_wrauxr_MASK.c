
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvbios_init {int dummy; } ;


 int VAR_0 ;
 struct nvkm_i2c_aux* FUNC_0 (struct nvbios_init*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 int FUNC_2 (struct nvkm_i2c_aux*,int ,int *,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvbios_init *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct nvkm_i2c_aux *VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 && FUNC_1(VAR_1)) {
  int VAR_5 = FUNC_2(VAR_4, VAR_2, &VAR_3, 1);
  if (VAR_5)
   FUNC_3("auxch write failed with %d\n", VAR_5);
  return VAR_5;
 }
 return -VAR_0;
}
