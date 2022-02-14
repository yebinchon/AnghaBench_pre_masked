
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_conf {int pc_sel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int,int ,int ) ;
 int FUNC_3 (int,int *,int,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, struct pci_conf *VAR_1, int VAR_2, int VAR_3,
    bool VAR_4)
{

 FUNC_2(VAR_2, VAR_4 ? "Prefetchable Memory" : "Memory", 32,
     FUNC_0(FUNC_3(VAR_0, &VAR_1->pc_sel, VAR_2, 4)),
     FUNC_1(FUNC_3(VAR_0, &VAR_1->pc_sel, VAR_3, 4)));
}
