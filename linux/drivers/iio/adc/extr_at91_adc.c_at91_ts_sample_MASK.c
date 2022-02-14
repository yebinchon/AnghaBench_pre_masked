
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct at91_adc_state {unsigned int res; unsigned int ts_pressure_threshold; int ts_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct at91_adc_state*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (struct at91_adc_state*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct at91_adc_state *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19 = 1;
 unsigned int VAR_20 = 1000;
 struct iio_dev *VAR_21 = FUNC_3(VAR_8);

 unsigned int VAR_22 = VAR_8->res;
 unsigned int VAR_23 = (1 << VAR_22) - 1;



 VAR_11 = FUNC_0(VAR_8, VAR_4);
 VAR_17 = VAR_11 & VAR_23;
 VAR_14 = (VAR_17 << VAR_7) - VAR_17;
 VAR_9 = (VAR_11 >> 16) & VAR_23;
 if (VAR_9 == 0) {
  FUNC_2(&VAR_21->dev, "Error: xscale == 0!\n");
  return -1;
 }
 VAR_14 /= VAR_9;


 VAR_11 = FUNC_0(VAR_8, VAR_5);
 VAR_18 = VAR_11 & VAR_23;
 VAR_15 = (VAR_18 << VAR_7) - VAR_18;
 VAR_10 = (VAR_11 >> 16) & VAR_23;
 if (VAR_10 == 0) {
  FUNC_2(&VAR_21->dev, "Error: yscale == 0!\n");
  return -1;
 }
 VAR_15 /= VAR_10;


 VAR_11 = FUNC_0(VAR_8, VAR_3);
 VAR_12 = VAR_11 & VAR_23;
 VAR_13 = (VAR_11 >> 16) & VAR_23;

 if (VAR_12 != 0)
  VAR_16 = VAR_19 * (VAR_14 * VAR_20 / 1024) * (VAR_13 * VAR_20 / VAR_12 - VAR_20)
   / VAR_20;
 else
  VAR_16 = VAR_8->ts_pressure_threshold;

 FUNC_1(&VAR_21->dev, "xpos = %d, xscale = %d, ypos = %d, yscale = %d, z1 = %d, z2 = %d, press = %d\n",
    VAR_17, VAR_9, VAR_18, VAR_10, VAR_12, VAR_13, VAR_16);

 if (VAR_16 < VAR_8->ts_pressure_threshold) {
  FUNC_1(&VAR_21->dev, "x = %d, y = %d, pressure = %d\n",
     VAR_14, VAR_15, VAR_16 / VAR_20);
  FUNC_4(VAR_8->ts_input, VAR_1, VAR_14);
  FUNC_4(VAR_8->ts_input, VAR_2, VAR_15);
  FUNC_4(VAR_8->ts_input, VAR_0, VAR_16);
  FUNC_5(VAR_8->ts_input, VAR_6, 1);
  FUNC_6(VAR_8->ts_input);
 } else {
  FUNC_1(&VAR_21->dev, "pressure too low: not reporting\n");
 }

 return 0;
}
