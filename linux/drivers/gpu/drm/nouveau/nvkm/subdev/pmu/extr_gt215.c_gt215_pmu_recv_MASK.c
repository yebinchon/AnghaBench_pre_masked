
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_2__ {int base; int process; int message; int* data; int wait; } ;
struct nvkm_pmu {TYPE_1__ recv; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,char,char,char,char,int,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nvkm_pmu *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3, VAR_4, VAR_5, VAR_6;


 u32 VAR_7 = FUNC_0(VAR_2, 0x10a4cc);
 if (VAR_7 == FUNC_0(VAR_2, 0x10a4c8))
  return;


 do {
  FUNC_2(VAR_2, 0x10a580, 0x00000002);
 } while (FUNC_0(VAR_2, 0x10a580) != 0x00000002);


 FUNC_2(VAR_2, 0x10a1c0, 0x02000000 | (((VAR_7 & 0x07) << 4) +
    VAR_0->recv.base));
 VAR_3 = FUNC_0(VAR_2, 0x10a1c4);
 VAR_4 = FUNC_0(VAR_2, 0x10a1c4);
 VAR_5 = FUNC_0(VAR_2, 0x10a1c4);
 VAR_6 = FUNC_0(VAR_2, 0x10a1c4);
 FUNC_2(VAR_2, 0x10a4cc, (VAR_7 + 1) & 0x0f);


 FUNC_2(VAR_2, 0x10a580, 0x00000000);


 if (VAR_0->recv.process) {
  if (VAR_3 == VAR_0->recv.process &&
      VAR_4 == VAR_0->recv.message) {
   VAR_0->recv.data[0] = VAR_5;
   VAR_0->recv.data[1] = VAR_6;
   VAR_0->recv.process = 0;
   FUNC_3(&VAR_0->recv.wait);
   return;
  }
 }




 FUNC_1(VAR_1, "%c%c%c%c %08x %08x %08x %08x\n",
    (char)((VAR_3 & 0x000000ff) >> 0),
    (char)((VAR_3 & 0x0000ff00) >> 8),
    (char)((VAR_3 & 0x00ff0000) >> 16),
    (char)((VAR_3 & 0xff000000) >> 24),
    VAR_3, VAR_4, VAR_5, VAR_6);
}
