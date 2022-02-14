
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {int * msi_bitmap; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pci_pbm_info *VAR_0)
{
 FUNC_0(VAR_0->msi_bitmap);
 VAR_0->msi_bitmap = ((void*)0);
}
