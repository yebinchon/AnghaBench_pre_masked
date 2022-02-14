
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_connection {scalar_t__ state; int mutex; int mode_switch; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gb_connection*,int ) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct gb_connection*) ;

void FUNC_15(struct gb_connection *VAR_3)
{
 FUNC_10(&VAR_3->mutex);

 if (VAR_3->state == VAR_1)
  goto out_unlock;

 FUNC_14(VAR_3);

 FUNC_12(&VAR_3->lock);
 VAR_3->state = VAR_2;
 FUNC_0(VAR_3, -VAR_0);
 FUNC_13(&VAR_3->lock);

 FUNC_7(VAR_3);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_8(VAR_3);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3);

 VAR_3->state = VAR_1;


 if (!VAR_3->mode_switch) {
  FUNC_9(VAR_3);
  FUNC_5(VAR_3);

  FUNC_6(VAR_3);
 }

out_unlock:
 FUNC_11(&VAR_3->mutex);
}
