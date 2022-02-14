
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_pbm_info {int devhandle; } ;
struct pci_bus {unsigned int number; struct pci_pbm_info* sysdata; } ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct pci_pbm_info*,unsigned int,unsigned int,int) ;
 int FUNC_4 (int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_1, unsigned int VAR_2,
          int VAR_3, int VAR_4, u32 VAR_5)
{
 struct pci_pbm_info *VAR_6 = VAR_1->sysdata;
 u32 VAR_7 = VAR_6->devhandle;
 unsigned int VAR_8 = VAR_1->number;
 unsigned int VAR_9 = FUNC_2(VAR_2);
 unsigned int VAR_10 = FUNC_1(VAR_2);

 if (FUNC_3(VAR_6, VAR_8, VAR_2, VAR_3)) {

 } else {




  FUNC_4(VAR_7,
         FUNC_0(VAR_8, VAR_9, VAR_10),
         VAR_3, VAR_4, VAR_5);
 }
 return VAR_0;
}
