
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct qib_devdata* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct qib_devdata*,char*,int) ;
 int FUNC_3 (struct qib_devdata*) ;
 int VAR_1 ;
 int FUNC_4 (struct qib_devdata*) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct qib_devdata*) ;
 int FUNC_7 (struct qib_devdata*) ;
 int FUNC_8 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_2)
{
 struct qib_devdata *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 FUNC_7(VAR_3);





 if (!VAR_1)
  FUNC_5(VAR_3);

 FUNC_6(VAR_3);


 FUNC_0(VAR_0);

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3, "Failed counters filesystem cleanup: %d\n",
       -VAR_4);

 FUNC_3(VAR_3);

 FUNC_4(VAR_3);
}
