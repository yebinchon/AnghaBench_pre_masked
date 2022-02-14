
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl2832_sdr_platform_data {struct dvb_frontend* dvb_frontend; } ;
struct rtl2832_sdr_dev {struct platform_device* pdev; } ;
struct TYPE_6__ {struct rtl2832_sdr_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_4__ {int (* sleep ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_2(struct rtl2832_sdr_dev *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->pdev;
 struct rtl2832_sdr_platform_data *VAR_2 = VAR_1->dev.platform_data;
 struct dvb_frontend *VAR_3 = VAR_2->dvb_frontend;

 FUNC_0(&VAR_1->dev, "\n");

 if (VAR_3->ops.tuner_ops.sleep)
  VAR_3->ops.tuner_ops.sleep(VAR_3);

 return;
}
