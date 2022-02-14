
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {struct nvkm_bar* bar; } ;
struct TYPE_4__ {scalar_t__ oneinit; } ;
struct nvkm_bar {int bar2; TYPE_2__* func; TYPE_1__ subdev; } ;
struct TYPE_6__ {int (* wait ) (struct nvkm_bar*) ;int (* init ) (struct nvkm_bar*) ;} ;
struct TYPE_5__ {TYPE_3__ bar2; } ;


 int FUNC_0 (struct nvkm_bar*) ;
 int FUNC_1 (struct nvkm_bar*) ;

void
FUNC_2(struct nvkm_device *VAR_0)
{
 struct nvkm_bar *VAR_1 = VAR_0->bar;
 if (VAR_1 && VAR_1->subdev.oneinit && !VAR_1->bar2 && VAR_1->func->bar2.init) {
  VAR_1->func->bar2.init(VAR_1);
  VAR_1->func->bar2.wait(VAR_1);
  VAR_1->bar2 = 1;
 }
}
