
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dvb_device* private_data; } ;
struct dvb_device {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (struct file*,unsigned int,unsigned long,int ) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_2, unsigned int VAR_3,
          unsigned long VAR_4)
{
 struct dvb_device *VAR_5 = VAR_2->private_data;

 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);
}
