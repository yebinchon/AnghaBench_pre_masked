
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_pad {TYPE_1__* func; } ;
typedef enum nvkm_i2c_pad_mode { ____Placeholder_nvkm_i2c_pad_mode } nvkm_i2c_pad_mode ;
struct TYPE_2__ {int (* mode ) (struct nvkm_i2c_pad*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_i2c_pad*,char*,char*) ;
 int FUNC_1 (struct nvkm_i2c_pad*,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_i2c_pad *VAR_2, enum nvkm_i2c_pad_mode VAR_3)
{
 FUNC_0(VAR_2, "-> %s", (VAR_3 == VAR_0) ? "aux" :
         (VAR_3 == VAR_1) ? "i2c" : "off");
 if (VAR_2->func->mode)
  VAR_2->func->mode(VAR_2, VAR_3);
}
