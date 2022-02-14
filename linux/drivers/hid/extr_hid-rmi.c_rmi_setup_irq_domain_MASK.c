
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_data {scalar_t__ rmi_irq; int domain; } ;
struct TYPE_2__ {int fwnode; } ;
struct hid_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,struct rmi_data*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct rmi_data* FUNC_2 (struct hid_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int *,struct rmi_data*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_4)
{
 struct rmi_data *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_5->domain = FUNC_4(VAR_4->dev.fwnode, 1,
       &VAR_2, VAR_5);
 if (!VAR_5->domain)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_4->dev, &VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->rmi_irq = FUNC_3(VAR_5->domain, 0);
 if (VAR_5->rmi_irq <= 0) {
  FUNC_1(VAR_4, "Can't allocate an IRQ\n");
  return VAR_5->rmi_irq < 0 ? VAR_5->rmi_irq : -VAR_1;
 }

 return 0;
}
