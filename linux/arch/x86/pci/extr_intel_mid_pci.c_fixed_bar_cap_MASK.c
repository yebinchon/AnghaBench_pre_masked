
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {int number; } ;
struct TYPE_2__ {scalar_t__ (* read ) (int ,int ,unsigned int,int,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_bus*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,unsigned int,int,int,int*) ;
 scalar_t__ FUNC_4 (int ,int ,unsigned int,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0, VAR_8;

 VAR_6 = VAR_0;

 if (!VAR_3)
  return 0;

 while (VAR_6) {
  if (VAR_3->read(FUNC_2(VAR_4), VAR_4->number,
       VAR_5, VAR_6, 4, &VAR_7))
   return 0;

  if (FUNC_0(VAR_7) == 0x0000 ||
   FUNC_0(VAR_7) == 0xffff)
   break;

  if (FUNC_0(VAR_7) == VAR_2) {
   VAR_3->read(FUNC_2(VAR_4), VAR_4->number,
           VAR_5, VAR_6 + 4, 4, &VAR_8);
   if ((VAR_8 & 0xffff) == VAR_1)
    return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_7);
 }

 return 0;
}
