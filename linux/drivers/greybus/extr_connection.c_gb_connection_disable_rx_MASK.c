
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_connection {scalar_t__ state; int mutex; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gb_connection*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gb_connection*) ;

void FUNC_6(struct gb_connection *VAR_3)
{
 FUNC_1(&VAR_3->mutex);

 FUNC_3(&VAR_3->lock);
 if (VAR_3->state != VAR_1) {
  FUNC_4(&VAR_3->lock);
  goto out_unlock;
 }
 VAR_3->state = VAR_2;
 FUNC_0(VAR_3, -VAR_0);
 FUNC_4(&VAR_3->lock);

 FUNC_5(VAR_3);

out_unlock:
 FUNC_2(&VAR_3->mutex);
}
