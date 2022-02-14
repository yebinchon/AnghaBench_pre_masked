
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_2__ base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int
FUNC_4(struct gf100_gr *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 unsigned long VAR_5 = VAR_1 + FUNC_0(2000);
 bool VAR_6, VAR_7, VAR_8;

 do {




  FUNC_2(VAR_4, 0x400700);

  VAR_6 = FUNC_2(VAR_4, 0x200) & 0x1000;
  VAR_7 = FUNC_2(VAR_4, 0x2640) & 0x8000;
  VAR_8 = FUNC_2(VAR_4, 0x40060c) & 0x1;

  if (!VAR_6 || (!VAR_8 && !VAR_7))
   return 0;
 } while (FUNC_3(VAR_1, VAR_5));

 FUNC_1(VAR_3,
     "wait for idle timeout (en: %d, ctxsw: %d, busy: %d)\n",
     VAR_6, VAR_7, VAR_8);
 return -VAR_0;
}
