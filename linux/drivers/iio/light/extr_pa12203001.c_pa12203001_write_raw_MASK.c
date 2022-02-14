
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pa12203001_data {int map; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pa12203001_data* FUNC_1 (struct iio_dev*) ;
 int* VAR_4 ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
    struct iio_chan_spec const *VAR_6, int VAR_7,
    int VAR_8, long VAR_9)
{
 struct pa12203001_data *VAR_10 = FUNC_1(VAR_5);
 int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;

 switch (VAR_9) {
 case 128:
  VAR_12 = FUNC_2(VAR_10->map, VAR_3, &VAR_14);
  if (VAR_7 != 0 || VAR_12 < 0)
   return -VAR_0;
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
   if (VAR_8 == VAR_4[VAR_11]) {
    VAR_13 = VAR_11 << VAR_2;
    return FUNC_3(VAR_10->map,
         VAR_3,
         VAR_1,
         VAR_13);
   }
  }
  break;
 default:
  break;
 }

 return -VAR_0;
}
