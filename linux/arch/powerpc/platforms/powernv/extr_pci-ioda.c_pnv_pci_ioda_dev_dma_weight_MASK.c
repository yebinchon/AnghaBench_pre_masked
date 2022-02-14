
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ hdr_type; int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_5, void *VAR_6)
{
 unsigned int *VAR_7 = (unsigned int *)VAR_6;




 if (VAR_5->hdr_type != VAR_4)
  return 0;

 if (VAR_5->class == VAR_2 ||
     VAR_5->class == VAR_1 ||
     VAR_5->class == VAR_0)
  *VAR_7 += 3;
 else if ((VAR_5->class >> 8) == VAR_3)
  *VAR_7 += 15;
 else
  *VAR_7 += 10;

 return 0;
}
