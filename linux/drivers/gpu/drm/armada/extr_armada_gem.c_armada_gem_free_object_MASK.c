
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_gem_object {TYPE_1__* dev; } ;
struct armada_private {int linear_lock; } ;
struct TYPE_6__ {scalar_t__ import_attach; int size; } ;
struct armada_gem_object {TYPE_2__ obj; scalar_t__ sgt; scalar_t__ addr; struct armada_gem_object* linear; scalar_t__ page; } ;
struct TYPE_5__ {struct armada_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct armada_gem_object*) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct armada_gem_object*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 struct armada_gem_object* FUNC_7 (struct drm_gem_object*) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct armada_gem_object*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct drm_gem_object *VAR_1)
{
 struct armada_gem_object *VAR_2 = FUNC_7(VAR_1);
 struct armada_private *VAR_3 = VAR_1->dev->dev_private;

 FUNC_0("release obj %p\n", VAR_2);

 FUNC_3(&VAR_2->obj);

 FUNC_11(&VAR_3->linear_lock);

 if (VAR_2->page) {

  unsigned int VAR_4 = FUNC_8(VAR_2->obj.size);
  FUNC_1(VAR_2->page, VAR_4);
 } else if (VAR_2->linear) {

  FUNC_12(&VAR_3->linear_lock);
  FUNC_5(VAR_2->linear);
  FUNC_13(&VAR_3->linear_lock);
  FUNC_10(VAR_2->linear);
  if (VAR_2->addr)
   FUNC_9(VAR_2->addr);
 }

 if (VAR_2->obj.import_attach) {

  if (VAR_2->sgt)
   FUNC_2(VAR_2->obj.import_attach,
       VAR_2->sgt, VAR_0);
  FUNC_6(&VAR_2->obj, ((void*)0));
 }

 FUNC_4(&VAR_2->obj);

 FUNC_10(VAR_2);
}
