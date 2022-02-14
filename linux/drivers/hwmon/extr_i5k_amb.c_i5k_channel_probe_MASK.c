
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,unsigned long,int *) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_3(u16 *VAR_4, unsigned long VAR_5)
{
 struct pci_dev *VAR_6;
 u16 VAR_7;
 int VAR_8 = -VAR_0;


 VAR_6 = FUNC_1(VAR_3, VAR_5, ((void*)0));
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_2(VAR_6, VAR_1, &VAR_7))
  goto out;
 VAR_4[0] = VAR_7;

 if (FUNC_2(VAR_6, VAR_2, &VAR_7))
  goto out;
 VAR_4[1] = VAR_7;

 VAR_8 = 0;

out:
 FUNC_0(VAR_6);
 return VAR_8;
}
