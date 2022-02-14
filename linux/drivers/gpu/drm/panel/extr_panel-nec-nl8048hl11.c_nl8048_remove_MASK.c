
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct nl8048_panel {int panel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nl8048_panel* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct nl8048_panel *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->panel);
 FUNC_0(&VAR_1->panel);
 FUNC_2(&VAR_1->panel);

 return 0;
}
