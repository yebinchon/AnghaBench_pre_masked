
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_i2c_aux {TYPE_1__* func; } ;
struct TYPE_2__ {int (* xfer ) (struct nvkm_i2c_aux*,int,int ,int ,int *,int *) ;int address_only; } ;


 int FUNC_0 (struct nvkm_i2c_aux*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct nvkm_i2c_aux*,int,int ,int ,int *,int *) ;

int
FUNC_2(struct nvkm_i2c_aux *VAR_1, bool VAR_2, u8 VAR_3,
    u32 VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 if (!*VAR_6 && !VAR_1->func->address_only) {
  FUNC_0(VAR_1, "address-only transaction dropped");
  return -VAR_0;
 }
 return VAR_1->func->xfer(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
