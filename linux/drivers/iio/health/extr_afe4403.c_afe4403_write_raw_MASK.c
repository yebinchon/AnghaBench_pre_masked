
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
struct afe4403_data {int * fields; } ;


 int VAR_0 ;


 unsigned int* VAR_1 ;
 struct afe4403_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct afe4403_data *VAR_7 = FUNC_0(VAR_2);
 unsigned int VAR_8 = VAR_1[VAR_3->address];

 switch (VAR_3->type) {
 case 128:
  switch (VAR_6) {
  case 129:
   return FUNC_1(VAR_7->fields[VAR_8], VAR_4);
  }
  break;
 default:
  break;
 }

 return -VAR_0;
}
