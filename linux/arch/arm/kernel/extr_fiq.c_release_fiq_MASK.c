
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fiq_handler {struct fiq_handler* next; int dev_id; scalar_t__ (* fiq_op ) (int ,int ) ;int name; } ;


 struct fiq_handler* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(struct fiq_handler *VAR_1)
{
 if (VAR_0 != VAR_1) {
  FUNC_1("%s FIQ trying to release %s FIQ\n",
         VAR_1->name, VAR_0->name);
  FUNC_0();
  return;
 }

 do
  VAR_0 = VAR_0->next;
 while (VAR_0->fiq_op(VAR_0->dev_id, 0));
}
