
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_connection {scalar_t__ state; int mutex; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gb_connection*,int ) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct gb_connection*) ;

void FUNC_10(struct gb_connection *VAR_2)
{
 FUNC_5(&VAR_2->mutex);

 if (VAR_2->state == VAR_1)
  goto out_unlock;

 FUNC_9(VAR_2);

 FUNC_7(&VAR_2->lock);
 VAR_2->state = VAR_1;
 FUNC_0(VAR_2, -VAR_0);
 FUNC_8(&VAR_2->lock);

 FUNC_3(VAR_2);

 FUNC_4(VAR_2);
 FUNC_1(VAR_2);

 FUNC_2(VAR_2);
out_unlock:
 FUNC_6(&VAR_2->mutex);
}
