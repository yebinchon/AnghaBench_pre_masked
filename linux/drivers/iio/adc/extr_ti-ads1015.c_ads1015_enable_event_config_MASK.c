
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int realbits; int shift; } ;
struct iio_chan_spec {size_t address; TYPE_2__ scan_type; } ;
struct ads1015_data {size_t event_channel; int comp_mode; int regmap; TYPE_1__* thresh_data; } ;
struct TYPE_3__ {int low_thresh; int high_thresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ads1015_data*,size_t) ;
 int FUNC_1 (struct ads1015_data*,size_t,int) ;
 scalar_t__ FUNC_2 (struct ads1015_data*) ;
 int FUNC_3 (struct ads1015_data*,size_t,unsigned int*) ;
 int FUNC_4 (struct ads1015_data*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ads1015_data *VAR_5,
 const struct iio_chan_spec *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_5->thresh_data[VAR_6->address].low_thresh;
 int VAR_9 = VAR_5->thresh_data[VAR_6->address].high_thresh;
 int VAR_10;
 unsigned int VAR_11;

 if (FUNC_2(VAR_5)) {
  if (VAR_5->event_channel != VAR_6->address ||
   (VAR_5->comp_mode == VAR_0 &&
    VAR_7 == VAR_1))
   return -VAR_4;

  return 0;
 }

 if (VAR_7 == VAR_0) {
  VAR_8 = FUNC_5(-1 << (VAR_6->scan_type.realbits - 1),
    VAR_9 - 1);
 }
 VAR_10 = FUNC_6(VAR_5->regmap, VAR_3,
   VAR_8 << VAR_6->scan_type.shift);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_5->regmap, VAR_2,
   VAR_9 << VAR_6->scan_type.shift);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_5, 1);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_1(VAR_5, VAR_6->address, VAR_7);

 VAR_10 = FUNC_3(VAR_5, VAR_6->address, &VAR_11);
 if (VAR_10) {
  FUNC_0(VAR_5, VAR_6->address);
  FUNC_4(VAR_5, 0);
 }

 return VAR_10;
}
