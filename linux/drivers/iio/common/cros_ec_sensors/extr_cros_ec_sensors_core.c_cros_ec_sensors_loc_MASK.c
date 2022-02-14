
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cros_ec_sensors_core_state {size_t loc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char** VAR_1 ;
 struct cros_ec_sensors_core_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_2,
  uintptr_t VAR_3, const struct iio_chan_spec *VAR_4,
  char *VAR_5)
{
 struct cros_ec_sensors_core_state *VAR_6 = FUNC_0(VAR_2);

 return FUNC_1(VAR_5, VAR_0, "%s\n", VAR_1[VAR_6->loc]);
}
