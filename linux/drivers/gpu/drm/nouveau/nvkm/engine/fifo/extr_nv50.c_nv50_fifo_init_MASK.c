
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv50_fifo {TYPE_3__ base; } ;


 struct nv50_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (struct nv50_fifo*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

void
FUNC_4(struct nvkm_fifo *VAR_0)
{
 struct nv50_fifo *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.engine.subdev.device;
 int VAR_3;

 FUNC_2(VAR_2, 0x000200, 0x00000100, 0x00000000);
 FUNC_2(VAR_2, 0x000200, 0x00000100, 0x00000100);
 FUNC_3(VAR_2, 0x00250c, 0x6f3cfc34);
 FUNC_3(VAR_2, 0x002044, 0x01003fff);

 FUNC_3(VAR_2, 0x002100, 0xffffffff);
 FUNC_3(VAR_2, 0x002140, 0xbfffffff);

 for (VAR_3 = 0; VAR_3 < 128; VAR_3++)
  FUNC_3(VAR_2, 0x002600 + (VAR_3 * 4), 0x00000000);
 FUNC_1(VAR_1);

 FUNC_3(VAR_2, 0x003200, 0x00000001);
 FUNC_3(VAR_2, 0x003250, 0x00000001);
 FUNC_3(VAR_2, 0x002500, 0x00000001);
}
