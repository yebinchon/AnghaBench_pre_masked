
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_bus {int mutex; scalar_t__ enabled; struct nvkm_i2c_pad* pad; } ;


 int FUNC_0 (struct nvkm_i2c_bus*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_i2c_pad*,int ) ;

int
FUNC_4(struct nvkm_i2c_bus *VAR_2)
{
 struct nvkm_i2c_pad *VAR_3 = VAR_2->pad;
 int VAR_4;

 FUNC_0(VAR_2, "acquire");
 FUNC_1(&VAR_2->mutex);

 if (VAR_2->enabled)
  VAR_4 = FUNC_3(VAR_3, VAR_1);
 else
  VAR_4 = -VAR_0;

 if (VAR_4)
  FUNC_2(&VAR_2->mutex);
 return VAR_4;
}
