
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {struct pci_bus* bus; int dev; } ;
struct pci_bus {int dummy; } ;
struct owl_ctx {int eeprom_load; } ;
struct firmware {int size; scalar_t__ data; } ;
struct ath9k_platform_data {int * eeprom_name; int eeprom_data; } ;


 scalar_t__ FUNC_0 (struct pci_dev*,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 struct ath9k_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct pci_bus*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct firmware const*) ;

__attribute__((used)) static void FUNC_11(const struct firmware *VAR_0, void *VAR_1)
{
 struct pci_dev *VAR_2 = (struct pci_dev *) VAR_1;
 struct owl_ctx *VAR_3 = (struct owl_ctx *) FUNC_5(VAR_2);
 struct ath9k_platform_data *VAR_4 = FUNC_3(&VAR_2->dev);
 struct pci_bus *VAR_5;

 FUNC_1(&VAR_3->eeprom_load);

 if (!VAR_0) {
  FUNC_2(&VAR_2->dev, "no eeprom data received.\n");
  goto release;
 }


 if (VAR_0->size > sizeof(VAR_4->eeprom_data) || VAR_0->size < 0x200 ||
     (VAR_0->size & 1) == 1) {
  FUNC_2(&VAR_2->dev, "eeprom file has an invalid size.\n");
  goto release;
 }

 if (VAR_4) {
  FUNC_4(VAR_4->eeprom_data, VAR_0->data, VAR_0->size);





  VAR_4->eeprom_name = ((void*)0);
 }

 if (FUNC_0(VAR_2, (const u16 *) VAR_0->data, VAR_0->size))
  goto release;

 FUNC_6();
 VAR_5 = VAR_2->bus;
 FUNC_8(VAR_2);




 FUNC_7(VAR_5);
 FUNC_9();

release:
 FUNC_10(VAR_0);
}
