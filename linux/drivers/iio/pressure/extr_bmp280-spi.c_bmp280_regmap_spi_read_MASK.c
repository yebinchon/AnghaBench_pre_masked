
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_device*,void const*,size_t,void*,size_t) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const void *VAR_1,
                                  size_t VAR_2, void *VAR_3, size_t VAR_4)
{
 struct device *VAR_5 = VAR_0;
 struct spi_device *VAR_6 = FUNC_1(VAR_5);

 return FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
}
