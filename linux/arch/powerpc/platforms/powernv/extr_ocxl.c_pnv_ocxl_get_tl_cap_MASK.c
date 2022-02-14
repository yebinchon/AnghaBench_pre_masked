
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int,int,char*) ;

int FUNC_2(struct pci_dev *VAR_3, long *VAR_4,
   char *VAR_5, int VAR_6)
{
 if (VAR_6 != VAR_2)
  return -VAR_0;
 FUNC_0(VAR_5, 0, VAR_6);
 FUNC_1(2, 1, VAR_5);
 *VAR_4 = VAR_1;
 return 0;
}
