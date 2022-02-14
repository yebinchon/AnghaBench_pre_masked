
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct dmxdev* priv; } ;
struct dmxdev {int mutex; int dvr_vb2_ctx; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmxdev*,unsigned long) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2,
       unsigned int VAR_3, void *VAR_4)
{
 struct dvb_device *VAR_5 = VAR_2->private_data;
 struct dmxdev *VAR_6 = VAR_5->priv;
 unsigned long VAR_7 = (unsigned long)VAR_4;
 int VAR_8;

 if (FUNC_8(&VAR_6->mutex))
  return -VAR_1;

 switch (VAR_3) {
 case 128:
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 FUNC_9(&VAR_6->mutex);
 return VAR_8;
}
