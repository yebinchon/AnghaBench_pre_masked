
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; scalar_t__ parent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int ,unsigned int,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_2, unsigned int VAR_3,
        int VAR_4, int VAR_5, u32 *VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_2->parent ? 1 : 0;

 if (VAR_7 == 0 && FUNC_0(VAR_3) == VAR_0)
  return VAR_1;

 return FUNC_1(VAR_7, VAR_2->number, VAR_3,
        VAR_4, VAR_5, VAR_6);
}
