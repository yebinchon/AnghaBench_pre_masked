
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int queue; int error; } ;
struct dmxdev_filter {TYPE_1__ buffer; TYPE_2__* dev; int state; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dmxdev_filter* VAR_2 ;
 struct dmxdev_filter* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct dmxdev_filter *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 VAR_5->buffer.error = -VAR_1;
 FUNC_1(&VAR_5->dev->lock);
 VAR_5->state = VAR_0;
 FUNC_2(&VAR_5->dev->lock);
 FUNC_3(&VAR_5->buffer.queue);
}
