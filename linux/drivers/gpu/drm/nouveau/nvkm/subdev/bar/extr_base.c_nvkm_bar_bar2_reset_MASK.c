
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_device {struct nvkm_bar* bar; } ;
struct nvkm_bar {TYPE_2__* func; scalar_t__ bar2; } ;
struct TYPE_3__ {int (* wait ) (struct nvkm_bar*) ;int (* init ) (struct nvkm_bar*) ;} ;
struct TYPE_4__ {TYPE_1__ bar2; } ;


 int FUNC_0 (struct nvkm_bar*) ;
 int FUNC_1 (struct nvkm_bar*) ;

void
FUNC_2(struct nvkm_device *VAR_0)
{
 struct nvkm_bar *VAR_1 = VAR_0->bar;
 if (VAR_1 && VAR_1->bar2) {
  VAR_1->func->bar2.init(VAR_1);
  VAR_1->func->bar2.wait(VAR_1);
 }
}
