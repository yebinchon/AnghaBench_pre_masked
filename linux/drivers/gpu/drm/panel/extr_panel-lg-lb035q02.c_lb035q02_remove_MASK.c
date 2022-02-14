
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct lb035q02_device {int panel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct lb035q02_device* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct lb035q02_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->panel);
 FUNC_0(&VAR_1->panel);

 return 0;
}
