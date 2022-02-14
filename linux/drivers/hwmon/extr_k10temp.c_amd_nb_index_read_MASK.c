
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,unsigned int,unsigned int,int *) ;
 int FUNC_3 (int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3, int VAR_4, u32 *VAR_5)
{
 FUNC_0(&VAR_0);
 FUNC_3(VAR_1->bus, VAR_2,
       VAR_3, VAR_4);
 FUNC_2(VAR_1->bus, VAR_2,
      VAR_3 + 4, VAR_5);
 FUNC_1(&VAR_0);
}
