
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int,int *,int*,int) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0)
{
 int VAR_1;
 u8 VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0x71, ((void*)0), &VAR_2, 1);

 return VAR_1 ? VAR_1 : VAR_2;
}
