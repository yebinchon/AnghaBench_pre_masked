
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct Scsi_Host {int shost_dev; TYPE_1__* hostt; } ;
struct TYPE_2__ {struct device_attribute** shost_attrs; } ;


 int FUNC_0 (int *,struct device_attribute*) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_0)
{
 struct device_attribute **VAR_1;

 for (VAR_1 = VAR_0->hostt->shost_attrs; VAR_1 && *VAR_1; ++VAR_1)
  FUNC_0(&VAR_0->shost_dev, *VAR_1);
}
