
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int,int*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0, u8 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0, 0x70, &VAR_1, ((void*)0), 1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x73, ((void*)0), &VAR_3, 1);

 return VAR_2 ? VAR_2 : VAR_3;
}
