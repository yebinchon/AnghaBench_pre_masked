
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct iio_dev *VAR_6,
          struct iio_chan_spec const *VAR_7,
          long VAR_8)
{
 if (VAR_8 == VAR_0 && VAR_7->type == VAR_2)
  return VAR_5;
 else if (VAR_8 == VAR_1 && VAR_7->type == VAR_2)
  return VAR_4;
 else
  return VAR_3;
}
