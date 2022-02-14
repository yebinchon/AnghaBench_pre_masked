
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adis {TYPE_2__* spi; TYPE_1__* data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int glob_cmd_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct adis*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2(struct adis *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_1->data->glob_cmd_reg,
   VAR_0);
 if (VAR_2)
  FUNC_1(&VAR_1->spi->dev, "Failed to reset device: %d\n", VAR_2);

 return VAR_2;
}
