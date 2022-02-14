
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_iccsense_rail {int mohm; TYPE_1__* sensor; } ;
struct nvkm_iccsense {int dummy; } ;
struct TYPE_2__ {int addr; int i2c; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_iccsense *VAR_0,
                          struct nvkm_iccsense_rail *VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 return FUNC_0(VAR_1->sensor->i2c, VAR_1->sensor->addr,
           VAR_2, 0, VAR_3, 3, VAR_1->mohm,
           10 * 4);
}
