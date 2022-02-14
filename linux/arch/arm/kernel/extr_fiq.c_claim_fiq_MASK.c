
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fiq_handler {int (* fiq_op ) (int ,int) ;struct fiq_handler* next; int dev_id; } ;


 int VAR_0 ;
 struct fiq_handler* VAR_1 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(struct fiq_handler *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1) {
  VAR_3 = -VAR_0;

  if (VAR_1->fiq_op != ((void*)0))
   VAR_3 = VAR_1->fiq_op(VAR_1->dev_id, 1);
 }

 if (!VAR_3) {
  VAR_2->next = VAR_1;
  VAR_1 = VAR_2;
 }

 return VAR_3;
}
