
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; } ;



__attribute__((used)) static int FUNC_0(struct spi_device *VAR_0)
{
 if (!VAR_0->bits_per_word)
  VAR_0->bits_per_word = 8;

 return 0;
}
