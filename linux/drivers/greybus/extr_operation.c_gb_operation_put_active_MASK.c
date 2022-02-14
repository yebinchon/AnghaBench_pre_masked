
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {scalar_t__ active; int waiters; int links; struct gb_connection* connection; } ;
struct gb_connection {int lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_4(VAR_1);

 if (--VAR_1->active == 0) {
  FUNC_1(&VAR_1->links);
  if (FUNC_0(&VAR_1->waiters))
   FUNC_5(&VAR_0);
 }
 FUNC_3(&VAR_2->lock, VAR_3);
}
