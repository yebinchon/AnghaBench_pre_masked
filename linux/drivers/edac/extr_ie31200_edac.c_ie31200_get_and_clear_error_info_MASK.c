
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int pdev; struct ie31200_priv* pvt_info; } ;
struct ie31200_priv {int c1errlog; int c0errlog; } ;
struct ie31200_error_info {int errsts; int errsts2; void** eccerrlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ctl_info*) ;
 void* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_3,
          struct ie31200_error_info *VAR_4)
{
 struct pci_dev *VAR_5;
 struct ie31200_priv *VAR_6 = VAR_3->pvt_info;

 VAR_5 = FUNC_3(VAR_3->pdev);






 FUNC_2(VAR_5, VAR_0, &VAR_4->errsts);
 if (!(VAR_4->errsts & VAR_1))
  return;

 VAR_4->eccerrlog[0] = FUNC_1(VAR_6->c0errlog);
 if (VAR_2 == 2)
  VAR_4->eccerrlog[1] = FUNC_1(VAR_6->c1errlog);

 FUNC_2(VAR_5, VAR_0, &VAR_4->errsts2);







 if ((VAR_4->errsts ^ VAR_4->errsts2) & VAR_1) {
  VAR_4->eccerrlog[0] = FUNC_1(VAR_6->c0errlog);
  if (VAR_2 == 2)
   VAR_4->eccerrlog[1] =
    FUNC_1(VAR_6->c1errlog);
 }

 FUNC_0(VAR_3);
}
