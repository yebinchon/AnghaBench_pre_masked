
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_cdma {int running; int torndown; int push_buffer; int event; int sync_queue; int complete; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct host1x_cdma *VAR_1)
{
 int VAR_2;

 FUNC_3(&VAR_1->lock);
 FUNC_2(&VAR_1->complete);

 FUNC_0(&VAR_1->sync_queue);

 VAR_1->event = VAR_0;
 VAR_1->running = 0;
 VAR_1->torndown = 0;

 VAR_2 = FUNC_1(&VAR_1->push_buffer);
 if (VAR_2)
  return VAR_2;

 return 0;
}
