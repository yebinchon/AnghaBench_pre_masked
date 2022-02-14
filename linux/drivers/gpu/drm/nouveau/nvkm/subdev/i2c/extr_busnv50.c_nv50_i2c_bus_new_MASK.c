
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct nvkm_i2c_pad {TYPE_1__* i2c; } ;
struct nvkm_i2c_bus {int dummy; } ;
struct nv50_i2c_bus {int addr; int data; struct nvkm_i2c_bus base; } ;
struct TYPE_2__ {int subdev; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nv50_i2c_bus* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct nvkm_i2c_pad*,int,struct nvkm_i2c_bus*) ;
 int FUNC_3 (int *,char*,size_t) ;

int
FUNC_4(struct nvkm_i2c_pad *VAR_4, int VAR_5, u8 VAR_6,
   struct nvkm_i2c_bus **VAR_7)
{
 static const u32 VAR_8[] = {
  0x00e138, 0x00e150, 0x00e168, 0x00e180,
  0x00e254, 0x00e274, 0x00e764, 0x00e780,
  0x00e79c, 0x00e7b8
 };
 struct nv50_i2c_bus *VAR_9;

 if (VAR_6 >= FUNC_0(VAR_8)) {
  FUNC_3(&VAR_4->i2c->subdev, "bus %d unknown\n", VAR_6);
  return -VAR_0;
 }

 if (!(VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2)))
  return -VAR_1;
 *VAR_7 = &VAR_9->base;

 FUNC_2(&VAR_3, VAR_4, VAR_5, &VAR_9->base);
 VAR_9->addr = VAR_8[VAR_6];
 VAR_9->data = 0x00000007;
 return 0;
}
