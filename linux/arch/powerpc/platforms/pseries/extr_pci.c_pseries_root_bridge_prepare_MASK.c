
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_host_bridge {struct pci_bus* bus; } ;
struct pci_bus {void* cur_bus_speed; void* max_bus_speed; } ;
struct device_node {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct device_node* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int*,int) ;
 scalar_t__ FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_host_bridge*,int ,void*) ;
 int VAR_4 ;
 struct device_node* FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct pci_host_bridge *VAR_5)
{
 struct device_node *VAR_6, *VAR_7;
 struct pci_bus *VAR_8;
 u32 VAR_9[2];
 int VAR_10;

 VAR_8 = VAR_5->bus;


 FUNC_4(VAR_5, VAR_4,
     (void *) FUNC_3(VAR_8));

 VAR_6 = FUNC_5(VAR_8);
 if (!VAR_6)
  return 0;

 for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = FUNC_0(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7,
    "ibm,pcie-link-speed-stats",
    &VAR_9[0], 2);
  if (!VAR_10)
   break;
 }

 FUNC_1(VAR_7);

 if (VAR_10) {
  FUNC_6("no ibm,pcie-link-speed-stats property\n");
  return 0;
 }

 switch (VAR_9[0]) {
 case 0x01:
  VAR_8->max_bus_speed = VAR_0;
  break;
 case 0x02:
  VAR_8->max_bus_speed = VAR_1;
  break;
 case 0x04:
  VAR_8->max_bus_speed = VAR_2;
  break;
 default:
  VAR_8->max_bus_speed = VAR_3;
  break;
 }

 switch (VAR_9[1]) {
 case 0x01:
  VAR_8->cur_bus_speed = VAR_0;
  break;
 case 0x02:
  VAR_8->cur_bus_speed = VAR_1;
  break;
 case 0x04:
  VAR_8->cur_bus_speed = VAR_2;
  break;
 default:
  VAR_8->cur_bus_speed = VAR_3;
  break;
 }

 return 0;
}
