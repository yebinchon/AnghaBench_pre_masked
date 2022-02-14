
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ops; } ;
struct qxl_release {TYPE_1__ base; int bos; int id; scalar_t__ surface_release_id; int type; } ;
struct qxl_device {int release_idr_lock; int release_idr; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct qxl_release*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qxl_release*) ;
 int FUNC_8 (struct qxl_device*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct qxl_device *VAR_0,
   struct qxl_release *VAR_1)
{
 FUNC_0("release %d, type %d\n", VAR_1->id, VAR_1->type);

 if (VAR_1->surface_release_id)
  FUNC_8(VAR_0, VAR_1->surface_release_id);

 FUNC_9(&VAR_0->release_idr_lock);
 FUNC_4(&VAR_0->release_idr, VAR_1->id);
 FUNC_10(&VAR_0->release_idr_lock);

 if (VAR_1->base.ops) {
  FUNC_1(FUNC_6(&VAR_1->bos));
  FUNC_7(VAR_1);

  FUNC_3(&VAR_1->base);
  FUNC_2(&VAR_1->base);
 } else {
  FUNC_7(VAR_1);
  FUNC_5(VAR_1);
 }
}
