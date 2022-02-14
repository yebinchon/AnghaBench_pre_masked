
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int ,int ,int ,void*) ;
 int VAR_6 ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_7, struct platform_device *VAR_8)
{
 int VAR_9;
 int VAR_10;


 VAR_9 = FUNC_3(VAR_8, 0);
 FUNC_0(&VAR_8->dev, "got irq %d\n", VAR_9);
 if (!VAR_9)
  return -VAR_3;

 VAR_10 = FUNC_2(&VAR_8->dev, VAR_9, VAR_6, VAR_4,
         VAR_2, VAR_7);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "unable to request irq %d\n", VAR_9);
  return VAR_10;
 }


 FUNC_4(VAR_5, VAR_0,
      VAR_1,
      VAR_1);

 return 0;
}
