
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_conf {int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (int,int *,int,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, struct pci_conf *VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2, &VAR_3->pc_sel, VAR_4, 2);
 if ((VAR_8 & VAR_1) == VAR_0) {
  VAR_6 = FUNC_0(FUNC_2(VAR_2, &VAR_3->pc_sel, VAR_4, 4));
  VAR_7 = FUNC_0(FUNC_2(VAR_2, &VAR_3->pc_sel, VAR_5, 4));
  VAR_9 = 32;
 } else {
  VAR_6 = FUNC_0(VAR_8);
  VAR_7 = FUNC_0(FUNC_2(VAR_2, &VAR_3->pc_sel, VAR_5, 2));
  VAR_9 = 16;
 }
 FUNC_1(VAR_4, "I/O Port", VAR_9, VAR_6, VAR_7);
}
