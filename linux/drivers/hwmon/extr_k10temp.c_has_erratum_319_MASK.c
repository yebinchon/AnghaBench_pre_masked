
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int devfn; int bus; } ;
struct TYPE_2__ {int x86; int x86_model; int x86_stepping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct pci_dev *VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_5.x86 != 0x10)
  return 0;





 VAR_7 = FUNC_2(0x80000001) & VAR_2;
 if (VAR_7 == VAR_1)
  return 1;
 if (VAR_7 != VAR_0)
  return 0;


 FUNC_3(VAR_6->bus,
      FUNC_0(FUNC_1(VAR_6->devfn), 2),
      VAR_4, &VAR_8);
 if (VAR_8 & VAR_3)
  return 0;







 return VAR_5.x86_model < 4 ||
        (VAR_5.x86_model == 4 && VAR_5.x86_stepping <= 2);
}
