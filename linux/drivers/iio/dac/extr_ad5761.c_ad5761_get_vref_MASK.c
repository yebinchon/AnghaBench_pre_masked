
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5761_state {int use_intref; int vref; int * vref_reg; TYPE_1__* spi; } ;
struct ad5761_chip_info {int int_vref; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ad5761_state *VAR_2,
      const struct ad5761_chip_info *VAR_3)
{
 int VAR_4;

 VAR_2->vref_reg = FUNC_4(&VAR_2->spi->dev, "vref");
 if (FUNC_1(VAR_2->vref_reg) == -VAR_1) {

  if (!VAR_3->int_vref) {
   FUNC_2(&VAR_2->spi->dev,
    "Voltage reference not found\n");
   return -VAR_0;
  }

  VAR_2->use_intref = 1;
  VAR_2->vref = VAR_3->int_vref;
  return 0;
 }

 if (FUNC_0(VAR_2->vref_reg)) {
  FUNC_2(&VAR_2->spi->dev,
   "Error getting voltage reference regulator\n");
  return FUNC_1(VAR_2->vref_reg);
 }

 VAR_4 = FUNC_6(VAR_2->vref_reg);
 if (VAR_4) {
  FUNC_2(&VAR_2->spi->dev,
    "Failed to enable voltage reference\n");
  return VAR_4;
 }

 VAR_4 = FUNC_7(VAR_2->vref_reg);
 if (VAR_4 < 0) {
  FUNC_2(&VAR_2->spi->dev,
    "Failed to get voltage reference value\n");
  goto disable_regulator_vref;
 }

 if (VAR_4 < 2000000 || VAR_4 > 3000000) {
  FUNC_3(&VAR_2->spi->dev,
    "Invalid external voltage ref. value %d uV\n", VAR_4);
  VAR_4 = -VAR_0;
  goto disable_regulator_vref;
 }

 VAR_2->vref = VAR_4 / 1000;
 VAR_2->use_intref = 0;

 return 0;

disable_regulator_vref:
 FUNC_5(VAR_2->vref_reg);
 VAR_2->vref_reg = ((void*)0);
 return VAR_4;
}
