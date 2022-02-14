
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1301_demod_dev {struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct dvb_frontend_tune_settings {int min_delay_ms; } ;
struct dvb_frontend {struct zd1301_demod_dev* demodulator_priv; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
       struct dvb_frontend_tune_settings *VAR_1)
{
 struct zd1301_demod_dev *VAR_2 = VAR_0->demodulator_priv;
 struct platform_device *VAR_3 = VAR_2->pdev;

 FUNC_0(&VAR_3->dev, "\n");


 VAR_1->min_delay_ms = 400;

 return 0;
}
