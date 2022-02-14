
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4531_data {TYPE_1__* cfg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int* avail; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 struct mcp4531_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
         struct iio_chan_spec const *VAR_4,
         const int **VAR_5, int *VAR_6, int *VAR_7,
         long VAR_8)
{
 struct mcp4531_data *VAR_9 = FUNC_1(VAR_3);

 switch (VAR_8) {
 case 128:
  *VAR_7 = FUNC_0(VAR_9->cfg->avail);
  *VAR_5 = VAR_9->cfg->avail;
  *VAR_6 = VAR_2;
  return VAR_1;
 }

 return -VAR_0;
}
