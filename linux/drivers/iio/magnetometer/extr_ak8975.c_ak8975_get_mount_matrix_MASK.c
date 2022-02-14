
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_mount_matrix {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ak8975_data {struct iio_mount_matrix const orientation; } ;


 struct ak8975_data* FUNC_0 (struct iio_dev const*) ;

__attribute__((used)) static const struct iio_mount_matrix *
FUNC_1(const struct iio_dev *VAR_0,
   const struct iio_chan_spec *VAR_1)
{
 struct ak8975_data *VAR_2 = FUNC_0(VAR_0);

 return &VAR_2->orientation;
}
