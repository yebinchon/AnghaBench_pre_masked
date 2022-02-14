
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct cpt_vf {scalar_t__ vftype; int vfid; struct pci_dev* pdev; } ;
struct TYPE_3__ {scalar_t__ se_req; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct cpt_request_info {TYPE_2__ ctrl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cpt_vf*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct cpt_vf*,struct cpt_request_info*) ;

int FUNC_3(void *VAR_4, struct cpt_request_info *VAR_5)
{
 struct cpt_vf *VAR_6 = (struct cpt_vf *)VAR_4;
 struct pci_dev *VAR_7 = VAR_6->pdev;

 if (!FUNC_0(VAR_6)) {
  FUNC_1(&VAR_7->dev, "CPT Device is not ready");
  return -VAR_2;
 }

 if ((VAR_6->vftype == VAR_3) && (!VAR_5->ctrl.s.se_req)) {
  FUNC_1(&VAR_7->dev, "CPTVF-%d of SE TYPE got AE request",
   VAR_6->vfid);
  return -VAR_1;
 } else if ((VAR_6->vftype == VAR_0) && (VAR_5->ctrl.s.se_req)) {
  FUNC_1(&VAR_7->dev, "CPTVF-%d of AE TYPE got SE request",
   VAR_6->vfid);
  return -VAR_1;
 }

 return FUNC_2(VAR_6, VAR_5);
}
