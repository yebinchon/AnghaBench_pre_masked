
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {int dummy; } ;
struct firedtv {int device; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct firedtv* priv; } ;







 int VAR_0 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct firedtv*,struct firedtv_tuner_status*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct firedtv*,void*) ;
 int FUNC_5 (struct firedtv*,void*) ;
 int FUNC_6 (struct firedtv*,void*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct dvb_device *VAR_4 = VAR_1->private_data;
 struct firedtv *VAR_5 = VAR_4->priv;
 struct firedtv_tuner_status VAR_6;
 int VAR_7;

 switch (VAR_2) {
 case 129:
  VAR_7 = FUNC_0(VAR_5);
  break;
 case 132:
  VAR_7 = FUNC_3(VAR_3);
  break;
 case 130:
  VAR_7 = FUNC_5(VAR_5, VAR_3);
  break;
 case 131:
  VAR_7 = FUNC_4(VAR_5, VAR_3);
  break;
 case 128:
  VAR_7 = FUNC_6(VAR_5, VAR_3);
  break;
 default:
  FUNC_2(VAR_5->device, "unhandled CA ioctl %u\n", VAR_2);
  VAR_7 = -VAR_0;
 }


 FUNC_1(VAR_5, &VAR_6);

 return VAR_7;
}
