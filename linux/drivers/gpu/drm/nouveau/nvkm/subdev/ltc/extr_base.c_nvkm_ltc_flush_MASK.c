
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ltc {TYPE_1__* func; } ;
struct TYPE_2__ {int (* flush ) (struct nvkm_ltc*) ;} ;


 int FUNC_0 (struct nvkm_ltc*) ;

void
FUNC_1(struct nvkm_ltc *VAR_0)
{
 if (VAR_0->func->flush)
  VAR_0->func->flush(VAR_0);
}
