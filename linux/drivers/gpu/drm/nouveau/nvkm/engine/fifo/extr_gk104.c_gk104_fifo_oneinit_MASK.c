
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_16__ {int bar; int mem; } ;
struct TYPE_9__ {struct nvkm_subdev subdev; } ;
struct TYPE_15__ {int nr; TYPE_1__ engine; } ;
struct gk104_fifo {int pbdma_nr; int engine_nr; int runlist_nr; TYPE_8__ user; TYPE_7__ base; TYPE_6__* runlist; TYPE_5__* func; TYPE_3__* engine; } ;
typedef enum nvkm_devidx { ____Placeholder_nvkm_devidx } nvkm_devidx ;
struct TYPE_14__ {int engm; int chan; int cgrp; int wait; int * mem; } ;
struct TYPE_13__ {TYPE_4__* runlist; TYPE_2__* pbdma; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_11__ {int runl; int pbid; int engine; } ;
struct TYPE_10__ {int (* nr ) (struct gk104_fifo*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct gk104_fifo* FUNC_2 (struct nvkm_fifo*) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int*) ;
 void* FUNC_6 (int,int) ;
 struct nvkm_vmm* FUNC_7 (struct nvkm_device*) ;
 int FUNC_8 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_9 (struct nvkm_device*,int) ;
 int FUNC_10 (int ,int ,struct nvkm_vmm*,int ,int *,int ) ;
 int FUNC_11 (struct nvkm_device*,int ,int,int,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct nvkm_device*,int) ;
 int * VAR_3 ;
 int FUNC_14 (struct nvkm_device*,int ,int*,int*) ;
 int FUNC_15 (struct nvkm_vmm*,int,int ,int *) ;
 int FUNC_16 (struct gk104_fifo*) ;

__attribute__((used)) static int
FUNC_17(struct nvkm_fifo *VAR_4)
{
 struct gk104_fifo *VAR_5 = FUNC_2(VAR_4);
 struct nvkm_subdev *VAR_6 = &VAR_5->base.engine.subdev;
 struct nvkm_device *VAR_7 = VAR_6->device;
 struct nvkm_vmm *VAR_8 = FUNC_7(VAR_7);
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 enum nvkm_devidx VAR_15;
 u32 *VAR_16;

 VAR_5->pbdma_nr = VAR_5->func->pbdma->nr(VAR_5);
 FUNC_8(VAR_6, "%d PBDMA(s)\n", VAR_5->pbdma_nr);


 if (!(VAR_16 = FUNC_4(VAR_5->pbdma_nr, sizeof(*VAR_16), VAR_1)))
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_5->pbdma_nr; VAR_13++)
  VAR_16[VAR_13] = FUNC_13(VAR_7, 0x002390 + (VAR_13 * 0x04));


 VAR_13 = 0;
 while ((int)(VAR_15 = FUNC_14(VAR_7, VAR_13++, &VAR_10, &VAR_9)) >= 0) {

  for (VAR_14 = 0, VAR_11 = -1; VAR_14 < VAR_5->pbdma_nr; VAR_14++) {
   if (VAR_16[VAR_14] & (1 << VAR_10)) {
    VAR_11 = VAR_14;
    break;
   }
  }

  FUNC_8(VAR_6, "engine %2d: runlist %2d pbdma %2d (%s)\n",
      VAR_9, VAR_10, VAR_11, VAR_3[VAR_15]);

  VAR_5->engine[VAR_9].engine = FUNC_9(VAR_7, VAR_15);
  VAR_5->engine[VAR_9].runl = VAR_10;
  VAR_5->engine[VAR_9].pbid = VAR_11;
  VAR_5->engine_nr = FUNC_6(VAR_5->engine_nr, VAR_9 + 1);
  VAR_5->runlist[VAR_10].engm |= 1 << VAR_9;
  VAR_5->runlist_nr = FUNC_6(VAR_5->runlist_nr, VAR_10 + 1);
 }

 FUNC_5(VAR_16);

 for (VAR_13 = 0; VAR_13 < VAR_5->runlist_nr; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5->runlist[VAR_13].mem); VAR_14++) {
   VAR_12 = FUNC_11(VAR_7, VAR_2,
           VAR_5->base.nr * 2 *
           VAR_5->func->runlist->size,
           0x1000, 0,
           &VAR_5->runlist[VAR_13].mem[VAR_14]);
   if (VAR_12)
    return VAR_12;
  }

  FUNC_3(&VAR_5->runlist[VAR_13].wait);
  FUNC_1(&VAR_5->runlist[VAR_13].cgrp);
  FUNC_1(&VAR_5->runlist[VAR_13].chan);
 }

 VAR_12 = FUNC_11(VAR_7, VAR_2,
         VAR_5->base.nr * 0x200, 0x1000, 1,
         &VAR_5->user.mem);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_15(VAR_8, 12, FUNC_12(VAR_5->user.mem),
      &VAR_5->user.bar);
 if (VAR_12)
  return VAR_12;

 return FUNC_10(VAR_5->user.mem, 0, VAR_8, VAR_5->user.bar, ((void*)0), 0);
}
