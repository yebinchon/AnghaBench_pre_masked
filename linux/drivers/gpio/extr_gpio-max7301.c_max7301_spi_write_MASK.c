
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef unsigned int u16 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_device*,unsigned int*,int,int *,int ) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct spi_device *VAR_3 = FUNC_1(VAR_0);
 u16 VAR_4 = ((VAR_1 & 0x7F) << 8) | (VAR_2 & 0xFF);

 return FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4), ((void*)0), 0);
}
