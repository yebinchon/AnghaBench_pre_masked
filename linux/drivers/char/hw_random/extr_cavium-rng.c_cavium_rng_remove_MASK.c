
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cavium_rng_pf {int control_status; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct cavium_rng_pf* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct cavium_rng_pf *VAR_1;

 VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_0);


 FUNC_2(0, VAR_1->control_status);
}
