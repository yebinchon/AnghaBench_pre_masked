
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct apertures_struct {TYPE_2__* ranges; } ;
struct TYPE_4__ {int size; int base; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*,char*,int) ;
 int FUNC_2 (struct apertures_struct*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 struct apertures_struct *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_0(1);
 if (!VAR_3)
  return;

 VAR_3->ranges[0].base = FUNC_4(VAR_2, 0);
 VAR_3->ranges[0].size = FUNC_3(VAR_2, 0);




 FUNC_1(VAR_3, "astdrmfb", VAR_4);
 FUNC_2(VAR_3);
}
