
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repaper_epd {unsigned int factored_stage_time; unsigned int stage_time; TYPE_1__* spi; int thermal; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static void FUNC_2(struct repaper_epd *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 unsigned int VAR_3;

 if (!VAR_0->thermal)
  return;

 VAR_1 = FUNC_1(VAR_0->thermal, &VAR_2);
 if (VAR_1) {
  FUNC_0(&VAR_0->spi->dev, "Failed to get temperature (%d)\n", VAR_1);
  return;
 }

 VAR_2 /= 1000;

 if (VAR_2 <= -10)
  VAR_3 = 170;
 else if (VAR_2 <= -5)
  VAR_3 = 120;
 else if (VAR_2 <= 5)
  VAR_3 = 80;
 else if (VAR_2 <= 10)
  VAR_3 = 40;
 else if (VAR_2 <= 15)
  VAR_3 = 30;
 else if (VAR_2 <= 20)
  VAR_3 = 20;
 else if (VAR_2 <= 40)
  VAR_3 = 10;
 else
  VAR_3 = 7;

 VAR_0->factored_stage_time = VAR_0->stage_time * VAR_3 / 10;
}
