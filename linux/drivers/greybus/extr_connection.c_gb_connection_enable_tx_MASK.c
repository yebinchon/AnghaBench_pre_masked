
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_connection {scalar_t__ state; int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gb_connection*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gb_connection*) ;

int FUNC_4(struct gb_connection *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_3->mutex);

 if (VAR_3->state == VAR_1) {
  VAR_4 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_3->state == VAR_2)
  goto out_unlock;

 VAR_4 = FUNC_0(VAR_3, 0);
 if (!VAR_4)
  FUNC_3(VAR_3);

out_unlock:
 FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
