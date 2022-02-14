
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {int tuner; size_t index; int type; } ;
struct rtl2832_sdr_dev {int v4l2_subdev; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 struct v4l2_frequency_band* VAR_1 ;
 struct v4l2_frequency_band* VAR_2 ;
 int FUNC_2 (int *,char*,int,int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,struct v4l2_frequency_band*) ;
 struct rtl2832_sdr_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
  struct v4l2_frequency_band *VAR_7)
{
 struct rtl2832_sdr_dev *VAR_8 = FUNC_4(VAR_5);
 struct platform_device *VAR_9 = VAR_8->pdev;
 int VAR_10;

 FUNC_2(&VAR_9->dev, "tuner=%d type=%d index=%d\n",
  VAR_7->tuner, VAR_7->type, VAR_7->index);

 if (VAR_7->tuner == 0) {
  if (VAR_7->index >= FUNC_0(VAR_1))
   return -VAR_0;

  *VAR_7 = VAR_1[VAR_7->index];
  VAR_10 = 0;
 } else if (VAR_7->tuner == 1 &&
     FUNC_1(VAR_8->v4l2_subdev, VAR_4, VAR_3)) {
  VAR_10 = FUNC_3(VAR_8->v4l2_subdev, VAR_4, VAR_3, VAR_7);
 } else if (VAR_7->tuner == 1) {
  if (VAR_7->index >= FUNC_0(VAR_2))
   return -VAR_0;

  *VAR_7 = VAR_2[VAR_7->index];
  VAR_10 = 0;
 } else {
  VAR_10 = -VAR_0;
 }
 return VAR_10;
}
