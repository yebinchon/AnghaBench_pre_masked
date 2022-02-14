
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_dac_chip {int powerdown; int lock; int * val; int powerdown_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ti_dac_chip* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int*) ;
 int FUNC_6 (struct ti_dac_chip*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct iio_dev *VAR_0,
          uintptr_t VAR_1,
          const struct iio_chan_spec *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct ti_dac_chip *VAR_5 = FUNC_2(VAR_0);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->powerdown == VAR_6)
  return VAR_4;

 FUNC_3(&VAR_5->lock);
 if (VAR_6)
  VAR_7 = FUNC_6(VAR_5, FUNC_0(VAR_5->powerdown_mode), 0);
 else
  VAR_7 = FUNC_6(VAR_5, FUNC_1(0), VAR_5->val[0]);
 if (!VAR_7)
  VAR_5->powerdown = VAR_6;
 FUNC_4(&VAR_5->lock);

 return VAR_7 ? VAR_7 : VAR_4;
}
