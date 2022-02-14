
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4922_state {int* value; int vref_mv; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {size_t channel; TYPE_1__ scan_type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct mcp4922_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
  struct iio_chan_spec const *VAR_4,
  int *VAR_5,
  int *VAR_6,
  long VAR_7)
{
 struct mcp4922_state *VAR_8 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 129:
  *VAR_5 = VAR_8->value[VAR_4->channel];
  return VAR_2;
 case 128:
  *VAR_5 = VAR_8->vref_mv;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
