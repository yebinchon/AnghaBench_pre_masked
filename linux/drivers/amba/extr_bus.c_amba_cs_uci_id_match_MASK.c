
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amba_id {struct amba_cs_uci_id* data; } ;
struct TYPE_2__ {scalar_t__ devtype; int devarch; } ;
struct amba_device {TYPE_1__ uci; } ;
struct amba_cs_uci_id {int devarch_mask; scalar_t__ devtype; int devarch; } ;



__attribute__((used)) static int
FUNC_0(const struct amba_id *VAR_0, struct amba_device *VAR_1)
{
 int VAR_2 = 0;
 struct amba_cs_uci_id *VAR_3;

 VAR_3 = VAR_0->data;


 if (!VAR_3 || (VAR_3->devarch_mask == 0))
  return 1;


 VAR_2 = (VAR_1->uci.devtype == VAR_3->devtype) &&
  ((VAR_1->uci.devarch & VAR_3->devarch_mask) == VAR_3->devarch);
 return VAR_2;
}
