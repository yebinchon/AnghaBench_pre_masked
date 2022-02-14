
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {scalar_t__ state; int users; int timer; int type; int vb2_ctx; int buffer; int mutex; struct dmxdev* priv; } ;
struct dmxdev_filter {scalar_t__ state; int users; int timer; int type; int vb2_ctx; int buffer; int mutex; struct dmxdev* priv; } ;
struct dmxdev {int filternum; int may_do_mmap; int mutex; struct dvb_device* filter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dvb_device*,int ) ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_8, struct file *VAR_9)
{
 struct dvb_device *VAR_10 = VAR_9->private_data;
 struct dmxdev *VAR_11 = VAR_10->priv;
 int VAR_12;
 struct dmxdev_filter *VAR_13;

 if (!VAR_11->filter)
  return -VAR_3;

 if (FUNC_4(&VAR_11->mutex))
  return -VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_11->filternum; VAR_12++)
  if (VAR_11->filter[VAR_12].state == VAR_1)
   break;

 if (VAR_12 == VAR_11->filternum) {
  FUNC_5(&VAR_11->mutex);
  return -VAR_4;
 }

 VAR_13 = &VAR_11->filter[VAR_12];
 FUNC_3(&VAR_13->mutex);
 VAR_9->private_data = VAR_13;




 VAR_11->may_do_mmap = 0;


 FUNC_1(&VAR_13->buffer, ((void*)0), 8192);
 FUNC_2(&VAR_13->vb2_ctx, "demux_filter",
       VAR_9->f_flags & VAR_6);
 VAR_13->type = VAR_2;
 FUNC_0(VAR_13, VAR_0);
 FUNC_6(&VAR_13->timer, VAR_7, 0);

 VAR_10->users++;

 FUNC_5(&VAR_11->mutex);
 return 0;
}
