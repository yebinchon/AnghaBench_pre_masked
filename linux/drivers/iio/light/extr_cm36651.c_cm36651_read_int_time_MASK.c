
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int type; size_t address; } ;
struct cm36651_data {int ps_int_time; int * cs_int_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;

__attribute__((used)) static int FUNC_0(struct cm36651_data *VAR_10,
    struct iio_chan_spec const *VAR_11, int *VAR_12)
{
 switch (VAR_11->type) {
 case 129:
  if (VAR_10->cs_int_time[VAR_11->address] == VAR_0)
   *VAR_12 = 80000;
  else if (VAR_10->cs_int_time[VAR_11->address] == VAR_1)
   *VAR_12 = 160000;
  else if (VAR_10->cs_int_time[VAR_11->address] == VAR_2)
   *VAR_12 = 320000;
  else if (VAR_10->cs_int_time[VAR_11->address] == VAR_3)
   *VAR_12 = 640000;
  else
   return -VAR_8;
  break;
 case 128:
  if (VAR_10->ps_int_time == VAR_4)
   *VAR_12 = 320;
  else if (VAR_10->ps_int_time == VAR_5)
   *VAR_12 = 420;
  else if (VAR_10->ps_int_time == VAR_6)
   *VAR_12 = 520;
  else if (VAR_10->ps_int_time == VAR_7)
   *VAR_12 = 640;
  else
   return -VAR_8;
  break;
 default:
  return -VAR_8;
 }

 return VAR_9;
}
