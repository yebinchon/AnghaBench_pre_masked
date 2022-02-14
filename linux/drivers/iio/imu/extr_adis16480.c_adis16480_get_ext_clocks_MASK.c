
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* spi; } ;
struct adis16480 {void* ext_clk; TYPE_3__ adis; int clk_mode; TYPE_1__* chip_info; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ has_pps_clk_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct adis16480 *VAR_4)
{
 VAR_4->clk_mode = VAR_0;
 VAR_4->ext_clk = FUNC_3(&VAR_4->adis.spi->dev, "sync");
 if (!FUNC_0(VAR_4->ext_clk)) {
  VAR_4->clk_mode = VAR_2;
  return 0;
 }

 if (FUNC_1(VAR_4->ext_clk) != -VAR_3) {
  FUNC_2(&VAR_4->adis.spi->dev, "failed to get ext clk\n");
  return FUNC_1(VAR_4->ext_clk);
 }

 if (VAR_4->chip_info->has_pps_clk_mode) {
  VAR_4->ext_clk = FUNC_3(&VAR_4->adis.spi->dev, "pps");
  if (!FUNC_0(VAR_4->ext_clk)) {
   VAR_4->clk_mode = VAR_1;
   return 0;
  }

  if (FUNC_1(VAR_4->ext_clk) != -VAR_3) {
   FUNC_2(&VAR_4->adis.spi->dev, "failed to get ext clk\n");
   return FUNC_1(VAR_4->ext_clk);
  }
 }

 return 0;
}
