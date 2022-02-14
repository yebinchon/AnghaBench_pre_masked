
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int*,int,int*,int) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 u16 VAR_3;
 struct spi_device *VAR_4 = FUNC_1(VAR_0);

 VAR_3 = 0x8000 | (VAR_1 << 8);
 VAR_2 = FUNC_0(VAR_4, &VAR_3, sizeof(VAR_3), &VAR_3,
      sizeof(VAR_3));
 if (VAR_2)
  return VAR_2;
 return VAR_3 & 0xff;
}
