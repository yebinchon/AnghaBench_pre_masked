
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl {int dummy; } ;
struct rtl2832_sdr_platform_data {struct dvb_frontend* dvb_frontend; } ;
struct rtl2832_sdr_dev {scalar_t__ f_tuner; int v4l2_subdev; int flags; scalar_t__ f_adc; int hdl; struct platform_device* pdev; } ;
struct TYPE_6__ {struct rtl2832_sdr_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_4__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {scalar_t__ frequency; scalar_t__ bandwidth_hz; int delivery_system; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 struct v4l2_ctrl* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct v4l2_ctrl*) ;
 int FUNC_6 (struct v4l2_ctrl*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct rtl2832_sdr_dev *VAR_6)
{
 struct platform_device *VAR_7 = VAR_6->pdev;
 struct rtl2832_sdr_platform_data *VAR_8 = VAR_7->dev.platform_data;
 struct dvb_frontend *VAR_9 = VAR_8->dvb_frontend;
 struct dtv_frontend_properties *VAR_10 = &VAR_9->dtv_property_cache;
 struct v4l2_ctrl *VAR_11;
 struct v4l2_ctrl *VAR_12;




 if (VAR_6->f_tuner == 0)
  return 0;




 VAR_11 = FUNC_4(&VAR_6->hdl,
     VAR_3);
 VAR_12 = FUNC_4(&VAR_6->hdl, VAR_2);
 if (FUNC_5(VAR_11)) {
  VAR_10->bandwidth_hz = VAR_6->f_adc;
  FUNC_6(VAR_12, VAR_6->f_adc);
 } else {
  VAR_10->bandwidth_hz = FUNC_5(VAR_12);
 }

 VAR_10->frequency = VAR_6->f_tuner;
 VAR_10->delivery_system = VAR_1;

 FUNC_1(&VAR_7->dev, "frequency=%u bandwidth=%d\n",
  VAR_10->frequency, VAR_10->bandwidth_hz);

 if (!FUNC_3(VAR_0, &VAR_6->flags))
  return 0;

 if (!FUNC_0(VAR_6->v4l2_subdev, VAR_5, VAR_4)) {
  if (VAR_9->ops.tuner_ops.set_params)
   VAR_9->ops.tuner_ops.set_params(VAR_9);
 }

 return 0;
}
