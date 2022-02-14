
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct td043mtea1_panel {int panel; } ;
struct TYPE_2__ {int kobj; } ;
struct spi_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct td043mtea1_panel* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1)
{
 struct td043mtea1_panel *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->panel);
 FUNC_0(&VAR_2->panel);
 FUNC_2(&VAR_2->panel);

 FUNC_4(&VAR_1->dev.kobj, &VAR_0);

 return 0;
}
