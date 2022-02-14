
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_vmm {int dummy; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int bar; int mem; } ;
struct TYPE_7__ {int wait; int * mem; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct gf100_fifo {TYPE_4__ user; TYPE_3__ runlist; int pbdma_nr; TYPE_2__ base; } ;


 int VAR_0 ;
 struct gf100_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct nvkm_vmm* FUNC_3 (struct nvkm_device*) ;
 int FUNC_4 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_5 (int ,int ,struct nvkm_vmm*,int ,int *,int ) ;
 int FUNC_6 (struct nvkm_device*,int ,int,int,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nvkm_device*,int) ;
 int FUNC_9 (struct nvkm_vmm*,int,int ,int *) ;
 int FUNC_10 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_11(struct nvkm_fifo *VAR_1)
{
 struct gf100_fifo *VAR_2 = FUNC_0(VAR_1);
 struct nvkm_subdev *VAR_3 = &VAR_2->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 struct nvkm_vmm *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;


 FUNC_10(VAR_4, 0x002204, 0xffffffff);
 VAR_2->pbdma_nr = FUNC_1(FUNC_8(VAR_4, 0x002204));
 FUNC_4(VAR_3, "%d PBDMA(s)\n", VAR_2->pbdma_nr);


 VAR_6 = FUNC_6(VAR_4, VAR_0, 0x1000, 0x1000,
         0, &VAR_2->runlist.mem[0]);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_4, VAR_0, 0x1000, 0x1000,
         0, &VAR_2->runlist.mem[1]);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_2->runlist.wait);

 VAR_6 = FUNC_6(VAR_4, VAR_0, 128 * 0x1000,
         0x1000, 0, &VAR_2->user.mem);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_9(VAR_5, 12, FUNC_7(VAR_2->user.mem),
      &VAR_2->user.bar);
 if (VAR_6)
  return VAR_6;

 return FUNC_5(VAR_2->user.mem, 0, VAR_5, VAR_2->user.bar, ((void*)0), 0);
}
