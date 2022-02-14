
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dev; } ;
struct cptvf_wqe {int twork; } ;
struct cpt_vf {int vfid; struct pci_dev* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpt_vf*) ;
 int FUNC_1 (struct cpt_vf*,scalar_t__) ;
 int FUNC_2 (int *,char*,int ) ;
 struct cptvf_wqe* FUNC_3 (struct cpt_vf*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct cpt_vf *VAR_4 = (struct cpt_vf *)VAR_3;
 struct pci_dev *VAR_5 = VAR_4->pdev;

 u32 VAR_6 = FUNC_0(VAR_4);

 if (VAR_6) {
  struct cptvf_wqe *VAR_7;




  FUNC_1(VAR_4, VAR_6);
  VAR_7 = FUNC_3(VAR_4, 0);
  if (FUNC_5(!VAR_7)) {
   FUNC_2(&VAR_5->dev, "No work to schedule for VF (%d)",
    VAR_4->vfid);
   return VAR_1;
  }
  FUNC_4(&VAR_7->twork);
 }

 return VAR_0;
}
