
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct zd1301_demod_dev {struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;int (* get_if_frequency ) (struct dvb_frontend*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int bandwidth_hz; int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; struct zd1301_demod_dev* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int*) ;
 int FUNC_3 (struct zd1301_demod_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct zd1301_demod_dev *VAR_2 = VAR_1->demodulator_priv;
 struct platform_device *VAR_3 = VAR_2->pdev;
 struct dtv_frontend_properties *VAR_4 = &VAR_1->dtv_property_cache;
 int VAR_5;
 u32 VAR_6;
 u8 VAR_7;

 FUNC_0(&VAR_3->dev, "frequency=%u bandwidth_hz=%u\n",
  VAR_4->frequency, VAR_4->bandwidth_hz);


 if (VAR_1->ops.tuner_ops.set_params &&
     VAR_1->ops.tuner_ops.get_if_frequency) {
  VAR_5 = VAR_1->ops.tuner_ops.set_params(VAR_1);
  if (VAR_5)
   goto err;
  VAR_5 = VAR_1->ops.tuner_ops.get_if_frequency(VAR_1, &VAR_6);
  if (VAR_5)
   goto err;
 } else {
  VAR_5 = -VAR_0;
  goto err;
 }

 FUNC_0(&VAR_3->dev, "if_frequency=%u\n", VAR_6);
 if (VAR_6 != 36150000) {
  VAR_5 = -VAR_0;
  goto err;
 }

 switch (VAR_4->bandwidth_hz) {
 case 6000000:
  VAR_7 = 0x78;
  break;
 case 7000000:
  VAR_7 = 0x68;
  break;
 case 8000000:
  VAR_7 = 0x58;
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_5 = FUNC_3(VAR_2, 0x6a60, 0x11);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a47, 0x46);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a48, 0x46);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a4a, 0x15);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a4b, 0x63);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a5b, 0x99);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a3b, 0x10);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6806, 0x01);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a41, 0x08);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a42, 0x46);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a44, 0x14);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a45, 0x67);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a38, 0x00);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a4c, 0x52);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a49, 0x2a);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6840, 0x2e);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a50, VAR_7);
 if (VAR_5)
  goto err;
 VAR_5 = FUNC_3(VAR_2, 0x6a38, 0x07);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
