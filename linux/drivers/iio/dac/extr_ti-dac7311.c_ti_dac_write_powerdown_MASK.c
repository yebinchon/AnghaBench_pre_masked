
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_dac_chip {int powerdown; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 struct ti_dac_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int*) ;
 int FUNC_4 (struct ti_dac_chip*,int ,int ) ;
 int FUNC_5 (struct ti_dac_chip*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct iio_dev *VAR_0,
          uintptr_t VAR_1,
          const struct iio_chan_spec *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct ti_dac_chip *VAR_5 = FUNC_0(VAR_0);
 bool VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_5(VAR_5, VAR_6);

 FUNC_1(&VAR_5->lock);
 VAR_8 = FUNC_4(VAR_5, VAR_7, 0);
 if (!VAR_8)
  VAR_5->powerdown = VAR_6;
 FUNC_2(&VAR_5->lock);

 return VAR_8 ? VAR_8 : VAR_4;
}
