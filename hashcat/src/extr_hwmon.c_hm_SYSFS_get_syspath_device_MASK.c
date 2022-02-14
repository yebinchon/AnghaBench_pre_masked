
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pcie_function; int pcie_device; int pcie_bus; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_6__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_7__ {TYPE_1__* devices_param; } ;
typedef TYPE_3__ backend_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_1 (hashcat_ctx_t *VAR_1, const int VAR_2)
{
  backend_ctx_t *VAR_3 = VAR_1->backend_ctx;

  hc_device_param_t *VAR_4 = &VAR_3->devices_param[VAR_2];

  char *VAR_5;

  FUNC_0 (&VAR_5, "%s/0000:%02x:%02x.%01x", VAR_0, VAR_4->pcie_bus, VAR_4->pcie_device, VAR_4->pcie_function);

  return VAR_5;
}
