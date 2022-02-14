
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isl29501_private*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct isl29501_private *VAR_3,
      const struct iio_chan_spec *VAR_4,
      int VAR_5)
{
 switch (VAR_4->type) {
 case 129:
  return FUNC_0(VAR_3,
           VAR_1,
           VAR_5);
 case 128:
  return FUNC_0(VAR_3,
            VAR_2,
            VAR_5);
 default:
  return -VAR_0;
 }
}
