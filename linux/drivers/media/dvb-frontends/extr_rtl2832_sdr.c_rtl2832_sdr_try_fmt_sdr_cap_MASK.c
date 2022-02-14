
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pixelformat; int buffersize; int reserved; } ;
struct TYPE_5__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct rtl2832_sdr_dev {int num_formats; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ pixelformat; int buffersize; } ;


 int FUNC_0 (int *,char*,char*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 struct rtl2832_sdr_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
  struct v4l2_format *VAR_3)
{
 struct rtl2832_sdr_dev *VAR_4 = FUNC_2(VAR_1);
 struct platform_device *VAR_5 = VAR_4->pdev;
 int VAR_6;

 FUNC_0(&VAR_5->dev, "pixelformat fourcc %4.4s\n",
  (char *)&VAR_3->fmt.sdr.pixelformat);

 FUNC_1(VAR_3->fmt.sdr.reserved, 0, sizeof(VAR_3->fmt.sdr.reserved));
 for (VAR_6 = 0; VAR_6 < VAR_4->num_formats; VAR_6++) {
  if (VAR_0[VAR_6].pixelformat == VAR_3->fmt.sdr.pixelformat) {
   VAR_3->fmt.sdr.buffersize = VAR_0[VAR_6].buffersize;
   return 0;
  }
 }

 VAR_3->fmt.sdr.pixelformat = VAR_0[0].pixelformat;
 VAR_3->fmt.sdr.buffersize = VAR_0[0].buffersize;

 return 0;
}
