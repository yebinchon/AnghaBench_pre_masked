
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int revision; int dev; } ;
struct idt77252_dev {int revision; int index; int name; int sramsize; void* membase; struct idt77252_dev* next; int link_pcr; int vcibits; int vpibits; void** fbq; struct atm_dev* atmdev; int tst_timer; int tst_lock; int cmd_lock; int mutex; int tqueue; struct pci_dev* pcidev; } ;
struct TYPE_3__ {int vci_bits; int vpi_bits; } ;
struct atm_dev {TYPE_2__* phy; int link_rate; TYPE_1__ ci_range; struct idt77252_dev* dev_data; } ;
struct TYPE_4__ {int (* stop ) (struct atm_dev*) ;int (* start ) (struct atm_dev*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 struct atm_dev* FUNC_2 (char*,int *,int *,int,int *) ;
 int FUNC_3 (struct idt77252_dev*) ;
 int FUNC_4 (int *,int ) ;
 struct idt77252_dev* VAR_3 ;
 scalar_t__ FUNC_5 (struct idt77252_dev*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct idt77252_dev*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct atm_dev*) ;
 void* FUNC_8 (unsigned long,int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (struct idt77252_dev*) ;
 struct idt77252_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 unsigned long FUNC_16 (struct pci_dev*,int) ;
 int FUNC_17 (char*,int,...) ;
 int FUNC_18 (struct idt77252_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 (struct atm_dev*) ;
 int FUNC_22 (struct atm_dev*) ;
 int FUNC_23 (struct atm_dev*) ;
 int FUNC_24 (int *,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_7,
        const struct pci_device_id *VAR_8)
{
 static struct idt77252_dev **VAR_9 = &VAR_3;
 static int VAR_10 = 0;

 unsigned long VAR_11, VAR_12;
 struct idt77252_dev *VAR_13;
 struct atm_dev *VAR_14;
 int VAR_15, VAR_16;


 if ((VAR_16 = FUNC_14(VAR_7))) {
  FUNC_17("idt77252: can't enable PCI device at %s\n", FUNC_15(VAR_7));
  return VAR_16;
 }

 if ((VAR_16 = FUNC_4(&VAR_7->dev, FUNC_0(32)))) {
  FUNC_17("idt77252: can't enable DMA for PCI device at %s\n", FUNC_15(VAR_7));
  return VAR_16;
 }

 VAR_13 = FUNC_11(sizeof(struct idt77252_dev), VAR_2);
 if (!VAR_13) {
  FUNC_17("idt77252-%d: can't allocate private data\n", VAR_10);
  VAR_16 = -VAR_1;
  goto err_out_disable_pdev;
 }
 VAR_13->revision = VAR_7->revision;
 VAR_13->index = VAR_10;
 VAR_13->pcidev = VAR_7;
 FUNC_20(VAR_13->name, "idt77252-%d", VAR_13->index);

 FUNC_1(&VAR_13->tqueue, VAR_5);

 VAR_11 = FUNC_16(VAR_7, 1);
 VAR_12 = FUNC_16(VAR_7, 2);

 FUNC_12(&VAR_13->mutex);
 FUNC_19(&VAR_13->cmd_lock);
 FUNC_19(&VAR_13->tst_lock);

 FUNC_24(&VAR_13->tst_timer, VAR_6, 0);


 VAR_13->membase = FUNC_8(VAR_11, 1024);
 if (!VAR_13->membase) {
  FUNC_17("%s: can't ioremap() membase\n", VAR_13->name);
  VAR_16 = -VAR_0;
  goto err_out_free_card;
 }

 if (FUNC_6(VAR_13)) {
  FUNC_17("%s: preset failed\n", VAR_13->name);
  VAR_16 = -VAR_0;
  goto err_out_iounmap;
 }

 VAR_14 = FUNC_2("idt77252", &VAR_7->dev, &VAR_4, -1,
          ((void*)0));
 if (!VAR_14) {
  FUNC_17("%s: can't register atm device\n", VAR_13->name);
  VAR_16 = -VAR_0;
  goto err_out_iounmap;
 }
 VAR_14->dev_data = VAR_13;
 VAR_13->atmdev = VAR_14;
 VAR_13->sramsize = FUNC_18(VAR_13);

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  VAR_13->fbq[VAR_15] = FUNC_8(VAR_12 | 0x200000 | (VAR_15 << 18), 4);
  if (!VAR_13->fbq[VAR_15]) {
   FUNC_17("%s: can't ioremap() FBQ%d\n", VAR_13->name, VAR_15);
   VAR_16 = -VAR_0;
   goto err_out_deinit_card;
  }
 }

 FUNC_17("%s: ABR SAR (Rev %c): MEM %08lx SRAM %08lx [%u KB]\n",
        VAR_13->name, ((VAR_13->revision > 1) && (VAR_13->revision < 25)) ?
        'A' + VAR_13->revision - 1 : '?', VAR_11, VAR_12,
        VAR_13->sramsize / 1024);

 if (FUNC_7(VAR_14)) {
  FUNC_17("%s: init_card failed\n", VAR_13->name);
  VAR_16 = -VAR_0;
  goto err_out_deinit_card;
 }

 VAR_14->ci_range.vpi_bits = VAR_13->vpibits;
 VAR_14->ci_range.vci_bits = VAR_13->vcibits;
 VAR_14->link_rate = VAR_13->link_pcr;

 if (VAR_14->phy->start)
  VAR_14->phy->start(VAR_14);

 if (FUNC_5(VAR_13)) {
  FUNC_17("%s: dev_open failed\n", VAR_13->name);
  VAR_16 = -VAR_0;
  goto err_out_stop;
 }

 *VAR_9 = VAR_13;
 VAR_9 = &VAR_13->next;
 VAR_10++;

 return 0;

err_out_stop:
 if (VAR_14->phy->stop)
  VAR_14->phy->stop(VAR_14);

err_out_deinit_card:
 FUNC_3(VAR_13);

err_out_iounmap:
 FUNC_9(VAR_13->membase);

err_out_free_card:
 FUNC_10(VAR_13);

err_out_disable_pdev:
 FUNC_13(VAR_7);
 return VAR_16;
}
