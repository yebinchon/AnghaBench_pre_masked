
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_mipi_device {TYPE_1__* mipi; } ;
struct TYPE_2__ {int lock; int usage_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct tegra_mipi_device *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(&VAR_0->mipi->lock);

 if (VAR_0->mipi->usage_count++ == 0)
  VAR_1 = FUNC_2(VAR_0->mipi);

 FUNC_1(&VAR_0->mipi->lock);

 return VAR_1;

}
