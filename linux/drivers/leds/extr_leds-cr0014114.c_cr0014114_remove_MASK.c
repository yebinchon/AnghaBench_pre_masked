
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct cr0014114 {int lock; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cr0014114* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct cr0014114 *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_1(&VAR_1->lock);

 return 0;
}
