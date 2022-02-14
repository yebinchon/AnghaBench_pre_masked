
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_gr {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_7__ {TYPE_2__* engine; } ;
struct nv10_gr_chan {TYPE_4__* gr; TYPE_3__ object; } ;
struct TYPE_8__ {struct nvkm_gr base; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nv10_gr_chan *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_1->object.engine->subdev.device;
 struct nvkm_gr *VAR_5 = &VAR_1->gr->base;

 FUNC_0(VAR_5);

 FUNC_1(VAR_4, VAR_0, 0x00000100, 0x00000100);
 FUNC_1(VAR_4, 0x4006b0, 0x08000000, 0x08000000);
}
