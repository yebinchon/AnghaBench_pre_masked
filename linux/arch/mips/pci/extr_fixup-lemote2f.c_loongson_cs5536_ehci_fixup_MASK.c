
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 u32 VAR_3, VAR_4;


 FUNC_1(FUNC_0(VAR_1), &VAR_3, &VAR_4);
 FUNC_2(FUNC_0(VAR_1), (1 << 1) | (1 << 3), VAR_4);


 FUNC_3(VAR_2, VAR_0, 0x2000);
}
