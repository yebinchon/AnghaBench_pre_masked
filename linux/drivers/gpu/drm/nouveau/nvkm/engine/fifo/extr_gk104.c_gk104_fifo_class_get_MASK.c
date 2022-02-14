
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_oclass {TYPE_1__* engn; int base; } ;
struct nvkm_fifo {int dummy; } ;
struct gk104_fifo {TYPE_2__* func; } ;
struct TYPE_3__ {int user; scalar_t__ ctor; } ;
struct TYPE_4__ {TYPE_1__ chan; TYPE_1__ user; } ;


 struct gk104_fifo* FUNC_0 (struct nvkm_fifo*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_fifo *VAR_0, int VAR_1,
       struct nvkm_oclass *VAR_2)
{
 struct gk104_fifo *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 if (VAR_3->func->user.ctor && VAR_4++ == VAR_1) {
  VAR_2->base = VAR_3->func->user.user;
  VAR_2->engn = &VAR_3->func->user;
  return 0;
 }

 if (VAR_3->func->chan.ctor && VAR_4++ == VAR_1) {
  VAR_2->base = VAR_3->func->chan.user;
  VAR_2->engn = &VAR_3->func->chan;
  return 0;
 }

 return VAR_4;
}
