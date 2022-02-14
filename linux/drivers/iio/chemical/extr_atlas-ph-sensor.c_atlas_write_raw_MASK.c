
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; int address; } ;
struct atlas_data {int regmap; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct atlas_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int VAR_5, int VAR_6, long VAR_7)
{
 struct atlas_data *VAR_8 = FUNC_1(VAR_3);
 __be32 VAR_9 = FUNC_0(VAR_5 / 10);

 if (VAR_6 != 0 || VAR_5 < 0 || VAR_5 > 20000)
  return -VAR_0;

 if (VAR_7 != VAR_1 || VAR_4->type != VAR_2)
  return -VAR_0;

 return FUNC_2(VAR_8->regmap, VAR_4->address,
     &VAR_9, sizeof(VAR_9));
}
