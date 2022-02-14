
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ads1015_data {unsigned int comp_mode; int conv_invalid; int regmap; int * data_rate; TYPE_2__* thresh_data; TYPE_1__* channel_data; } ;
struct TYPE_4__ {unsigned int comp_queue; } ;
struct TYPE_3__ {int pga; int data_rate; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ads1015_data*) ;
 int FUNC_2 (int ,int ,...) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static
int FUNC_5(struct ads1015_data *VAR_15, int VAR_16, int *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;

 if (VAR_16 < 0 || VAR_16 >= VAR_11)
  return -VAR_13;

 VAR_18 = FUNC_2(VAR_15->regmap, VAR_10, &VAR_23);
 if (VAR_18)
  return VAR_18;

 VAR_19 = VAR_15->channel_data[VAR_16].pga;
 VAR_20 = VAR_15->channel_data[VAR_16].data_rate;
 VAR_24 = VAR_6 | VAR_8 |
  VAR_4;
 VAR_25 = VAR_16 << VAR_7 | VAR_19 << VAR_9 |
  VAR_20 << VAR_5;

 if (FUNC_1(VAR_15)) {
  VAR_24 |= VAR_2 | VAR_0;
  VAR_25 |= VAR_15->thresh_data[VAR_16].comp_queue <<
    VAR_3 |
   VAR_15->comp_mode <<
    VAR_1;
 }

 VAR_25 = (VAR_23 & ~VAR_24) | (VAR_25 & VAR_24);
 if (VAR_23 != VAR_25) {
  VAR_18 = FUNC_3(VAR_15->regmap, VAR_10, VAR_25);
  if (VAR_18)
   return VAR_18;
  VAR_15->conv_invalid = 1;
 }
 if (VAR_15->conv_invalid) {
  VAR_21 = (VAR_23 & VAR_4) >> VAR_5;
  VAR_22 = FUNC_0(VAR_14, VAR_15->data_rate[VAR_21]);
  VAR_22 += FUNC_0(VAR_14, VAR_15->data_rate[VAR_20]);
  VAR_22 += VAR_22 / 10;
  FUNC_4(VAR_22, VAR_22 + 1);
  VAR_15->conv_invalid = 0;
 }

 return FUNC_2(VAR_15->regmap, VAR_12, VAR_17);
}
