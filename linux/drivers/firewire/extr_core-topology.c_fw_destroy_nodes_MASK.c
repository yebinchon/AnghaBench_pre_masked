
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int lock; int * local_node; int color; } ;


 int FUNC_0 (struct fw_card*,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct fw_card *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 VAR_1->color++;
 if (VAR_1->local_node != ((void*)0))
  FUNC_0(VAR_1, VAR_1->local_node, VAR_0);
 VAR_1->local_node = ((void*)0);
 FUNC_2(&VAR_1->lock, VAR_2);
}
