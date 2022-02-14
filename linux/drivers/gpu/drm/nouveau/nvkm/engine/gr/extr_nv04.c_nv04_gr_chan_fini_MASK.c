
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv04_gr_chan {struct nv04_gr* gr; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv04_gr {int lock; TYPE_3__ base; } ;


 int VAR_0 ;
 struct nv04_gr_chan* FUNC_0 (struct nvkm_object*) ;
 struct nv04_gr_chan* FUNC_1 (struct nv04_gr*) ;
 int FUNC_2 (struct nv04_gr_chan*) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_object *VAR_1, bool VAR_2)
{
 struct nv04_gr_chan *VAR_3 = FUNC_0(VAR_1);
 struct nv04_gr *VAR_4 = VAR_3->gr;
 struct nvkm_device *VAR_5 = VAR_4->base.engine.subdev.device;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->lock, VAR_6);
 FUNC_3(VAR_5, VAR_0, 0x00000001, 0x00000000);
 if (FUNC_1(VAR_4) == VAR_3)
  FUNC_2(VAR_3);
 FUNC_3(VAR_5, VAR_0, 0x00000001, 0x00000001);
 FUNC_5(&VAR_4->lock, VAR_6);
 return 0;
}
