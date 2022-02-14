
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_12__ {TYPE_4__* bar; } ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct TYPE_9__ {TYPE_1__ subdev; } ;
struct TYPE_10__ {TYPE_2__ engine; } ;
struct gk104_fifo {int pbdma_nr; TYPE_7__* func; TYPE_5__ user; TYPE_3__ base; } ;
struct TYPE_14__ {TYPE_6__* pbdma; } ;
struct TYPE_13__ {int (* init_timeout ) (struct gk104_fifo*) ;int (* init ) (struct gk104_fifo*) ;} ;
struct TYPE_11__ {int addr; } ;


 struct gk104_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (struct gk104_fifo*) ;
 int FUNC_4 (struct gk104_fifo*) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_fifo *VAR_0)
{
 struct gk104_fifo *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.engine.subdev.device;
 int VAR_3;


 VAR_1->func->pbdma->init(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_1->pbdma_nr; VAR_3++) {
  FUNC_1(VAR_2, 0x04013c + (VAR_3 * 0x2000), 0x10000100, 0x00000000);
  FUNC_2(VAR_2, 0x040108 + (VAR_3 * 0x2000), 0xffffffff);
  FUNC_2(VAR_2, 0x04010c + (VAR_3 * 0x2000), 0xfffffeff);
 }


 for (VAR_3 = 0; VAR_3 < VAR_1->pbdma_nr; VAR_3++) {
  FUNC_2(VAR_2, 0x040148 + (VAR_3 * 0x2000), 0xffffffff);
  FUNC_2(VAR_2, 0x04014c + (VAR_3 * 0x2000), 0xffffffff);
 }

 FUNC_2(VAR_2, 0x002254, 0x10000000 | VAR_1->user.bar->addr >> 12);

 if (VAR_1->func->pbdma->init_timeout)
  VAR_1->func->pbdma->init_timeout(VAR_1);

 FUNC_2(VAR_2, 0x002100, 0xffffffff);
 FUNC_2(VAR_2, 0x002140, 0x7fffffff);
}
