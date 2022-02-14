
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_gr {TYPE_2__* func; } ;
struct nvkm_device {struct nvkm_gr* gr; } ;
struct TYPE_3__ {int (* pause ) (struct nvkm_gr*) ;} ;
struct TYPE_4__ {TYPE_1__ ctxsw; } ;


 int FUNC_0 (struct nvkm_gr*) ;

int
FUNC_1(struct nvkm_device *VAR_0)
{
 struct nvkm_gr *VAR_1 = VAR_0->gr;
 if (VAR_1 && VAR_1->func->ctxsw.pause)
  return VAR_1->func->ctxsw.pause(VAR_1);
 return 0;
}
