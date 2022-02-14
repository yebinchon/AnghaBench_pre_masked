
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct acx565akm_panel {int panel; scalar_t__ has_bc; } ;


 int FUNC_0 (struct acx565akm_panel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct acx565akm_panel* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct acx565akm_panel *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(&VAR_1->panel);

 if (VAR_1->has_bc)
  FUNC_0(VAR_1);

 FUNC_1(&VAR_1->panel);
 FUNC_3(&VAR_1->panel);

 return 0;
}
