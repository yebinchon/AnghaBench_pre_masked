
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_2__ {int table_bar; int pba_bar; int table_count; int pba_offset; scalar_t__ pba_size; scalar_t__ table_offset; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;
struct msixcap {int dummy; } ;
typedef int msixcap ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_devinst*,int *,int) ;
 int FUNC_3 (struct pci_devinst*,int,int ,scalar_t__) ;
 int FUNC_4 (struct pci_devinst*,int) ;
 int FUNC_5 (struct msixcap*,int,int,int) ;
 int FUNC_6 (int,int) ;

int
FUNC_7(struct pci_devinst *VAR_4, int VAR_5, int VAR_6)
{
 uint32_t VAR_7;
 struct msixcap VAR_8;

 FUNC_1(VAR_5 >= 1 && VAR_5 <= VAR_0);
 FUNC_1(VAR_6 >= 0 && VAR_6 <= VAR_3);

 VAR_7 = VAR_5 * VAR_1;


 VAR_7 = FUNC_6(VAR_7, 4096);

 VAR_4->pi_msix.table_bar = VAR_6;
 VAR_4->pi_msix.pba_bar = VAR_6;
 VAR_4->pi_msix.table_offset = 0;
 VAR_4->pi_msix.table_count = VAR_5;
 VAR_4->pi_msix.pba_offset = VAR_7;
 VAR_4->pi_msix.pba_size = FUNC_0(VAR_5);

 FUNC_4(VAR_4, VAR_5);

 FUNC_5(&VAR_8, VAR_5, VAR_6, VAR_7);


 FUNC_3(VAR_4, VAR_6, VAR_2,
    VAR_7 + VAR_4->pi_msix.pba_size);

 return (FUNC_2(VAR_4, (u_char *)&VAR_8,
     sizeof(VAR_8)));
}
