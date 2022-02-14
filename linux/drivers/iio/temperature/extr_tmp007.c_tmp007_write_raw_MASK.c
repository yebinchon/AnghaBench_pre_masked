
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tmp007_data {int config; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 struct tmp007_data* FUNC_2 (struct iio_dev*) ;
 int** VAR_5 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
  struct iio_chan_spec const *VAR_7, int VAR_8,
  int VAR_9, long VAR_10)
{
 struct tmp007_data *VAR_11 = FUNC_2(VAR_6);
 int VAR_12;
 u16 VAR_13;

 if (VAR_10 == VAR_1) {
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++) {
   if ((VAR_8 == VAR_5[VAR_12][0]) &&
   (VAR_9 == VAR_5[VAR_12][1])) {
    VAR_13 = VAR_11->config & ~VAR_3;
    VAR_13 |= (VAR_12 << VAR_4);

    return FUNC_1(VAR_11->client,
        VAR_2,
        VAR_11->config = VAR_13);
   }
  }
 }

 return -VAR_0;
}
