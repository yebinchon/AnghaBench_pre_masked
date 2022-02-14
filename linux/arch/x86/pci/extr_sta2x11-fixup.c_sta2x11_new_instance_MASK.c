
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta2x11_instance {int list; scalar_t__ bus0; } ;
struct pci_dev {int dev; TYPE_1__* subordinate; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 struct sta2x11_instance* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_3)
{
 struct sta2x11_instance *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->bus0 = VAR_3->subordinate->number + 1;

 if (FUNC_4(&VAR_2)) {
  int VAR_5 = VAR_1;

  FUNC_1(&VAR_3->dev, "Using SWIOTLB (size %i)\n", VAR_5);
  if (FUNC_5(VAR_5))
   FUNC_0(&VAR_3->dev, "init swiotlb failed\n");
 }
 FUNC_3(&VAR_4->list, &VAR_2);
}
