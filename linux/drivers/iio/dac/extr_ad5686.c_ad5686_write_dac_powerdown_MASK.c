
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ad5686_state {int pwr_down_mask; int pwr_down_mode; int (* write ) (struct ad5686_state*,int ,int,unsigned int) ;int use_internal_vref; TYPE_1__* chip_info; } ;
typedef int ssize_t ;
struct TYPE_2__ {int regmap_type; } ;


 unsigned int VAR_0 ;

 unsigned int VAR_1 ;

 int VAR_2 ;

 unsigned int VAR_3 ;

 int VAR_4 ;
 struct ad5686_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (struct ad5686_state*,int ,int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_5,
       uintptr_t VAR_6,
       const struct iio_chan_spec *VAR_7,
       const char *VAR_8,
       size_t VAR_9)
{
 bool VAR_10;
 int VAR_11;
 struct ad5686_state *VAR_12 = FUNC_0(VAR_5);
 unsigned int VAR_13, VAR_14;
 u8 VAR_15, VAR_16 = 0;

 VAR_11 = FUNC_1(VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10)
  VAR_12->pwr_down_mask |= (0x3 << (VAR_7->channel * 2));
 else
  VAR_12->pwr_down_mask &= ~(0x3 << (VAR_7->channel * 2));

 switch (VAR_12->chip_info->regmap_type) {
 case 131:
  VAR_15 = 9;
  VAR_14 = VAR_0;
  break;
 case 130:
  VAR_15 = 13;
  VAR_14 = VAR_1;
  break;
 case 129:
  VAR_15 = 0;
  VAR_14 = 0;

  if (VAR_7->channel > 0x7)
   VAR_16 = 0x8;
  break;
 case 128:
  VAR_15 = 13;
  VAR_14 = VAR_3;
  break;
 default:
  return -VAR_4;
 }

 VAR_13 = ((VAR_12->pwr_down_mask & VAR_12->pwr_down_mode) << VAR_15);
 if (!VAR_12->use_internal_vref)
  VAR_13 |= VAR_14;

 VAR_11 = VAR_12->write(VAR_12, VAR_2,
   VAR_16, VAR_13 >> (VAR_16 * 2));

 return VAR_11 ? VAR_11 : VAR_9;
}
