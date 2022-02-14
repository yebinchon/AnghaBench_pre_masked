
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssp_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct iio_dev {TYPE_2__ dev; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct ssp_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (struct ssp_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4, int *VAR_5,
        int *VAR_6, long VAR_7)
{
 u32 VAR_8;
 struct ssp_data *VAR_9 = FUNC_0(VAR_3->dev.parent->parent);

 switch (VAR_7) {
 case 128:
  VAR_8 = FUNC_2(VAR_9, VAR_2);
  FUNC_1(VAR_8, VAR_5, VAR_6);
  return VAR_1;
 default:
  break;
 }

 return -VAR_0;
}
