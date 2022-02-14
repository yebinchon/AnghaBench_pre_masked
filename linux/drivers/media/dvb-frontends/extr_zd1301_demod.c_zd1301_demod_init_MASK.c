
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1301_demod_dev {struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct dvb_frontend {struct zd1301_demod_dev* demodulator_priv; } ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct zd1301_demod_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct zd1301_demod_dev *VAR_2 = VAR_1->demodulator_priv;
 struct platform_device *VAR_3 = VAR_2->pdev;
 int VAR_4;

 FUNC_0(&VAR_3->dev, "\n");

 VAR_4 = FUNC_1(VAR_2, 0x6840, 0x26);
 if (VAR_4)
  goto err;
 VAR_4 = FUNC_1(VAR_2, 0x68e0, 0xff);
 if (VAR_4)
  goto err;
 VAR_4 = FUNC_1(VAR_2, 0x68e2, 0xd8);
 if (VAR_4)
  goto err;
 VAR_4 = FUNC_1(VAR_2, 0x6849, 0x4e);
 if (VAR_4)
  goto err;
 VAR_4 = FUNC_1(VAR_2, 0x684e, 0x01);
 if (VAR_4)
  goto err;
 VAR_4 = FUNC_1(VAR_2, 0x6a43, VAR_0);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
