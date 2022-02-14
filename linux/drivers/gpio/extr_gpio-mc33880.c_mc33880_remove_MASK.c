
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct mc33880 {int lock; int chip; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mc33880* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 struct mc33880 *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_2->chip);
 FUNC_1(&VAR_2->lock);

 return 0;
}
