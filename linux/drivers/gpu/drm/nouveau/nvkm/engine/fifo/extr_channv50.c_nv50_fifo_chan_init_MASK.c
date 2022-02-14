
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_10__ {int chid; } ;
struct nv50_fifo_chan {TYPE_5__ base; TYPE_4__* ramfc; struct nv50_fifo* fifo; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct nv50_fifo {TYPE_3__ base; } ;
struct TYPE_9__ {int addr; } ;


 struct nv50_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nv50_fifo*) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fifo_chan *VAR_0)
{
 struct nv50_fifo_chan *VAR_1 = FUNC_0(VAR_0);
 struct nv50_fifo *VAR_2 = VAR_1->fifo;
 struct nvkm_device *VAR_3 = VAR_2->base.engine.subdev.device;
 u64 VAR_4 = VAR_1->ramfc->addr >> 12;
 u32 VAR_5 = VAR_1->base.chid;

 FUNC_2(VAR_3, 0x002600 + (VAR_5 * 4), 0x80000000 | VAR_4);
 FUNC_1(VAR_2);
}
