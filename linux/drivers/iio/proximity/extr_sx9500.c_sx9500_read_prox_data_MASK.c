
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int regmap; } ;
struct iio_chan_spec {int channel; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sx9500_data *VAR_3,
     const struct iio_chan_spec *VAR_4,
     int *VAR_5)
{
 int VAR_6;
 __be16 VAR_7;

 VAR_6 = FUNC_2(VAR_3->regmap, VAR_1, VAR_4->channel);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3->regmap, VAR_2, &VAR_7, 2);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_5 = FUNC_0(VAR_7);

 return VAR_0;
}
