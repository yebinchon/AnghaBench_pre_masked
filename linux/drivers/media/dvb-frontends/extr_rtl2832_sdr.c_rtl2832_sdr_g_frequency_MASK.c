
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int tuner; void* type; int frequency; } ;
struct rtl2832_sdr_dev {int f_tuner; int v4l2_subdev; int f_adc; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,char*,int,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,struct v4l2_frequency*) ;
 struct rtl2832_sdr_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
  struct v4l2_frequency *VAR_7)
{
 struct rtl2832_sdr_dev *VAR_8 = FUNC_3(VAR_5);
 struct platform_device *VAR_9 = VAR_8->pdev;
 int VAR_10;

 FUNC_1(&VAR_9->dev, "tuner=%d type=%d\n", VAR_7->tuner, VAR_7->type);

 if (VAR_7->tuner == 0) {
  VAR_7->frequency = VAR_8->f_adc;
  VAR_7->type = VAR_1;
  VAR_10 = 0;
 } else if (VAR_7->tuner == 1 &&
     FUNC_0(VAR_8->v4l2_subdev, VAR_4, VAR_3)) {
  VAR_7->type = VAR_2;
  VAR_10 = FUNC_2(VAR_8->v4l2_subdev, VAR_4, VAR_3, VAR_7);
 } else if (VAR_7->tuner == 1) {
  VAR_7->frequency = VAR_8->f_tuner;
  VAR_7->type = VAR_2;
  VAR_10 = 0;
 } else {
  VAR_10 = -VAR_0;
 }
 return VAR_10;
}
