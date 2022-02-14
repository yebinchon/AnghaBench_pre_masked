
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hpt_info {scalar_t__ chip_type; int pci_clk; scalar_t__ dpll_clk; } ;
struct TYPE_5__ {int select_data; int * rw_disk; TYPE_1__* host; scalar_t__ channel; int dev; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_4__ {int host_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hpt_info* FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_3)
{
 struct hpt_info *VAR_4 = FUNC_0(VAR_3->dev);
 u8 VAR_5 = VAR_4->chip_type;


 VAR_3->select_data = VAR_3->channel ? 0x54 : 0x50;







 if (VAR_5 >= VAR_0 && VAR_4->dpll_clk && VAR_4->pci_clk < 66) {




  VAR_3->host->host_flags |= VAR_1;
  VAR_3->rw_disk = &VAR_2;
 }
}
