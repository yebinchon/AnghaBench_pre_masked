
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_bar {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_5__ {int oneinit; int device; } ;
struct TYPE_8__ {TYPE_1__ subdev; TYPE_3__* func; } ;
struct gf100_bar {int * bar; TYPE_4__ base; } ;
struct TYPE_6__ {scalar_t__ init; } ;
struct TYPE_7__ {TYPE_2__ bar2; } ;


 struct gf100_bar* FUNC_0 (struct nvkm_bar*) ;
 int FUNC_1 (struct gf100_bar*,int *,struct lock_class_key*,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct nvkm_bar *VAR_0)
{
 static struct lock_class_key VAR_1;
 static struct lock_class_key VAR_2;
 struct gf100_bar *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;


 if (VAR_3->base.func->bar2.init) {
  VAR_4 = FUNC_1(VAR_3, &VAR_3->bar[0], &VAR_2, 3);
  if (VAR_4)
   return VAR_4;

  VAR_3->base.subdev.oneinit = 1;
  FUNC_2(VAR_3->base.subdev.device);
 }


 VAR_4 = FUNC_1(VAR_3, &VAR_3->bar[1], &VAR_1, 1);
 if (VAR_4)
  return VAR_4;

 return 0;
}
