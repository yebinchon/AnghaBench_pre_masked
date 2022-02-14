
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rmi_driver_data {scalar_t__ num_tx_electrodes; scalar_t__ num_rx_electrodes; } ;
struct rmi_device {int dev; } ;
struct f54_data {int num_rx_electrodes; int num_tx_electrodes; int input; TYPE_1__* fn; } ;
struct TYPE_2__ {struct rmi_device* rmi_dev; } ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (struct f54_data*,int ) ;

__attribute__((used)) static size_t FUNC_2(struct f54_data *VAR_0)
{
 struct rmi_device *VAR_1 = VAR_0->fn->rmi_dev;
 struct rmi_driver_data *VAR_2 = FUNC_0(&VAR_1->dev);
 u8 VAR_3 = VAR_2->num_rx_electrodes ? : VAR_0->num_rx_electrodes;
 u8 VAR_4 = VAR_2->num_tx_electrodes ? : VAR_0->num_tx_electrodes;
 size_t VAR_5;

 switch (FUNC_1(VAR_0, VAR_0->input)) {
 case 132:
  VAR_5 = VAR_3 * VAR_4;
  break;
 case 133:
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_5 = sizeof(u16) * VAR_3 * VAR_4;
  break;
 default:
  VAR_5 = 0;
 }

 return VAR_5;
}
