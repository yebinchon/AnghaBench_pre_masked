
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
struct afe4404_data {int * fields; } ;


 int VAR_0 ;




 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 struct afe4404_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct afe4404_data *VAR_8 = FUNC_0(VAR_3);
 unsigned int VAR_9 = VAR_1[VAR_4->address];
 unsigned int VAR_10 = VAR_2[VAR_4->address];

 switch (VAR_4->type) {
 case 128:
  switch (VAR_7) {
  case 131:
   return FUNC_1(VAR_8->fields[VAR_10], VAR_5);
  }
  break;
 case 129:
  switch (VAR_7) {
  case 130:
   return FUNC_1(VAR_8->fields[VAR_9], VAR_5);
  }
  break;
 default:
  break;
 }

 return -VAR_0;
}
