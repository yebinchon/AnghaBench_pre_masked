
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int live; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;

 if (!VAR_1.live)
  return 0;

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_3));
 if (VAR_4) {
  VAR_1.live = VAR_4;
  return VAR_4;
 }

 if (VAR_1.live < 0) {
  VAR_1.live = -VAR_0;
  return 1;
 }

 return 0;
}
