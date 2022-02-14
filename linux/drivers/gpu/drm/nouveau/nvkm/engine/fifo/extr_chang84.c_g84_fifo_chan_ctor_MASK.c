
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
struct nv50_fifo_chan {int ramht; TYPE_4__ base; int ramfc; int cache; int pgd; int eng; struct nv50_fifo* fifo; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct nv50_fifo {TYPE_3__ base; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,TYPE_3__*,int,int,int,int ,int ,unsigned long long,int ,int,int,struct nvkm_oclass const*,TYPE_4__*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int,int ,int *) ;
 int FUNC_2 (struct nvkm_device*,int,int,int ,int *) ;

int
FUNC_3(struct nv50_fifo *VAR_16, u64 VAR_17, u64 VAR_18,
     const struct nvkm_oclass *VAR_19,
     struct nv50_fifo_chan *VAR_20)
{
 struct nvkm_device *VAR_21 = VAR_16->base.engine.subdev.device;
 int VAR_22;

 if (!VAR_17)
  return -VAR_0;

 VAR_22 = FUNC_0(&VAR_15, &VAR_16->base,
      0x10000, 0x1000, 0, VAR_17, VAR_18,
      (1ULL << VAR_1) |
      (1ULL << VAR_2) |
      (1ULL << VAR_3) |
      (1ULL << VAR_4) |
      (1ULL << VAR_5) |
      (1ULL << VAR_6) |
      (1ULL << VAR_7) |
      (1ULL << VAR_8) |
      (1ULL << VAR_9) |
      (1ULL << VAR_10) |
      (1ULL << VAR_11) |
      (1ULL << VAR_12) |
      (1ULL << VAR_13) |
      (1ULL << VAR_14),
      0, 0xc00000, 0x2000, VAR_19, &VAR_20->base);
 VAR_20->fifo = VAR_16;
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_21, 0x0200, 0, 1, VAR_20->base.inst,
         &VAR_20->eng);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_21, 0x4000, 0, 0, VAR_20->base.inst,
         &VAR_20->pgd);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_21, 0x1000, 0x400, 1, VAR_20->base.inst,
         &VAR_20->cache);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_21, 0x100, 0x100, 1, VAR_20->base.inst,
         &VAR_20->ramfc);
 if (VAR_22)
  return VAR_22;

 return FUNC_2(VAR_21, 0x8000, 16, VAR_20->base.inst, &VAR_20->ramht);
}
