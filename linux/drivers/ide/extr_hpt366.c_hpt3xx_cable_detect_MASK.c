
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int devfn; } ;
struct hpt_info {scalar_t__ chip_type; } ;
struct TYPE_3__ {scalar_t__ select_data; scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 struct hpt_info* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static u8 FUNC_8(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_6(VAR_4->dev);
 struct hpt_info *VAR_6 = FUNC_1(VAR_4->dev);
 u8 VAR_7 = VAR_6->chip_type;
 u8 VAR_8 = 0, VAR_9 = VAR_4->channel ? 0x01 : 0x02;






 if (VAR_7 == VAR_3 && (FUNC_0(VAR_5->devfn) & 1)) {





  u8 VAR_10 = VAR_4->select_data + 2;
  u16 VAR_11;

  FUNC_3(VAR_5, VAR_10, &VAR_11);
  FUNC_5(VAR_5, VAR_10, VAR_11 | 0x8000);

  FUNC_7(10);
  FUNC_2(VAR_5, 0x5a, &VAR_8);
  FUNC_5(VAR_5, VAR_10, VAR_11);
 } else if (VAR_7 >= VAR_2) {




  u8 VAR_12 = 0;

  FUNC_2(VAR_5, 0x5b, &VAR_12);
  FUNC_4(VAR_5, 0x5b, VAR_12 & ~1);

  FUNC_7(10);
  FUNC_2(VAR_5, 0x5a, &VAR_8);
  FUNC_4(VAR_5, 0x5b, VAR_12);
 } else
  FUNC_2(VAR_5, 0x5a, &VAR_8);

 return (VAR_8 & VAR_9) ? VAR_0 : VAR_1;
}
