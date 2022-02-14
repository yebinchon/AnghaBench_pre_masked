
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 != VAR_0)
  return -VAR_4;


 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6 == VAR_3)
  return FUNC_0(VAR_5, VAR_2);

 return 0;
}
