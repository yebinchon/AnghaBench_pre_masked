
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {int device; } ;
struct fw_ohci {scalar_t__ next_config_rom; scalar_t__ config_rom; scalar_t__ misc_buffer; int registers; struct fw_ohci* ir_context_list; struct fw_ohci* it_context_list; int at_response_ctx; int at_request_ctx; int misc_buffer_bus; TYPE_1__ card; int ar_response_ctx; int ar_request_ctx; int config_rom_bus; int next_config_rom_bus; int bus_reset_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (struct fw_ohci*) ;
 int FUNC_6 (int ,struct fw_ohci*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct fw_ohci*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct fw_ohci* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct fw_ohci*,int ) ;
 int FUNC_16 (struct fw_ohci*,int ,int ) ;
 int FUNC_17 (struct fw_ohci*) ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_5)
{
 struct fw_ohci *VAR_6 = FUNC_11(VAR_5);





 if (FUNC_15(VAR_6, VAR_1) & VAR_2) {
  FUNC_16(VAR_6, VAR_3, ~0);
  FUNC_5(VAR_6);
 }
 FUNC_1(&VAR_6->bus_reset_work);
 FUNC_7(&VAR_6->card);






 FUNC_17(VAR_6);
 FUNC_6(VAR_5->irq, VAR_6);

 if (VAR_6->next_config_rom && VAR_6->next_config_rom != VAR_6->config_rom)
  FUNC_4(VAR_6->card.device, VAR_0,
      VAR_6->next_config_rom, VAR_6->next_config_rom_bus);
 if (VAR_6->config_rom)
  FUNC_4(VAR_6->card.device, VAR_0,
      VAR_6->config_rom, VAR_6->config_rom_bus);
 FUNC_0(&VAR_6->ar_request_ctx);
 FUNC_0(&VAR_6->ar_response_ctx);
 FUNC_4(VAR_6->card.device, VAR_4,
     VAR_6->misc_buffer, VAR_6->misc_buffer_bus);
 FUNC_2(&VAR_6->at_request_ctx);
 FUNC_2(&VAR_6->at_response_ctx);
 FUNC_8(VAR_6->it_context_list);
 FUNC_8(VAR_6->ir_context_list);
 FUNC_10(VAR_5);
 FUNC_12(VAR_5, VAR_6->registers);
 FUNC_13(VAR_5, 0);
 FUNC_9(VAR_5);
 FUNC_8(VAR_6);
 FUNC_14(VAR_5);

 FUNC_3(&VAR_5->dev, "removed fw-ohci device\n");
}
