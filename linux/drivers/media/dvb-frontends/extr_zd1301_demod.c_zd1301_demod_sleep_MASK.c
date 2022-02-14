
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1301_demod_dev {struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct dvb_frontend {struct zd1301_demod_dev* demodulator_priv; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct zd1301_demod_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct zd1301_demod_dev *VAR_1 = VAR_0->demodulator_priv;
 struct platform_device *VAR_2 = VAR_1->pdev;
 int VAR_3;

 FUNC_0(&VAR_2->dev, "\n");

 VAR_3 = FUNC_1(VAR_1, 0x6a43, 0x70);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, 0x684e, 0x00);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, 0x6849, 0x00);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, 0x68e2, 0xd7);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, 0x68e0, 0x39);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, 0x6840, 0x21);
 if (VAR_3)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_2->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
