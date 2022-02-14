
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad_func {int dummy; } ;
struct nvkm_i2c_pad {int id; int head; int mutex; int mode; struct nvkm_i2c* i2c; struct nvkm_i2c_pad_func const* func; } ;
struct nvkm_i2c {int pad; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_i2c_pad*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(const struct nvkm_i2c_pad_func *VAR_1, struct nvkm_i2c *VAR_2,
    int VAR_3, struct nvkm_i2c_pad *VAR_4)
{
 VAR_4->func = VAR_1;
 VAR_4->i2c = VAR_2;
 VAR_4->id = VAR_3;
 VAR_4->mode = VAR_0;
 FUNC_2(&VAR_4->mutex);
 FUNC_1(&VAR_4->head, &VAR_2->pad);
 FUNC_0(VAR_4, "ctor");
}
