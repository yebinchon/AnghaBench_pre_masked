
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpe; int sse; int rma; int rta; int sta; int mdpe; } ;
union cvmx_pci_cfg01 {int u32; TYPE_1__ s; } ;
struct edac_pci_ctl_info {int ctl_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct edac_pci_ctl_info*,char*) ;
 int FUNC_1 (struct edac_pci_ctl_info*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct edac_pci_ctl_info *VAR_1)
{
 union cvmx_pci_cfg01 VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_1, VAR_1->ctl_name);
  VAR_2 = 1;
  FUNC_3(VAR_0, VAR_2);
 }
 if (VAR_2) {
  FUNC_0(VAR_1, "Signaled System Error");
  VAR_2 = 1;
  FUNC_3(VAR_0, VAR_2);
 }
 if (VAR_2) {
  FUNC_0(VAR_1, "Received Master Abort");
  VAR_2 = 1;
  FUNC_3(VAR_0, VAR_2);
 }
 if (VAR_2) {
  FUNC_0(VAR_1, "Received Target Abort");
  VAR_2 = 1;
  FUNC_3(VAR_0, VAR_2);
 }
 if (VAR_2) {
  FUNC_0(VAR_1, "Signaled Target Abort");
  VAR_2 = 1;
  FUNC_3(VAR_0, VAR_2);
 }
 if (VAR_2) {
  FUNC_0(VAR_1, "Master Data Parity Error");
  VAR_2 = 1;
  FUNC_3(VAR_0, VAR_2);
 }
}
