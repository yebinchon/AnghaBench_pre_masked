
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {int number; } ;
struct TYPE_4__ {int (* read ) (int ,int ,unsigned int,int,int,int *) ;} ;
struct TYPE_3__ {int (* read ) (int ,int ,unsigned int,int,int,int *) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct pci_bus*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int,int,int,int *) ;
 int FUNC_2 (int ,int ,unsigned int,int,int,int *) ;
 scalar_t__ FUNC_3 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
      int VAR_5, u32 *VAR_6)
{
 if (FUNC_3(VAR_2->number, VAR_3, VAR_4))
  return VAR_0(FUNC_0(VAR_2), VAR_2->number,
     VAR_3, VAR_4, VAR_5, VAR_6);
 return VAR_1->read(FUNC_0(VAR_2), VAR_2->number,
         VAR_3, VAR_4, VAR_5, VAR_6);
}
