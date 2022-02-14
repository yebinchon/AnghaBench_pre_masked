
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_humidity_state {int common_attributes; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 struct hid_humidity_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
    struct iio_chan_spec const *VAR_2,
    int VAR_3, int VAR_4, long VAR_5)
{
 struct hid_humidity_state *VAR_6 = FUNC_2(VAR_1);

 switch (VAR_5) {
 case 128:
  return FUNC_1(
    &VAR_6->common_attributes, VAR_3, VAR_4);

 case 129:
  return FUNC_0(
    &VAR_6->common_attributes, VAR_3, VAR_4);

 default:
  return -VAR_0;
 }
}
