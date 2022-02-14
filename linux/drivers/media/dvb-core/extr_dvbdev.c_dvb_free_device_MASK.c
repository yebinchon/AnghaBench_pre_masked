
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_device {struct dvb_device* fops; } ;


 int FUNC_0 (struct dvb_device*) ;

void FUNC_1(struct dvb_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0 (VAR_0->fops);
 FUNC_0 (VAR_0);
}
