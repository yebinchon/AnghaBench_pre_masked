
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_controller {int num_chans; int poll_hrt; scalar_t__ txdone_poll; int * chans; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mbox_controller *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_3(&VAR_0);

 FUNC_1(&VAR_1->node);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_chans; VAR_2++)
  FUNC_2(&VAR_1->chans[VAR_2]);

 if (VAR_1->txdone_poll)
  FUNC_0(&VAR_1->poll_hrt);

 FUNC_4(&VAR_0);
}
