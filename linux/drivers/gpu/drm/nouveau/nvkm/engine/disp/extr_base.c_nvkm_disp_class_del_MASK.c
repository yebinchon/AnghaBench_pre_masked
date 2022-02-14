
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int engine; } ;
struct nvkm_oproxy {TYPE_1__ base; } ;
struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct nvkm_disp {TYPE_3__ engine; struct nvkm_oproxy* client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nvkm_disp* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_oproxy *VAR_0)
{
 struct nvkm_disp *VAR_1 = FUNC_2(VAR_0->base.engine);
 FUNC_0(&VAR_1->engine.subdev.mutex);
 if (VAR_1->client == VAR_0)
  VAR_1->client = ((void*)0);
 FUNC_1(&VAR_1->engine.subdev.mutex);
}
