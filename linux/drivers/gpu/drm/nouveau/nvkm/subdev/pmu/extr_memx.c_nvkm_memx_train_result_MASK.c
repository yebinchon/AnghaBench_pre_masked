
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pmu {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_pmu*,int*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

int
FUNC_3(struct nvkm_pmu *VAR_4, u32 *VAR_5, int VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_4->subdev.device;
 u32 VAR_8[2], VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_4, VAR_8, VAR_3, VAR_2,
       VAR_1, 0);
 if (VAR_12)
  return VAR_12;

 VAR_9 = VAR_8[0];
 VAR_10 = VAR_8[1] >> 2;
 if (VAR_10 > VAR_6)
  return -VAR_0;


 FUNC_2(VAR_7, 0x10a1c0, 0x02000000 | VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  VAR_5[VAR_11] = FUNC_1(VAR_7, 0x10a1c4);

 return 0;
}
