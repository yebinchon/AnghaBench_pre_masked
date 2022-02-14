
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct adis {TYPE_1__* data; } ;
struct TYPE_2__ {int (* enable_irq ) (struct adis*,int) ;int msc_ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adis*,int ,int *) ;
 int FUNC_1 (struct adis*,int ,int ) ;
 int FUNC_2 (struct adis*,int) ;

int FUNC_3(struct adis *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 uint16_t VAR_6;

 if (VAR_3->data->enable_irq)
  return VAR_3->data->enable_irq(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_3->data->msc_ctrl_reg, &VAR_6);
 if (VAR_5)
  goto error_ret;

 VAR_6 |= VAR_2;
 VAR_6 &= ~VAR_0;
 if (VAR_4)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 VAR_5 = FUNC_1(VAR_3, VAR_3->data->msc_ctrl_reg, VAR_6);

error_ret:
 return VAR_5;
}
