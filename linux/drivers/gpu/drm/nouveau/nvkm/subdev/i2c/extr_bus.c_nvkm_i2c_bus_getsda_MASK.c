
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_bus {TYPE_1__* func; } ;
struct TYPE_2__ {int (* sense_sda ) (struct nvkm_i2c_bus*) ;} ;


 int FUNC_0 (struct nvkm_i2c_bus*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0)
{
 struct nvkm_i2c_bus *VAR_1 = VAR_0;
 return VAR_1->func->sense_sda(VAR_1);
}
