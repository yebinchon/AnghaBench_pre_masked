
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct js_event {int dummy; } ;
struct joydev_client {size_t head; scalar_t__ startup; int tail; int fasync; int buffer_lock; struct js_event* buffer; struct joydev* joydev; } ;
struct joydev {scalar_t__ nabs; scalar_t__ nkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct joydev_client *VAR_3,
         struct js_event *VAR_4)
{
 struct joydev *VAR_5 = VAR_3->joydev;




 FUNC_1(&VAR_3->buffer_lock);

 VAR_3->buffer[VAR_3->head] = *VAR_4;

 if (VAR_3->startup == VAR_5->nabs + VAR_5->nkey) {
  VAR_3->head++;
  VAR_3->head &= VAR_0 - 1;
  if (VAR_3->tail == VAR_3->head)
   VAR_3->startup = 0;
 }

 FUNC_2(&VAR_3->buffer_lock);

 FUNC_0(&VAR_3->fasync, VAR_2, VAR_1);
}
