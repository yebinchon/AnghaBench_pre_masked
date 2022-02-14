
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct pci_dev {int dummy; } ;
struct ide_port_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2, const struct ide_port_info *VAR_3,
          int VAR_4)
{
 ulong VAR_5 = FUNC_0(VAR_2, VAR_4);


 if (!VAR_5 || FUNC_1(VAR_2, VAR_4) == 0)
  return 0;


 if (VAR_5 & VAR_1)
  return 0;


 return -VAR_0;
}
