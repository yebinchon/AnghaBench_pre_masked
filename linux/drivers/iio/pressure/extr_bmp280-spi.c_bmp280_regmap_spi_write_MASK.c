
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*,void const*,int) ;
 int FUNC_1 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const void *VAR_1,
                                   size_t VAR_2)
{
 struct device *VAR_3 = VAR_0;
 struct spi_device *VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5[2];

 FUNC_0(VAR_5, VAR_1, 2);




 VAR_5[0] &= ~0x80;

 return FUNC_1(VAR_4, VAR_5, 2, ((void*)0), 0);
}
