
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hisi_qm {scalar_t__ ver; scalar_t__ fun_type; int dev_name; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,struct hisi_qm*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ,int ,struct hisi_qm*) ;

__attribute__((used)) static int FUNC_3(struct hisi_qm *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->pdev;
 int VAR_11;

 VAR_11 = FUNC_2(FUNC_1(VAR_10, VAR_3),
     VAR_8, VAR_0, VAR_9->dev_name, VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->ver == VAR_5) {
  VAR_11 = FUNC_2(FUNC_1(VAR_10, VAR_2),
      VAR_7, VAR_0, VAR_9->dev_name, VAR_9);
  if (VAR_11)
   goto err_aeq_irq;

  if (VAR_9->fun_type == VAR_4) {
   VAR_11 = FUNC_2(FUNC_1(VAR_10,
       VAR_1),
       VAR_6, VAR_0,
       VAR_9->dev_name, VAR_9);
   if (VAR_11)
    goto err_abonormal_irq;
  }
 }

 return 0;

err_abonormal_irq:
 FUNC_0(FUNC_1(VAR_10, VAR_2), VAR_9);
err_aeq_irq:
 FUNC_0(FUNC_1(VAR_10, VAR_3), VAR_9);
 return VAR_11;
}
