
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ num; } ;
struct TYPE_3__ {struct pci_dev* root; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pci_dev*,int,int *) ;
 int FUNC_4 (struct pci_dev*,int,int ) ;
 int FUNC_5 (char*,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(u16 VAR_3, u32 VAR_4, u32 *VAR_5, bool VAR_6)
{
 struct pci_dev *VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_3 >= VAR_1.num)
  goto out;

 VAR_7 = FUNC_2(VAR_3)->root;
 if (!VAR_7)
  goto out;

 FUNC_0(&VAR_2);

 VAR_8 = FUNC_4(VAR_7, 0x60, VAR_4);
 if (VAR_8) {
  FUNC_5("Error programming SMN address 0x%x.\n", VAR_4);
  goto out_unlock;
 }

 VAR_8 = (VAR_6 ? FUNC_4(VAR_7, 0x64, *VAR_5)
       : FUNC_3(VAR_7, 0x64, VAR_5));
 if (VAR_8)
  FUNC_5("Error %s SMN address 0x%x.\n",
   (VAR_6 ? "writing to" : "reading from"), VAR_4);

out_unlock:
 FUNC_1(&VAR_2);

out:
 return VAR_8;
}
