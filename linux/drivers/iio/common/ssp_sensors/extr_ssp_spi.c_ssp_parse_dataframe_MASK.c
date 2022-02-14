
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_sensor_data {int (* process_data ) (struct iio_dev*,char*,int ) ;} ;
struct ssp_data {int time_syncing; int timestamp; struct iio_dev** sensor_devs; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct ssp_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ssp_data*,char*,int*) ;
 int* VAR_3 ;
 int FUNC_4 (char*,int*,int) ;
 int FUNC_5 (struct ssp_data*,int ) ;
 int FUNC_6 (struct iio_dev*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct ssp_data *VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct ssp_sensor_data *VAR_9;
 struct iio_dev **VAR_10 = VAR_4->sensor_devs;

 for (VAR_7 = 0; VAR_7 < VAR_6;) {
  switch (VAR_5[VAR_7++]) {
  case 132:
   VAR_8 = VAR_5[VAR_7++];
   if (VAR_8 < 0 || VAR_8 >= VAR_2) {
    FUNC_0(VAR_1,
     "Mcu data frame1 error %d\n", VAR_8);
    return -VAR_0;
   }

   if (VAR_10[VAR_8]) {
    VAR_9 = FUNC_1(VAR_10[VAR_8]);
    if (VAR_9->process_data)
     VAR_9->process_data(VAR_10[VAR_8],
         &VAR_5[VAR_7],
         VAR_4->timestamp);
   } else {
    FUNC_0(VAR_1, "no client for frame\n");
   }

   VAR_7 += VAR_3[VAR_8];
   break;
  case 131:
   VAR_8 = FUNC_4(VAR_5, &VAR_7, VAR_6);
   if (VAR_8) {
    FUNC_0(VAR_1,
     "Mcu data frame3 error %d\n", VAR_8);
    return VAR_8;
   }
   break;
  case 130:
   VAR_7 += VAR_6;
   break;
  case 133:
   FUNC_3(VAR_4, VAR_5, &VAR_7);
   break;
  case 128:
   VAR_4->time_syncing = 1;
   break;
  case 129:
   FUNC_5(VAR_4, 0);
   break;
  }
 }

 if (VAR_4->time_syncing)
  VAR_4->timestamp = FUNC_2();

 return 0;
}
