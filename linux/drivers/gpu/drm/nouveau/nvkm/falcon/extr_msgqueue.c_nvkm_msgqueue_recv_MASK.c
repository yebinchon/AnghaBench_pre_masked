
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue {TYPE_2__* func; TYPE_1__* falcon; } ;
struct TYPE_4__ {int (* recv ) (struct nvkm_msgqueue*) ;} ;
struct TYPE_3__ {struct nvkm_subdev* owner; } ;


 int FUNC_0 (struct nvkm_subdev const*,char*) ;
 int FUNC_1 (struct nvkm_msgqueue*) ;

void
FUNC_2(struct nvkm_msgqueue *VAR_0)
{
 if (!VAR_0->func || !VAR_0->func->recv) {
  const struct nvkm_subdev *VAR_1 = VAR_0->falcon->owner;

  FUNC_0(VAR_1, "missing msgqueue recv function\n");
  return;
 }

 VAR_0->func->recv(VAR_0);
}
