
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rmi_device {int dummy; } ;
struct TYPE_2__ {struct rmi_device* rmi_dev; } ;
struct rmi_data {int rmi_irq; int flags; TYPE_1__ xport; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rmi_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct rmi_device*,int ,int *,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct rmi_data *VAR_4 = FUNC_1(VAR_1);
 struct rmi_device *VAR_5 = VAR_4->xport.rmi_dev;
 unsigned long VAR_6;

 if (!(FUNC_5(VAR_0, &VAR_4->flags)))
  return 0;

 FUNC_3(VAR_6);

 FUNC_4(VAR_5, VAR_2[1], &VAR_2[2], VAR_3 - 2);

 FUNC_0(VAR_4->rmi_irq);

 FUNC_2(VAR_6);

 return 1;
}
