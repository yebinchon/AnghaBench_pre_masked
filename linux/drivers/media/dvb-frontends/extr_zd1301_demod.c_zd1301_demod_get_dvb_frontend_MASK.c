
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
struct zd1301_demod_dev {struct dvb_frontend frontend; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct zd1301_demod_dev* FUNC_1 (struct platform_device*) ;

struct dvb_frontend *FUNC_2(struct platform_device *VAR_0)
{
 struct zd1301_demod_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 return &VAR_1->frontend;
}
