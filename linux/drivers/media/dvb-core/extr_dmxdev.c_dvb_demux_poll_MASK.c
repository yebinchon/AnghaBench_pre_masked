
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct dmxdev_filter* private_data; } ;
struct TYPE_4__ {scalar_t__ error; int queue; } ;
struct dmxdev_filter {scalar_t__ state; TYPE_2__ buffer; int vb2_ctx; TYPE_1__* dev; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_3__ {scalar_t__ exit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct file*,int *) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_7, poll_table *VAR_8)
{
 struct dmxdev_filter *VAR_9 = VAR_7->private_data;
 __poll_t VAR_10 = 0;

 FUNC_3(VAR_7, &VAR_9->buffer.queue, VAR_8);

 if ((!VAR_9) || VAR_9->dev->exit)
  return VAR_3;
 if (FUNC_1(&VAR_9->vb2_ctx))
  return FUNC_2(&VAR_9->vb2_ctx, VAR_7, VAR_8);

 if (VAR_9->state != VAR_1 &&
     VAR_9->state != VAR_0 &&
     VAR_9->state != VAR_2)
  return 0;

 if (VAR_9->buffer.error)
  VAR_10 |= (VAR_4 | VAR_6 | VAR_5 | VAR_3);

 if (!FUNC_0(&VAR_9->buffer))
  VAR_10 |= (VAR_4 | VAR_6 | VAR_5);

 return VAR_10;
}
