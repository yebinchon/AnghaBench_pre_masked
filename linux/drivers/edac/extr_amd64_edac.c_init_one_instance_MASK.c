
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct mem_ctl_info {int edac_cap; int * pdev; struct amd64_pvt* pvt_info; } ;
struct edac_mc_layer {int size; int is_virt_csrow; int type; } ;
struct amd64_umc {int dummy; } ;
struct amd64_pvt {unsigned int mc_node_id; int fam; scalar_t__ channel_count; struct amd64_pvt* umc; struct pci_dev* F3; TYPE_2__* csels; TYPE_1__* ops; } ;
struct amd64_family_type {int f2_id; int f1_id; int f6_id; int f0_id; } ;
struct TYPE_6__ {struct pci_dev* misc; } ;
struct TYPE_5__ {int b_cnt; } ;
struct TYPE_4__ {scalar_t__ (* early_channel_count ) (struct amd64_pvt*) ;} ;


 int FUNC_0 (struct edac_mc_layer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct mem_ctl_info*,int ) ;
 struct mem_ctl_info* FUNC_3 (unsigned int,int ,struct edac_mc_layer*,int ) ;
 int FUNC_4 (struct mem_ctl_info*) ;
 int FUNC_5 (struct amd64_pvt*) ;
 scalar_t__ FUNC_6 (struct mem_ctl_info*) ;
 struct amd64_pvt* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct amd64_pvt*) ;
 struct amd64_pvt* FUNC_9 (int,int ) ;
 TYPE_3__* FUNC_10 (unsigned int) ;
 int VAR_8 ;
 struct amd64_family_type* FUNC_11 (struct amd64_pvt*) ;
 int FUNC_12 (struct amd64_pvt*) ;
 int FUNC_13 (struct amd64_pvt*,int ,int ) ;
 int FUNC_14 (struct mem_ctl_info*,struct amd64_family_type*) ;
 scalar_t__ FUNC_15 (struct amd64_pvt*) ;

__attribute__((used)) static int FUNC_16(unsigned int VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_10(VAR_9)->misc;
 struct amd64_family_type *VAR_11 = ((void*)0);
 struct mem_ctl_info *VAR_12 = ((void*)0);
 struct edac_mc_layer VAR_13[2];
 struct amd64_pvt *VAR_14 = ((void*)0);
 u16 VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18;

 VAR_18 = -VAR_5;
 VAR_14 = FUNC_9(sizeof(struct amd64_pvt), VAR_6);
 if (!VAR_14)
  goto err_ret;

 VAR_14->mc_node_id = VAR_9;
 VAR_14->F3 = VAR_10;

 VAR_18 = -VAR_3;
 VAR_11 = FUNC_11(VAR_14);
 if (!VAR_11)
  goto err_free;

 if (VAR_14->fam >= 0x17) {
  VAR_14->umc = FUNC_7(VAR_8, sizeof(struct amd64_umc), VAR_6);
  if (!VAR_14->umc) {
   VAR_18 = -VAR_5;
   goto err_free;
  }

  VAR_15 = VAR_11->f0_id;
  VAR_16 = VAR_11->f6_id;
 } else {
  VAR_15 = VAR_11->f1_id;
  VAR_16 = VAR_11->f2_id;
 }

 VAR_17 = FUNC_13(VAR_14, VAR_15, VAR_16);
 if (VAR_17)
  goto err_post_init;

 FUNC_12(VAR_14);






 VAR_18 = -VAR_3;
 VAR_14->channel_count = VAR_14->ops->early_channel_count(VAR_14);
 if (VAR_14->channel_count < 0)
  goto err_siblings;

 VAR_18 = -VAR_5;
 VAR_13[0].type = VAR_2;
 VAR_13[0].size = VAR_14->csels[0].b_cnt;
 VAR_13[0].is_virt_csrow = 1;
 VAR_13[1].type = VAR_1;
 if (VAR_14->fam >= 0x17)
  VAR_13[1].size = VAR_8;
 else
  VAR_13[1].size = 2;
 VAR_13[1].is_virt_csrow = 0;

 VAR_12 = FUNC_3(VAR_9, FUNC_0(VAR_13), VAR_13, 0);
 if (!VAR_12)
  goto err_siblings;

 VAR_12->pvt_info = VAR_14;
 VAR_12->pdev = &VAR_14->F3->dev;

 FUNC_14(VAR_12, VAR_11);

 if (FUNC_6(VAR_12))
  VAR_12->edac_cap = VAR_0;

 VAR_18 = -VAR_4;
 if (FUNC_2(VAR_12, VAR_7)) {
  FUNC_1(1, "failed edac_mc_add_mc()\n");
  goto err_add_mc;
 }

 return 0;

err_add_mc:
 FUNC_4(VAR_12);

err_siblings:
 FUNC_5(VAR_14);

err_post_init:
 if (VAR_14->fam >= 0x17)
  FUNC_8(VAR_14->umc);

err_free:
 FUNC_8(VAR_14);

err_ret:
 return VAR_18;
}
