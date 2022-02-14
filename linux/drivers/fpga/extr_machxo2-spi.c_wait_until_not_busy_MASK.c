
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_device*,unsigned long*) ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6 = 0;

 do {
  VAR_5 = FUNC_0(VAR_3, &VAR_4);
  if (VAR_5)
   return VAR_5;
  if (++VAR_6 >= VAR_2)
   return -VAR_1;
 } while (FUNC_1(VAR_0, &VAR_4));

 return 0;
}
