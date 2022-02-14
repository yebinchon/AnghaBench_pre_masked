
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int lock_rwsem; } ;


 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct rbd_device *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->lock_rwsem);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock_rwsem);
 return VAR_1;
}
