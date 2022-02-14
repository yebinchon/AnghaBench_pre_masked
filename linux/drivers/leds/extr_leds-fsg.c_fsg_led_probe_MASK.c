
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_9)
{
 int VAR_10;


 VAR_7 = (unsigned short *) FUNC_1(&VAR_9->dev,
      FUNC_0(2), 512);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = 0xffff;
 *VAR_7 = VAR_8;

 VAR_10 = FUNC_2(&VAR_9->dev, &VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_9->dev, &VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_9->dev, &VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_9->dev, &VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_9->dev, &VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_9->dev, &VAR_1);
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_10;
}
