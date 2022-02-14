
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct vio_dev {TYPE_1__ dev; int type; int dev_no; } ;
struct vdc_check_port_data {char* type; int dev_no; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ,struct vdc_check_port_data*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct vio_dev *VAR_1)
{
 struct vdc_check_port_data VAR_2;
 struct device *VAR_3;

 VAR_2.dev_no = VAR_1->dev_no;
 VAR_2.type = (char *)&VAR_1->type;

 VAR_3 = FUNC_0(VAR_1->dev.parent, &VAR_2,
    VAR_0);

 if (VAR_3)
  return 1;

 return 0;
}
