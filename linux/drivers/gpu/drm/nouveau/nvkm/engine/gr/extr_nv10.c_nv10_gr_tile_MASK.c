
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_fb_tile {int addr; int pitch; int limit; } ;
struct nvkm_device {struct nvkm_fifo* fifo; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 struct nv10_gr* FUNC_4 (struct nvkm_gr*) ;
 int FUNC_5 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_6 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_7 (struct nvkm_device*,int ,int ) ;

void
FUNC_8(struct nvkm_gr *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 struct nv10_gr *VAR_3 = FUNC_4(VAR_0);
 struct nvkm_device *VAR_4 = VAR_3->base.engine.subdev.device;
 struct nvkm_fifo *VAR_5 = VAR_4->fifo;
 unsigned long VAR_6;

 FUNC_5(VAR_5, &VAR_6);
 FUNC_3(&VAR_3->base);

 FUNC_7(VAR_4, FUNC_1(VAR_1), VAR_2->limit);
 FUNC_7(VAR_4, FUNC_2(VAR_1), VAR_2->pitch);
 FUNC_7(VAR_4, FUNC_0(VAR_1), VAR_2->addr);

 FUNC_6(VAR_5, &VAR_6);
}
