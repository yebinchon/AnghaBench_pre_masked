
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,struct pci_conf*,int ,int ) ;
 int FUNC_1 (int,struct pci_conf*,int ,int ,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_13, struct pci_conf *VAR_14)
{
 uint16_t VAR_15;

 VAR_15 = FUNC_3(VAR_13, &VAR_14->pc_sel, VAR_4, 2);
 FUNC_1(VAR_13, VAR_14, VAR_9, VAR_11,
     VAR_15 & VAR_1);
 FUNC_1(VAR_13, VAR_14, VAR_10, VAR_12,
     VAR_15 & VAR_2);
 FUNC_0(VAR_13, VAR_14, VAR_5, VAR_7);
 FUNC_0(VAR_13, VAR_14, VAR_6, VAR_8);
 FUNC_2(VAR_15 & VAR_0,
     VAR_15 & VAR_3, 0);
}
