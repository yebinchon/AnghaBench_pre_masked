
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int buffer; } ;
struct hid_sensor_common {int dummy; } ;


 int FUNC_0 (struct hid_sensor_common*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_1,
     struct hid_sensor_common *VAR_2)
{
 if (!FUNC_0(VAR_2))
  return;

 FUNC_1(VAR_1->buffer, VAR_0);
}
