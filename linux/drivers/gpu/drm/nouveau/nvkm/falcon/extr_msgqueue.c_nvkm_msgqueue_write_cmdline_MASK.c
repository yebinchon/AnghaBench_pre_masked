
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_msgqueue {TYPE_2__* func; } ;
struct TYPE_4__ {TYPE_1__* init_func; } ;
struct TYPE_3__ {int (* gen_cmdline ) (struct nvkm_msgqueue*,void*) ;} ;


 int FUNC_0 (struct nvkm_msgqueue*,void*) ;

void
FUNC_1(struct nvkm_msgqueue *VAR_0, void *VAR_1)
{
 if (!VAR_0 || !VAR_0->func || !VAR_0->func->init_func)
  return;

 VAR_0->func->init_func->gen_cmdline(VAR_0, VAR_1);
}
