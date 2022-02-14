
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int*,void const*,int) ;
 int FUNC_2 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const void *VAR_1,
        size_t VAR_2)
{
 struct device *VAR_3 = VAR_0;
 struct spi_device *VAR_4 = FUNC_3(VAR_3);
 u8 VAR_5[2];


 FUNC_1(VAR_5, VAR_1, 2);
 VAR_5[0] &= ~0x80;

 FUNC_0(VAR_3, "WRITE: %02x %02x\n", VAR_5[0], VAR_5[1]);
 return FUNC_2(VAR_4, VAR_5, 2, ((void*)0), 0);
}
