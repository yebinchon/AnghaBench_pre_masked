
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5758_state {int dc_dc_ilim; unsigned int dc_dc_mode; unsigned int slew_time; TYPE_1__* spi; } ;
typedef int ad5758_range ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (struct ad5758_state*,int const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int* VAR_4 ;
 int* FUNC_3 (unsigned int*,int*,unsigned int,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,unsigned int*) ;
 int FUNC_7 (int *,char*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_8(struct ad5758_state *VAR_6)
{
 unsigned int VAR_7, VAR_8[2], VAR_9;
 const struct ad5758_range *VAR_10;
 int *VAR_11, VAR_12;

 VAR_6->dc_dc_ilim = 0;
 VAR_12 = FUNC_6(&VAR_6->spi->dev,
           "adi,dc-dc-ilim-microamp", &VAR_7);
 if (VAR_12) {
  FUNC_4(&VAR_6->spi->dev,
   "Missing \"dc-dc-ilim-microamp\" property\n");
 } else {
  VAR_11 = FUNC_3(&VAR_7, VAR_3,
    FUNC_0(VAR_3),
    sizeof(int), VAR_5);
  if (!VAR_11)
   FUNC_4(&VAR_6->spi->dev, "dc-dc-ilim out of range\n");
  else
   VAR_6->dc_dc_ilim = VAR_11 - VAR_3;
 }

 VAR_12 = FUNC_6(&VAR_6->spi->dev, "adi,dc-dc-mode",
           &VAR_6->dc_dc_mode);
 if (VAR_12) {
  FUNC_5(&VAR_6->spi->dev, "Missing \"dc-dc-mode\" property\n");
  return VAR_12;
 }

 if (!FUNC_2(VAR_6->dc_dc_mode))
  return -VAR_1;

 if (VAR_6->dc_dc_mode == VAR_0) {
  VAR_12 = FUNC_7(&VAR_6->spi->dev,
           "adi,range-microvolt",
           VAR_8, 2);
  if (VAR_12) {
   FUNC_5(&VAR_6->spi->dev,
    "Missing \"range-microvolt\" property\n");
   return VAR_12;
  }
  VAR_10 = VAR_4;
  VAR_9 = FUNC_0(VAR_4);
 } else {
  VAR_12 = FUNC_7(&VAR_6->spi->dev,
           "adi,range-microamp",
           VAR_8, 2);
  if (VAR_12) {
   FUNC_5(&VAR_6->spi->dev,
    "Missing \"range-microamp\" property\n");
   return VAR_12;
  }
  VAR_10 = VAR_2;
  VAR_9 = FUNC_0(VAR_2);
 }

 VAR_12 = FUNC_1(VAR_6, VAR_10, VAR_9, VAR_8[0], VAR_8[1]);
 if (VAR_12) {
  FUNC_5(&VAR_6->spi->dev, "range invalid\n");
  return VAR_12;
 }

 VAR_12 = FUNC_6(&VAR_6->spi->dev, "adi,slew-time-us", &VAR_7);
 if (VAR_12) {
  FUNC_4(&VAR_6->spi->dev, "Missing \"slew-time-us\" property\n");
  VAR_6->slew_time = 0;
 } else {
  VAR_6->slew_time = VAR_7;
 }

 return 0;
}
