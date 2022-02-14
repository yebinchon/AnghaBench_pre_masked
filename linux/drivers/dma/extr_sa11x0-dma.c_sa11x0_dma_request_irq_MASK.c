
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*,int) ;
 int FUNC_2 (int,int ,int ,int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2, int VAR_3,
 void *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (VAR_5 <= 0)
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_1, 0, FUNC_0(&VAR_2->dev), VAR_4);
}
