
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {scalar_t__ address; } ;
struct ads1015_data {scalar_t__ event_channel; scalar_t__ comp_mode; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ads1015_data*,scalar_t__) ;
 int FUNC_1 (struct ads1015_data*) ;
 int FUNC_2 (struct ads1015_data*,int) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ads1015_data *VAR_6,
 const struct iio_chan_spec *VAR_7, int VAR_8)
{
 int VAR_9;

 if (!FUNC_1(VAR_6))
  return 0;

 if (VAR_6->event_channel != VAR_7->address)
  return 0;

 if (VAR_6->comp_mode == VAR_1 &&
   VAR_8 == VAR_2)
  return 0;

 VAR_9 = FUNC_3(VAR_6->regmap, VAR_5,
    VAR_3,
    VAR_0 <<
     VAR_4);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_6, VAR_7->address);

 return FUNC_2(VAR_6, 0);
}
