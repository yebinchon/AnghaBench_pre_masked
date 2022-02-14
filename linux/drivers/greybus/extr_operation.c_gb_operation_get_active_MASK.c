
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {int links; int active; struct gb_connection* connection; } ;
struct gb_connection {int state; int lock; int operations; } ;


 int VAR_0 ;



 int FUNC_0 (struct gb_operation*) ;
 int FUNC_1 (struct gb_operation*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct gb_operation*) ;

__attribute__((used)) static int FUNC_6(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);
 switch (VAR_2->state) {
 case 129:
  break;
 case 128:
  if (FUNC_1(VAR_1))
   goto err_unlock;
  break;
 case 130:
  if (!FUNC_0(VAR_1))
   goto err_unlock;
  break;
 default:
  goto err_unlock;
 }

 if (VAR_1->active++ == 0)
  FUNC_2(&VAR_1->links, &VAR_2->operations);

 FUNC_5(VAR_1);

 FUNC_4(&VAR_2->lock, VAR_3);

 return 0;

err_unlock:
 FUNC_4(&VAR_2->lock, VAR_3);

 return -VAR_0;
}
