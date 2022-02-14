
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct dac124s085 {TYPE_1__* leds; } ;
struct TYPE_2__ {int ldev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct dac124s085* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct dac124s085 *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->leds); VAR_2++)
  FUNC_1(&VAR_1->leds[VAR_2].ldev);

 return 0;
}
