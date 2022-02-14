
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {struct rbd_device* parent_spec; scalar_t__ parent_overlap; struct rbd_device* parent; } ;


 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (struct rbd_device*) ;

__attribute__((used)) static void FUNC_4(struct rbd_device *VAR_0)
{
 while (VAR_0->parent) {
  struct rbd_device *VAR_1 = VAR_0;
  struct rbd_device *VAR_2 = VAR_1->parent;
  struct rbd_device *VAR_3;





  while (VAR_2 && (VAR_3 = VAR_2->parent)) {
   VAR_1 = VAR_2;
   VAR_2 = VAR_3;
  }
  FUNC_0(VAR_2);
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  VAR_1->parent = ((void*)0);
  VAR_1->parent_overlap = 0;

  FUNC_0(VAR_1->parent_spec);
  FUNC_3(VAR_1->parent_spec);
  VAR_1->parent_spec = ((void*)0);
 }
}
