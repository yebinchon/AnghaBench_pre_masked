
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; } ;
struct rtl2832_sdr_dev {int v4l2_subdev; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,struct v4l2_tuner const*) ;
 struct rtl2832_sdr_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
  const struct v4l2_tuner *VAR_5)
{
 struct rtl2832_sdr_dev *VAR_6 = FUNC_3(VAR_3);
 struct platform_device *VAR_7 = VAR_6->pdev;
 int VAR_8;

 FUNC_1(&VAR_7->dev, "\n");

 if (VAR_5->index == 0) {
  VAR_8 = 0;
 } else if (VAR_5->index == 1 &&
     FUNC_0(VAR_6->v4l2_subdev, VAR_2, VAR_1)) {
  VAR_8 = FUNC_2(VAR_6->v4l2_subdev, VAR_2, VAR_1, VAR_5);
 } else if (VAR_5->index == 1) {
  VAR_8 = 0;
 } else {
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
