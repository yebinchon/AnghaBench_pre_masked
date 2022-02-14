
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,unsigned char) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int VAR_7 ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct pci_dev*,int,unsigned char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, unsigned int VAR_9)
{
 if (VAR_7 && VAR_5 < 0xc8000) {
  FUNC_1(VAR_8, "incorrect base address (%#x) specified "
         "for mmapped I/O\n", VAR_5);
  return 0;
 }

 if (VAR_5 == 0) {
  VAR_5 = VAR_0;
 }
 return 1;
}
