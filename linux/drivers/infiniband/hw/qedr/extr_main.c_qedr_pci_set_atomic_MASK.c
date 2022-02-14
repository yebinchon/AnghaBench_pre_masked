
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_dev {int atomic_cap; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct qedr_dev *VAR_4, struct pci_dev *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5,
            VAR_2);

 if (VAR_6) {
  VAR_4->atomic_cap = VAR_1;
  FUNC_0(VAR_4, VAR_3, "Atomic capability disabled\n");
 } else {
  VAR_4->atomic_cap = VAR_0;
  FUNC_0(VAR_4, VAR_3, "Atomic capability enabled\n");
 }
}
