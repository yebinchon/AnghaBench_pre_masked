
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct adis {TYPE_2__* data; TYPE_1__* spi; } ;
struct TYPE_4__ {int status_error_mask; int * status_error_msgs; int diag_stat_reg; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct adis*,int ,int*) ;
 int FUNC_2 (int *,char*,int ) ;

int FUNC_3(struct adis *VAR_1)
{
 uint16_t VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_1->data->diag_stat_reg, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2 &= VAR_1->data->status_error_mask;

 if (VAR_2 == 0)
  return 0;

 for (VAR_4 = 0; VAR_4 < 16; ++VAR_4) {
  if (VAR_2 & FUNC_0(VAR_4)) {
   FUNC_2(&VAR_1->spi->dev, "%s.\n",
    VAR_1->data->status_error_msgs[VAR_4]);
  }
 }

 return -VAR_0;
}
