
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device_state {int count; int wq; int list; } ;


 struct device_state* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct device_state*) ;
 int FUNC_5 (struct device_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device_state*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct pci_dev *VAR_1)
{
 struct device_state *VAR_2;
 unsigned long VAR_3;
 u16 VAR_4;

 if (!FUNC_1())
  return;

 VAR_4 = FUNC_3(VAR_1);

 FUNC_8(&VAR_0, VAR_3);

 VAR_2 = FUNC_0(VAR_4);
 if (VAR_2 == ((void*)0)) {
  FUNC_9(&VAR_0, VAR_3);
  return;
 }

 FUNC_6(&VAR_2->list);

 FUNC_9(&VAR_0, VAR_3);


 FUNC_5(VAR_2);

 FUNC_7(VAR_2);




 FUNC_10(VAR_2->wq, !FUNC_2(&VAR_2->count));
 FUNC_4(VAR_2);
}
