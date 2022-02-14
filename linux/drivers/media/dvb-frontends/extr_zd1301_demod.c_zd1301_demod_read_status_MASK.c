
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd1301_demod_dev {scalar_t__ gain; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct dvb_frontend {struct zd1301_demod_dev* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct zd1301_demod_dev*,int,int*) ;
 int FUNC_2 (struct zd1301_demod_dev*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_6,
        enum fe_status *VAR_7)
{
 struct zd1301_demod_dev *VAR_8 = VAR_6->demodulator_priv;
 struct platform_device *VAR_9 = VAR_8->pdev;
 int VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_1(VAR_8, 0x6a24, &VAR_11);
 if (VAR_10)
  goto err;
 if (VAR_11 > 0x00 && VAR_11 < 0x20)
  *VAR_7 = VAR_2 | VAR_0 | VAR_4 |
     VAR_3 | VAR_1;
 else
  *VAR_7 = 0;

 FUNC_0(&VAR_9->dev, "lock byte=%02x\n", VAR_11);
 if (VAR_8->gain != VAR_5) {
  VAR_8->gain = VAR_5;

  VAR_10 = FUNC_2(VAR_8, 0x6a43, VAR_8->gain);
  if (VAR_10)
   goto err;
 }

 return 0;
err:
 FUNC_0(&VAR_9->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
