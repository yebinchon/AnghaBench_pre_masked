
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int chid; } ;
struct nv04_fifo_chan {TYPE_4__ base; struct nv04_fifo* fifo; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {int lock; TYPE_2__ engine; } ;
struct nv04_fifo {TYPE_3__ base; } ;


 int VAR_0 ;
 struct nv04_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct nvkm_fifo_chan *VAR_1)
{
 struct nv04_fifo_chan *VAR_2 = FUNC_0(VAR_1);
 struct nv04_fifo *VAR_3 = VAR_2->fifo;
 struct nvkm_device *VAR_4 = VAR_3->base.engine.subdev.device;
 u32 VAR_5 = 1 << VAR_2->base.chid;
 unsigned long VAR_6;
 FUNC_2(&VAR_3->base.lock, VAR_6);
 FUNC_1(VAR_4, VAR_0, VAR_5, VAR_5);
 FUNC_3(&VAR_3->base.lock, VAR_6);
}
