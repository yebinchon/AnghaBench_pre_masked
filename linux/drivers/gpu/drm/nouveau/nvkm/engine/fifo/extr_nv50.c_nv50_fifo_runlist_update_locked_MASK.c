
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_memory {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct TYPE_4__ {int nr; TYPE_3__ engine; } ;
struct nv50_fifo {size_t cur_runlist; TYPE_1__ base; struct nvkm_memory** runlist; } ;


 int FUNC_0 (struct nvkm_memory*) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_memory*) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_memory*,int,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nv50_fifo *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 struct nvkm_memory *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_0->runlist[VAR_0->cur_runlist];
 VAR_0->cur_runlist = !VAR_0->cur_runlist;

 FUNC_1(VAR_2);
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_0->base.nr; VAR_3++) {
  if (FUNC_3(VAR_1, 0x002600 + (VAR_3 * 4)) & 0x80000000)
   FUNC_4(VAR_2, VAR_4++ * 4, VAR_3);
 }
 FUNC_0(VAR_2);

 FUNC_5(VAR_1, 0x0032f4, FUNC_2(VAR_2) >> 12);
 FUNC_5(VAR_1, 0x0032ec, VAR_4);
 FUNC_5(VAR_1, 0x002500, 0x00000101);
}
