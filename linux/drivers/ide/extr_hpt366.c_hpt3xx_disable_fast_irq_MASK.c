
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dev; } ;
struct ide_host {int ** dev; struct hpt_info* host_priv; } ;
struct hpt_info {scalar_t__ chip_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ide_host* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2, u8 VAR_3)
{
 struct ide_host *VAR_4 = FUNC_0(VAR_2);
 struct hpt_info *VAR_5 = VAR_4->host_priv + (&VAR_2->dev == VAR_4->dev[1]);
 u8 VAR_6 = VAR_5->chip_type;
 u8 VAR_7, VAR_8 = 0;





 FUNC_1(VAR_2, VAR_3 + 1, &VAR_8);

 if (VAR_6 >= VAR_1)
  VAR_7 = VAR_8 & ~0x07;
 else if (VAR_6 >= VAR_0) {
  VAR_7 = VAR_8;
  VAR_7 &= ~0x02;



  VAR_7 |= 0x01;

 } else
  VAR_7 = VAR_8 & ~0x80;

 if (VAR_7 != VAR_8)
  FUNC_2(VAR_2, VAR_3 + 1, VAR_7);
}
