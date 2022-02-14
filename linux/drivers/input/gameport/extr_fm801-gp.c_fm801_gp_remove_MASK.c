
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct fm801_gp {int res_port; int gameport; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fm801_gp*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct fm801_gp* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct fm801_gp *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->gameport);
 FUNC_4(VAR_1->res_port);
 FUNC_1(VAR_1);

 FUNC_2(VAR_0);
}
