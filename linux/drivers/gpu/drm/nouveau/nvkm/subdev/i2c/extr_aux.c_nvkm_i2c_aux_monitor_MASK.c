
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_aux {struct nvkm_i2c_pad* pad; } ;


 int FUNC_0 (struct nvkm_i2c_aux*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nvkm_i2c_pad*,int ) ;

void
FUNC_2(struct nvkm_i2c_aux *VAR_2, bool VAR_3)
{
 struct nvkm_i2c_pad *VAR_4 = VAR_2->pad;
 FUNC_0(VAR_2, "monitor: %s", VAR_3 ? "yes" : "no");
 if (VAR_3)
  FUNC_1(VAR_4, VAR_0);
 else
  FUNC_1(VAR_4, VAR_1);
}
