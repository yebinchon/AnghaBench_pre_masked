
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct isl29501_private*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct isl29501_private *VAR_2,
       const struct iio_chan_spec *VAR_3,
       int VAR_4)
{
 switch (VAR_3->type) {
 case 128:
  return FUNC_0(VAR_2, VAR_1, VAR_4);
 default:
  return -VAR_0;
 }
}
