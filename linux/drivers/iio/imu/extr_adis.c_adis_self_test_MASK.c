
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adis {TYPE_2__* data; TYPE_1__* spi; } ;
struct TYPE_4__ {int self_test_mask; int msc_ctrl_reg; scalar_t__ self_test_no_autoclear; int startup_delay; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct adis*) ;
 int FUNC_1 (struct adis*,int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct adis *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, VAR_0->data->msc_ctrl_reg,
   VAR_0->data->self_test_mask);
 if (VAR_1) {
  FUNC_2(&VAR_0->spi->dev, "Failed to initiate self test: %d\n",
   VAR_1);
  return VAR_1;
 }

 FUNC_3(VAR_0->data->startup_delay);

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_0->data->self_test_no_autoclear)
  FUNC_1(VAR_0, VAR_0->data->msc_ctrl_reg, 0x00);

 return VAR_1;
}
