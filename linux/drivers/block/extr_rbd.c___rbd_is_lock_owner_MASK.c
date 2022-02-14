
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {scalar_t__ lock_state; int lock_rwsem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct rbd_device *VAR_2)
{
 FUNC_0(&VAR_2->lock_rwsem);

 return VAR_2->lock_state == VAR_0 ||
        VAR_2->lock_state == VAR_1;
}
