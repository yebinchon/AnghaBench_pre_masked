
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_sensor_data {int buffer; } ;
struct iio_dev {scalar_t__ scan_bytes; scalar_t__ scan_timestamp; } ;
typedef int int64_t ;
typedef int __le32 ;


 int VAR_0 ;
 struct ssp_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,unsigned int) ;

int FUNC_4(struct iio_dev *VAR_1, void *VAR_2,
       unsigned int VAR_3, int64_t VAR_4)
{
 __le32 VAR_5;
 int64_t VAR_6 = 0;
 struct ssp_sensor_data *VAR_7 = FUNC_0(VAR_1);

 if (VAR_1->scan_bytes == 0)
  return 0;




 FUNC_3(&VAR_7->buffer, VAR_2, VAR_3);

 if (VAR_1->scan_timestamp) {
  FUNC_3(&VAR_5, &((char *)VAR_2)[VAR_3], VAR_0);
  VAR_6 =
   VAR_4 + (int64_t)FUNC_2(VAR_5) * 1000000;
 }

 return FUNC_1(VAR_1, VAR_7->buffer,
        VAR_6);
}
