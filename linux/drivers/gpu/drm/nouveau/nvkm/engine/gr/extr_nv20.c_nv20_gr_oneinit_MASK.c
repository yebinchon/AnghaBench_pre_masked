
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv20_gr {int ctxtab; TYPE_3__ base; } ;


 int VAR_0 ;
 struct nv20_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (int ,int ,int,int,int,int *) ;

int
FUNC_2(struct nvkm_gr *VAR_1)
{
 struct nv20_gr *VAR_2 = FUNC_0(VAR_1);
 return FUNC_1(VAR_2->base.engine.subdev.device,
          VAR_0, 32 * 4, 16,
          1, &VAR_2->ctxtab);
}
