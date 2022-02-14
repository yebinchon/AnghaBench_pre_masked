
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int shift; } ;
struct iio_chan_spec {int address; TYPE_1__ scan_type; } ;
struct ad5755_state {TYPE_2__* chip_info; } ;
struct TYPE_4__ {unsigned int calib_shift; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int VAR_0 ;




__attribute__((used)) static int FUNC_6(struct ad5755_state *VAR_1,
 struct iio_chan_spec const *VAR_2, long VAR_3, bool VAR_4,
 unsigned int *VAR_5, unsigned int *VAR_6, unsigned int *VAR_7)
{
 switch (VAR_3) {
 case 128:
  if (VAR_4)
   *VAR_5 = FUNC_3(VAR_2->address);
  else
   *VAR_5 = FUNC_0(VAR_2->address);
  *VAR_6 = VAR_2->scan_type.shift;
  *VAR_7 = 0;
  break;
 case 130:
  if (VAR_4)
   *VAR_5 = FUNC_5(VAR_2->address);
  else
   *VAR_5 = FUNC_2(VAR_2->address);
  *VAR_6 = VAR_1->chip_info->calib_shift;
  *VAR_7 = 32768;
  break;
 case 129:
  if (VAR_4)
   *VAR_5 = FUNC_4(VAR_2->address);
  else
   *VAR_5 = FUNC_1(VAR_2->address);
  *VAR_6 = VAR_1->chip_info->calib_shift;
  *VAR_7 = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
