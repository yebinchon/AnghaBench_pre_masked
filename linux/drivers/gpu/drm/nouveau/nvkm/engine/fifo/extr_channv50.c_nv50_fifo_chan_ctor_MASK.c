
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int inst; } ;
struct nv50_fifo_chan {int ramht; TYPE_4__ base; int pgd; int eng; int ramfc; struct nv50_fifo* fifo; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct nv50_fifo {TYPE_3__ base; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_3__*,int,int,int,int ,int ,unsigned long long,int ,int,int,struct nvkm_oclass const*,TYPE_4__*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int,int ,int *) ;
 int FUNC_2 (struct nvkm_device*,int,int,int ,int *) ;

int
FUNC_3(struct nv50_fifo *VAR_6, u64 VAR_7, u64 VAR_8,
      const struct nvkm_oclass *VAR_9,
      struct nv50_fifo_chan *VAR_10)
{
 struct nvkm_device *VAR_11 = VAR_6->base.engine.subdev.device;
 int VAR_12;

 if (!VAR_7)
  return -VAR_0;

 VAR_12 = FUNC_0(&VAR_5, &VAR_6->base,
      0x10000, 0x1000, 0, VAR_7, VAR_8,
      (1ULL << VAR_1) |
      (1ULL << VAR_4) |
      (1ULL << VAR_2) |
      (1ULL << VAR_3),
      0, 0xc00000, 0x2000, VAR_9, &VAR_10->base);
 VAR_10->fifo = VAR_6;
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_11, 0x0200, 0x1000, 1, VAR_10->base.inst,
         &VAR_10->ramfc);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_11, 0x1200, 0, 1, VAR_10->base.inst,
         &VAR_10->eng);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_11, 0x4000, 0, 0, VAR_10->base.inst,
         &VAR_10->pgd);
 if (VAR_12)
  return VAR_12;

 return FUNC_2(VAR_11, 0x8000, 16, VAR_10->base.inst, &VAR_10->ramht);
}
