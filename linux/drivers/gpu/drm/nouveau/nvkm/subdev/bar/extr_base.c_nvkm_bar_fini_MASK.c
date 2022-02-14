
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_bar {TYPE_2__* func; } ;
struct TYPE_3__ {int (* fini ) (struct nvkm_bar*) ;} ;
struct TYPE_4__ {TYPE_1__ bar1; } ;


 struct nvkm_bar* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_bar*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0, bool VAR_1)
{
 struct nvkm_bar *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2->func->bar1.fini)
  VAR_2->func->bar1.fini(VAR_2);
 return 0;
}
