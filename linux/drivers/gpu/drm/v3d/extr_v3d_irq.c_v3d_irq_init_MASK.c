
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int cores; int single_irq_line; int dev; int pdev; int overflow_mem_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int,int ,int ,char*,struct v3d_dev*) ;
 int FUNC_5 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct v3d_dev*) ;
 int VAR_8 ;

int
FUNC_7(struct v3d_dev *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 FUNC_0(&VAR_9->overflow_mem_work, VAR_8);




 for (VAR_12 = 0; VAR_12 < VAR_9->cores; VAR_12++)
  FUNC_1(VAR_12, VAR_3, VAR_2);
 FUNC_2(VAR_4, VAR_5);

 VAR_10 = FUNC_5(VAR_9->pdev, 1);
 if (VAR_10 == -VAR_0)
  return VAR_10;
 if (VAR_10 > 0) {
  VAR_11 = FUNC_4(VAR_9->dev, VAR_10,
           VAR_7, VAR_1,
           "v3d_core0", VAR_9);
  if (VAR_11)
   goto fail;
  VAR_11 = FUNC_4(VAR_9->dev, FUNC_5(VAR_9->pdev, 0),
           VAR_6, VAR_1,
           "v3d_hub", VAR_9);
  if (VAR_11)
   goto fail;
 } else {
  VAR_9->single_irq_line = 1;

  VAR_11 = FUNC_4(VAR_9->dev, FUNC_5(VAR_9->pdev, 0),
           VAR_7, VAR_1,
           "v3d", VAR_9);
  if (VAR_11)
   goto fail;
 }

 FUNC_6(VAR_9);
 return 0;

fail:
 if (VAR_11 != -VAR_0)
  FUNC_3(VAR_9->dev, "IRQ setup failed: %d\n", VAR_11);
 return VAR_11;
}
