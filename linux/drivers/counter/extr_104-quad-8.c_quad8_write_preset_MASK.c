
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; unsigned int* preset; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (unsigned int,int const) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_3, uintptr_t VAR_4,
 const struct iio_chan_spec *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct quad8_iio *const VAR_8 = FUNC_0(VAR_3);
 const int VAR_9 = VAR_8->base + 2 * VAR_5->channel;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_6, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;


 if (VAR_10 > 0xFFFFFF)
  return -VAR_0;

 VAR_8->preset[VAR_5->channel] = VAR_10;


 FUNC_2(VAR_1 | VAR_2, VAR_9 + 1);


 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  FUNC_2(VAR_10 >> (8 * VAR_12), VAR_9);

 return VAR_7;
}
