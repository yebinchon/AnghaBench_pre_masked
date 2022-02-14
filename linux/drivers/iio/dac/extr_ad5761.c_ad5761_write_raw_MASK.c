
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (struct iio_dev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int VAR_5,
       int VAR_6,
       long VAR_7)
{
 u16 VAR_8;

 if (VAR_7 != VAR_2)
  return -VAR_1;

 if (VAR_6 || (VAR_5 << VAR_4->scan_type.shift) > 0xffff || VAR_5 < 0)
  return -VAR_1;

 VAR_8 = VAR_5 << VAR_4->scan_type.shift;

 return FUNC_0(VAR_3, VAR_0, VAR_8);
}
