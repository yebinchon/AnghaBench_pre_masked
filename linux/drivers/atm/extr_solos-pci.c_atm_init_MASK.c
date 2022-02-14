
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct solos_card {int nr_ports; TYPE_2__* dev; TYPE_4__** atmdev; int * cli_queue; int * tx_queue; } ;
struct sk_buff {int dummy; } ;
struct pkt_hdr {void* type; void* vci; void* vpi; void* size; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int vpi_bits; int vci_bits; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {void* phy_data; struct solos_card* dev_data; TYPE_1__ ci_range; int number; TYPE_3__ class_dev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 TYPE_4__* FUNC_1 (char*,struct device*,int *,int,int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct solos_card*) ;
 void* FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *) ;
 int VAR_5 ;
 int FUNC_9 (struct solos_card*,int,struct sk_buff*,int *) ;
 struct pkt_hdr* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct solos_card *VAR_7, struct device *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->nr_ports; VAR_9++) {
  struct sk_buff *VAR_10;
  struct pkt_hdr *VAR_11;

  FUNC_11(&VAR_7->tx_queue[VAR_9]);
  FUNC_11(&VAR_7->cli_queue[VAR_9]);

  VAR_7->atmdev[VAR_9] = FUNC_1("solos-pci", VAR_8, &VAR_5, -1, ((void*)0));
  if (!VAR_7->atmdev[VAR_9]) {
   FUNC_5(&VAR_7->dev->dev, "Could not register ATM device %d\n", VAR_9);
   FUNC_3(VAR_7);
   return -VAR_1;
  }
  if (FUNC_8(&VAR_7->atmdev[VAR_9]->class_dev, &VAR_4))
   FUNC_5(&VAR_7->dev->dev, "Could not register console for ATM device %d\n", VAR_9);
  if (FUNC_12(&VAR_7->atmdev[VAR_9]->class_dev.kobj, &VAR_6))
   FUNC_5(&VAR_7->dev->dev, "Could not register parameter group for ATM device %d\n", VAR_9);

  FUNC_6(&VAR_7->dev->dev, "Registered ATM device %d\n", VAR_7->atmdev[VAR_9]->number);

  VAR_7->atmdev[VAR_9]->ci_range.vpi_bits = 8;
  VAR_7->atmdev[VAR_9]->ci_range.vci_bits = 16;
  VAR_7->atmdev[VAR_9]->dev_data = VAR_7;
  VAR_7->atmdev[VAR_9]->phy_data = (void *)(unsigned long)VAR_9;
  FUNC_2(VAR_7->atmdev[VAR_9], VAR_0);

  VAR_10 = FUNC_0(sizeof(*VAR_11), VAR_2);
  if (!VAR_10) {
   FUNC_7(&VAR_7->dev->dev, "Failed to allocate sk_buff in atm_init()\n");
   continue;
  }

  VAR_11 = FUNC_10(VAR_10, sizeof(*VAR_11));

  VAR_11->size = FUNC_4(0);
  VAR_11->vpi = FUNC_4(0);
  VAR_11->vci = FUNC_4(0);
  VAR_11->type = FUNC_4(VAR_3);

  FUNC_9(VAR_7, VAR_9, VAR_10, ((void*)0));
 }
 return 0;
}
