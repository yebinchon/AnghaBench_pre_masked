
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int lock_rwsem; } ;


 scalar_t__ FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rbd_device *VAR_0)
{
 FUNC_2(&VAR_0->lock_rwsem);
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0);
 FUNC_3(&VAR_0->lock_rwsem);
}
