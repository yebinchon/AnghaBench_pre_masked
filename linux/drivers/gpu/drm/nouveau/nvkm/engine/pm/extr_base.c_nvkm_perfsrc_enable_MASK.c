
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nvkm_pm {TYPE_1__ engine; } ;
struct nvkm_perfsrc {int mask; int shift; int addr; scalar_t__ enable; } ;
struct nvkm_perfsig {int dummy; } ;
struct nvkm_perfdom {int dummy; } ;
struct nvkm_perfctr {int** source; int * signal; int domain; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int ,int,int) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;
 struct nvkm_perfsig* FUNC_2 (struct nvkm_pm*,int ,int ,struct nvkm_perfdom**) ;
 struct nvkm_perfsrc* FUNC_3 (struct nvkm_pm*,struct nvkm_perfsig*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_pm *VAR_1, struct nvkm_perfctr *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 struct nvkm_perfdom *VAR_5 = ((void*)0);
 struct nvkm_perfsig *VAR_6;
 struct nvkm_perfsrc *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < 8 && VAR_2->source[VAR_10][VAR_11]; VAR_11++) {
   VAR_6 = FUNC_2(VAR_1, VAR_2->domain,
      VAR_2->signal[VAR_10], &VAR_5);
   if (!VAR_6)
    return -VAR_0;

   VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_2->source[VAR_10][VAR_11]);
   if (!VAR_7)
    return -VAR_0;


   VAR_8 = VAR_9 = 0x00000000;
   if (VAR_7->enable)
    VAR_8 = VAR_9 = 0x80000000;
   VAR_8 |= (VAR_7->mask << VAR_7->shift);
   VAR_9 |= ((VAR_2->source[VAR_10][VAR_11] >> 32) << VAR_7->shift);


   FUNC_1(VAR_4, VAR_7->addr, VAR_8, VAR_9);
   FUNC_0(VAR_3,
       "enabled source %08x %08x %08x\n",
       VAR_7->addr, VAR_8, VAR_9);
  }
 }
 return 0;
}
