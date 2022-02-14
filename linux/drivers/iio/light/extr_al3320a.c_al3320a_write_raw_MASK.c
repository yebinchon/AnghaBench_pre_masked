
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct al3320a_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int**) ;
 int VAR_2 ;

 int** VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 struct al3320a_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5, int VAR_6,
        int VAR_7, long VAR_8)
{
 struct al3320a_data *VAR_9 = FUNC_2(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 128:
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
   if (VAR_6 == VAR_3[VAR_10][0] &&
       VAR_7 == VAR_3[VAR_10][1])
    return FUNC_1(VAR_9->client,
     VAR_1,
     VAR_10 << VAR_0);
  }
  break;
 }
 return -VAR_2;
}
