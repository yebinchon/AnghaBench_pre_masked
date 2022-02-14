
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iio_dev {int dummy; } ;
struct ads1015_data {scalar_t__ comp_mode; int event_channel; int regmap; } ;
typedef int irqreturn_t ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ads1015_data*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ads1015_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct iio_dev *VAR_9 = VAR_8;
 struct ads1015_data *VAR_10 = FUNC_3(VAR_9);
 int VAR_11;
 int VAR_12;


 VAR_12 = FUNC_5(VAR_10->regmap, VAR_1, &VAR_11);
 if (VAR_12)
  return VAR_6;

 if (FUNC_1(VAR_10)) {
  enum iio_event_direction VAR_13;
  u64 VAR_14;

  VAR_13 = VAR_10->comp_mode == VAR_0 ?
     VAR_3 : VAR_2;
  VAR_14 = FUNC_0(VAR_5, VAR_10->event_channel,
     VAR_4, VAR_13);
  FUNC_4(VAR_9, VAR_14, FUNC_2(VAR_9));
 }

 return VAR_6;
}
