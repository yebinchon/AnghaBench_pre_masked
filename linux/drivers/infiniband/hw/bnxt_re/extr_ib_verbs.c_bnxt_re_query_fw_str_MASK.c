
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device {int dummy; } ;
struct TYPE_2__ {int* fw_ver; } ;
struct bnxt_re_dev {TYPE_1__ dev_attr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,int,int,int) ;
 struct bnxt_re_dev* FUNC_1 (struct ib_device*,struct ib_device*) ;

void FUNC_2(struct ib_device *VAR_1, char *VAR_2)
{
 struct bnxt_re_dev *VAR_3 = FUNC_1(VAR_1, VAR_1);

 FUNC_0(VAR_2, VAR_0, "%d.%d.%d.%d",
   VAR_3->dev_attr.fw_ver[0], VAR_3->dev_attr.fw_ver[1],
   VAR_3->dev_attr.fw_ver[2], VAR_3->dev_attr.fw_ver[3]);
}
