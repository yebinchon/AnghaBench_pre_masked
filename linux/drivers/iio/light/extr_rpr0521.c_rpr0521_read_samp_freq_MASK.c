
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpr0521_data {int regmap; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_3__ {int als_hz; int als_uhz; int pxs_hz; int pxs_uhz; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct rpr0521_data *VAR_4,
    enum iio_chan_type VAR_5,
       int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_4->regmap, VAR_2, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 &= VAR_1;
 if (VAR_8 >= FUNC_0(VAR_3))
  return -VAR_0;

 switch (VAR_5) {
 case 129:
  *VAR_6 = VAR_3[VAR_8].als_hz;
  *VAR_7 = VAR_3[VAR_8].als_uhz;
  return 0;

 case 128:
  *VAR_6 = VAR_3[VAR_8].pxs_hz;
  *VAR_7 = VAR_3[VAR_8].pxs_uhz;
  return 0;

 default:
  return -VAR_0;
 }
}
