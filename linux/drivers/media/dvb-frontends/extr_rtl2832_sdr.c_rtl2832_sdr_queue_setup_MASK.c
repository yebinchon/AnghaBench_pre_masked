
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int num_buffers; } ;
struct rtl2832_sdr_dev {int buffersize; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 struct rtl2832_sdr_dev* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_0,
  unsigned int *VAR_1,
  unsigned int *VAR_2, unsigned int VAR_3[], struct device *VAR_4[])
{
 struct rtl2832_sdr_dev *VAR_5 = FUNC_2(VAR_0);
 struct platform_device *VAR_6 = VAR_5->pdev;

 FUNC_1(&VAR_6->dev, "nbuffers=%d\n", *VAR_1);


 if (VAR_0->num_buffers + *VAR_1 < 8)
  *VAR_1 = 8 - VAR_0->num_buffers;
 *VAR_2 = 1;
 VAR_3[0] = FUNC_0(VAR_5->buffersize);
 FUNC_1(&VAR_6->dev, "nbuffers=%d sizes[0]=%d\n", *VAR_1, VAR_3[0]);
 return 0;
}
