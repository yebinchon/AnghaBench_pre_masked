
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_device_id {scalar_t__ vendor; scalar_t__ driver_data; } ;
struct pci_dev {int dummy; } ;
struct ahci_host_priv {int port_map; } ;
typedef enum board_ids { ____Placeholder_board_ids } board_ids ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pci_device_id* FUNC_0 (int ,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4, struct ahci_host_priv *VAR_5)
{
 const struct pci_device_id *VAR_6 = FUNC_0(VAR_2, VAR_4);
 u16 VAR_7;




 if (!VAR_6 || VAR_6->vendor != VAR_0)
  return;


 if (((enum board_ids) VAR_6->driver_data) >= VAR_3)
  return;
 FUNC_1(VAR_4, VAR_1, &VAR_7);
 if ((VAR_7 & VAR_5->port_map) != VAR_5->port_map) {
  VAR_7 |= VAR_5->port_map;
  FUNC_2(VAR_4, VAR_1, VAR_7);
 }
}
