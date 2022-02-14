
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44000_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 struct max44000_data* FUNC_3 (struct iio_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct max44000_data*,int) ;
 int FUNC_5 (struct max44000_data*,int) ;
 int FUNC_6 (struct max44000_data*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_10,
         struct iio_chan_spec const *VAR_11,
         int VAR_12, int VAR_13, long VAR_14)
{
 struct max44000_data *VAR_15 = FUNC_3(VAR_10);
 int VAR_16;

 if (VAR_14 == VAR_2 && VAR_11->type == VAR_4) {
  FUNC_7(&VAR_15->lock);
  VAR_16 = FUNC_6(VAR_15, VAR_12);
  FUNC_8(&VAR_15->lock);
  return VAR_16;
 } else if (VAR_14 == VAR_1 && VAR_11->type == VAR_5) {
  s64 VAR_17 = VAR_12 * VAR_6 + VAR_13;
  int VAR_18 = FUNC_2(VAR_17,
    VAR_8,
    FUNC_0(VAR_8));
  FUNC_7(&VAR_15->lock);
  VAR_16 = FUNC_5(VAR_15, VAR_18);
  FUNC_8(&VAR_15->lock);
  return VAR_16;
 } else if (VAR_14 == VAR_3 && VAR_11->type == VAR_5) {
  s64 VAR_19 = VAR_12 * VAR_7 + VAR_13;
  int VAR_20 = FUNC_1(VAR_19,
    VAR_9,
    FUNC_0(VAR_9));
  FUNC_7(&VAR_15->lock);
  VAR_16 = FUNC_4(VAR_15, VAR_20);
  FUNC_8(&VAR_15->lock);
  return VAR_16;
 }

 return -VAR_0;
}
