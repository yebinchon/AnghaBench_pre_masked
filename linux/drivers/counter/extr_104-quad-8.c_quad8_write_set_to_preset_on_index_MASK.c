
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; int* preset_enable; unsigned int* ab_enable; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (unsigned int,int const) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_1,
 uintptr_t VAR_2, const struct iio_chan_spec *VAR_3, const char *VAR_4,
 size_t VAR_5)
{
 struct quad8_iio *const VAR_6 = FUNC_0(VAR_1);
 const int VAR_7 = VAR_6->base + 2 * VAR_3->channel + 1;
 bool VAR_8;
 int VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_1(VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_8 = !VAR_8;

 VAR_6->preset_enable[VAR_3->channel] = VAR_8;

 VAR_10 = VAR_6->ab_enable[VAR_3->channel] |
  (unsigned int)VAR_8 << 1;


 FUNC_2(VAR_0 | VAR_10, VAR_7);

 return VAR_5;
}
