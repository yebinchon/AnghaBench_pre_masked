
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {int uevent; int cevent; int kevent; TYPE_1__* func; } ;
struct nvkm_engine {int dummy; } ;
struct TYPE_2__ {void* (* dtor ) (struct nvkm_fifo*) ;} ;


 int FUNC_0 (int *) ;
 struct nvkm_fifo* FUNC_1 (struct nvkm_engine*) ;
 void* FUNC_2 (struct nvkm_fifo*) ;

__attribute__((used)) static void *
FUNC_3(struct nvkm_engine *VAR_0)
{
 struct nvkm_fifo *VAR_1 = FUNC_1(VAR_0);
 void *VAR_2 = VAR_1;
 if (VAR_1->func->dtor)
  VAR_2 = VAR_1->func->dtor(VAR_1);
 FUNC_0(&VAR_1->kevent);
 FUNC_0(&VAR_1->cevent);
 FUNC_0(&VAR_1->uevent);
 return VAR_2;
}
