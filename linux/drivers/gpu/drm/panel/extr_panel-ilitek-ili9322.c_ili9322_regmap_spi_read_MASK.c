
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,size_t,size_t) ;
 int FUNC_1 (int*,void const*,int) ;
 int FUNC_2 (struct spi_device*,int*,int,void*,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const void *VAR_1,
       size_t VAR_2, void *VAR_3, size_t VAR_4)
{
 struct device *VAR_5 = VAR_0;
 struct spi_device *VAR_6 = FUNC_3(VAR_5);
 u8 VAR_7[1];


 FUNC_1(VAR_7, VAR_1, 1);
 FUNC_0(VAR_5, "READ: %02x reg size = %zu, val size = %zu\n",
  VAR_7[0], VAR_2, VAR_4);
 VAR_7[0] |= 0x80;

 return FUNC_2(VAR_6, VAR_7, 1, VAR_3, 1);
}
