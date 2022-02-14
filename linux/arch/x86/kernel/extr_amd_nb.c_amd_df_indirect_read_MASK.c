
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ num; } ;
struct TYPE_3__ {struct pci_dev* link; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_4 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int VAR_2 ;

int FUNC_6(u16 VAR_3, u8 VAR_4, u16 VAR_5, u8 VAR_6, u32 *VAR_7)
{
 struct pci_dev *VAR_8;
 u32 VAR_9;
 int VAR_10 = -VAR_0;

 if (VAR_3 >= VAR_1.num)
  goto out;

 VAR_8 = FUNC_2(VAR_3)->link;
 if (!VAR_8)
  goto out;

 VAR_9 = 1;
 VAR_9 |= VAR_5 & 0x3FC;
 VAR_9 |= (VAR_4 & 0x7) << 11;
 VAR_9 |= VAR_6 << 16;

 FUNC_0(&VAR_2);

 VAR_10 = FUNC_4(VAR_8, 0x5C, VAR_9);
 if (VAR_10) {
  FUNC_5("Error writing DF Indirect FICAA, FICAA=0x%x\n", VAR_9);
  goto out_unlock;
 }

 VAR_10 = FUNC_3(VAR_8, 0x98, VAR_7);
 if (VAR_10)
  FUNC_5("Error reading DF Indirect FICAD LO, FICAA=0x%x.\n", VAR_9);

out_unlock:
 FUNC_1(&VAR_2);

out:
 return VAR_10;
}
