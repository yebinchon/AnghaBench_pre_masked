
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ef; int bw; int nr; } ;
struct nvkm_ior {TYPE_1__ dp; } ;
struct nvkm_i2c_aux {int dummy; } ;


 int FUNC_0 (struct nvkm_i2c_aux*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_ior *VAR_0, struct nvkm_i2c_aux *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0->dp.nr, VAR_0->dp.bw,
         VAR_0->dp.ef);
 if (VAR_2)
  return VAR_2;
 return 1;
}
