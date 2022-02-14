
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_8)
{
 struct resource *VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_2, 0);
 if (!VAR_9)
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_8->dev, VAR_9->start, FUNC_3(VAR_9));
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = VAR_3 | VAR_4;
 FUNC_4(VAR_6, VAR_5);

 return FUNC_1(&VAR_8->dev, &VAR_7);
}
