
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;
struct spi_device {int dummy; } ;


 struct tpm_chip* FUNC_0 (struct spi_device*) ;
 int FUNC_1 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct tpm_chip *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
