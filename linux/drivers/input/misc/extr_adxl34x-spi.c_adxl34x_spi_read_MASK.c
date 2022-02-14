
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 unsigned char FUNC_0 (unsigned char) ;
 int FUNC_1 (struct spi_device*,unsigned char) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, unsigned char VAR_1)
{
 struct spi_device *VAR_2 = FUNC_2(VAR_0);
 unsigned char VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_3);
}
