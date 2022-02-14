
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnxt_qplib_res {int dpi_tbl; int pd_tbl; int pkey_tbl; int sgid_tbl; struct net_device* netdev; struct pci_dev* pdev; } ;
struct bnxt_qplib_dev_attr {int l2_db_size; int max_pd; int max_pkey; int max_sgid; } ;


 int FUNC_0 (struct bnxt_qplib_res*,int *,int ) ;
 int FUNC_1 (struct bnxt_qplib_res*,int *,int ) ;
 int FUNC_2 (struct bnxt_qplib_res*,int *,int ) ;
 int FUNC_3 (struct bnxt_qplib_res*,int *,int ) ;
 int FUNC_4 (struct bnxt_qplib_res*) ;

int FUNC_5(struct bnxt_qplib_res *VAR_0, struct pci_dev *VAR_1,
    struct net_device *VAR_2,
    struct bnxt_qplib_dev_attr *VAR_3)
{
 int VAR_4 = 0;

 VAR_0->pdev = VAR_1;
 VAR_0->netdev = VAR_2;

 VAR_4 = FUNC_3(VAR_0, &VAR_0->sgid_tbl, VAR_3->max_sgid);
 if (VAR_4)
  goto fail;

 VAR_4 = FUNC_2(VAR_0, &VAR_0->pkey_tbl, VAR_3->max_pkey);
 if (VAR_4)
  goto fail;

 VAR_4 = FUNC_1(VAR_0, &VAR_0->pd_tbl, VAR_3->max_pd);
 if (VAR_4)
  goto fail;

 VAR_4 = FUNC_0(VAR_0, &VAR_0->dpi_tbl, VAR_3->l2_db_size);
 if (VAR_4)
  goto fail;

 return 0;
fail:
 FUNC_4(VAR_0);
 return VAR_4;
}
