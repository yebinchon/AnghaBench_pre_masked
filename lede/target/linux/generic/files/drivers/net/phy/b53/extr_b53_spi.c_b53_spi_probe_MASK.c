
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct b53_device {scalar_t__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct b53_device* FUNC_0 (TYPE_1__*,int *,struct spi_device*) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (struct spi_device*,struct b53_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 struct b53_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 if (VAR_2->dev.platform_data)
  VAR_3->pdata = VAR_2->dev.platform_data;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2, VAR_3);

 return 0;
}
