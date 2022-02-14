
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int * preset_enable; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_1,
 uintptr_t VAR_2, const struct iio_chan_spec *VAR_3, char *VAR_4)
{
 const struct quad8_iio *const VAR_5 = FUNC_0(VAR_1);

 return FUNC_1(VAR_4, VAR_0, "%u\n",
  !VAR_5->preset_enable[VAR_3->channel]);
}
