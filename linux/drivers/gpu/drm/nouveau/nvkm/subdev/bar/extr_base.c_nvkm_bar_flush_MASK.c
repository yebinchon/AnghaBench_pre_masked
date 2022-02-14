
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_bar {TYPE_1__* func; } ;
struct TYPE_2__ {int (* flush ) (struct nvkm_bar*) ;} ;


 int FUNC_0 (struct nvkm_bar*) ;

void
FUNC_1(struct nvkm_bar *VAR_0)
{
 if (VAR_0 && VAR_0->func->flush)
  VAR_0->func->flush(VAR_0);
}
