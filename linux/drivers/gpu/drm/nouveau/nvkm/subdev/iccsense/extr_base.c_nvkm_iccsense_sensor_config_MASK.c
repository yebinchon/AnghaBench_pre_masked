
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_iccsense_sensor {int config; int addr; int i2c; int id; } ;
struct nvkm_iccsense {struct nvkm_subdev subdev; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_iccsense *VAR_0,
              struct nvkm_iccsense_sensor *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->subdev;
 FUNC_1(VAR_2, "write config of extdev %i: 0x%04x\n", VAR_1->id, VAR_1->config);
 FUNC_0(VAR_1->i2c, VAR_1->addr, 0x00, VAR_1->config);
}
