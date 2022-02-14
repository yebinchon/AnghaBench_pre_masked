
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct rb4xx_cpld {int dummy; } ;


 struct rb4xx_cpld* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct rb4xx_cpld*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 struct rb4xx_cpld *VAR_2;

 VAR_0 = ((void*)0);
 VAR_2 = FUNC_0(&VAR_1->dev);
 FUNC_1(&VAR_1->dev, ((void*)0));
 FUNC_2(VAR_2);

 return 0;
}
