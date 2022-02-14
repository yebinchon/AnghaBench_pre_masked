
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_nvme_softc {int fw_log; int health_log; int err_log; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct pci_nvme_softc *VAR_0)
{

 FUNC_0(&VAR_0->err_log, 0, sizeof(VAR_0->err_log));
 FUNC_0(&VAR_0->health_log, 0, sizeof(VAR_0->health_log));
 FUNC_0(&VAR_0->fw_log, 0, sizeof(VAR_0->fw_log));
}
