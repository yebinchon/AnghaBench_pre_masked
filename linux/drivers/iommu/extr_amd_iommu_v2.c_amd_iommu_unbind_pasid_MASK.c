
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct pasid_state {int mm; int mn; int pasid; } ;
struct device_state {int max_pasids; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct device_state*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct device_state* FUNC_3 (int ) ;
 struct pasid_state* FUNC_4 (struct device_state*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct device_state*) ;
 int FUNC_8 (struct pasid_state*) ;
 int FUNC_9 (struct pasid_state*) ;

void FUNC_10(struct pci_dev *VAR_0, int VAR_1)
{
 struct pasid_state *VAR_2;
 struct device_state *VAR_3;
 u16 VAR_4;

 FUNC_5();

 if (!FUNC_0())
  return;

 VAR_4 = FUNC_2(VAR_0);
 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3 == ((void*)0))
  return;

 if (VAR_1 < 0 || VAR_1 >= VAR_3->max_pasids)
  goto out;

 VAR_2 = FUNC_4(VAR_3, VAR_1);
 if (VAR_2 == ((void*)0))
  goto out;




 FUNC_8(VAR_2);


 FUNC_1(VAR_3, VAR_2->pasid);





 FUNC_6(&VAR_2->mn, VAR_2->mm);

 FUNC_9(VAR_2);

out:

 FUNC_7(VAR_3);


 FUNC_7(VAR_3);
}
