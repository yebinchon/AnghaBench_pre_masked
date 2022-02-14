
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_ctl_info {char* mod_name; int ctl_name; int * pdev; int * ctl_page_to_phys; int dev_name; void* edac_cap; void* edac_ctl_cap; int mtype_cap; struct i7core_pvt* pvt_info; } ;
struct TYPE_3__ {int dimm; int rank; int bank; int page; int col; scalar_t__ channel; } ;
struct i7core_pvt {int dclk_freq; TYPE_1__ inject; scalar_t__ enable_scrub; struct i7core_dev* i7core_dev; } ;
struct i7core_dev {struct mem_ctl_info* mci; TYPE_2__** pdev; int socket; } ;
struct edac_mc_layer {int is_virt_csrow; int size; int type; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct edac_mc_layer*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mem_ctl_info*,int ) ;
 struct mem_ctl_info* FUNC_3 (int ,int ,struct edac_mc_layer*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mem_ctl_info*) ;
 int FUNC_6 (struct mem_ctl_info*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct mem_ctl_info*) ;
 scalar_t__ FUNC_9 (struct mem_ctl_info*) ;
 int VAR_9 ;
 int FUNC_10 (struct i7core_pvt*) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct mem_ctl_info*,struct i7core_dev*) ;
 int FUNC_14 (struct i7core_pvt*,int ,int) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct i7core_dev *VAR_10)
{
 struct mem_ctl_info *VAR_11;
 struct i7core_pvt *VAR_12;
 int VAR_13;
 struct edac_mc_layer VAR_14[2];



 VAR_14[0].type = VAR_1;
 VAR_14[0].size = VAR_8;
 VAR_14[0].is_virt_csrow = 0;
 VAR_14[1].type = VAR_2;
 VAR_14[1].size = VAR_6;
 VAR_14[1].is_virt_csrow = 1;
 VAR_11 = FUNC_3(VAR_10->socket, FUNC_0(VAR_14), VAR_14,
       sizeof(*VAR_12));
 if (FUNC_16(!VAR_11))
  return -VAR_4;

 FUNC_1(0, "MC: mci = %p, dev = %p\n", VAR_11, &VAR_10->pdev[0]->dev);

 VAR_12 = VAR_11->pvt_info;
 FUNC_14(VAR_12, 0, sizeof(*VAR_12));


 VAR_12->i7core_dev = VAR_10;
 VAR_10->mci = VAR_11;






 VAR_11->mtype_cap = VAR_7;
 VAR_11->edac_ctl_cap = VAR_0;
 VAR_11->edac_cap = VAR_0;
 VAR_11->mod_name = "i7core_edac.c";

 VAR_11->ctl_name = FUNC_11(VAR_5, "i7 core #%d", VAR_10->socket);
 if (!VAR_11->ctl_name) {
  VAR_13 = -VAR_4;
  goto fail1;
 }

 VAR_11->dev_name = FUNC_15(VAR_10->pdev[0]);
 VAR_11->ctl_page_to_phys = ((void*)0);


 VAR_13 = FUNC_13(VAR_11, VAR_10);
 if (FUNC_16(VAR_13 < 0))
  goto fail0;



 FUNC_8(VAR_11);

 VAR_11->pdev = &VAR_10->pdev[0]->dev;


 if (VAR_12->enable_scrub)
  FUNC_6(VAR_11);


 if (FUNC_16(FUNC_2(VAR_11, VAR_9))) {
  FUNC_1(0, "MC: failed edac_mc_add_mc()\n");




  VAR_13 = -VAR_3;
  goto fail0;
 }
 if (FUNC_9(VAR_11)) {
  FUNC_1(0, "MC: failed to create sysfs nodes\n");
  FUNC_4(VAR_11->pdev);
  VAR_13 = -VAR_3;
  goto fail0;
 }


 VAR_12->inject.channel = 0;
 VAR_12->inject.dimm = -1;
 VAR_12->inject.rank = -1;
 VAR_12->inject.bank = -1;
 VAR_12->inject.page = -1;
 VAR_12->inject.col = -1;


 FUNC_10(VAR_12);


 VAR_12->dclk_freq = FUNC_7();

 return 0;

fail0:
 FUNC_12(VAR_11->ctl_name);

fail1:
 FUNC_5(VAR_11);
 VAR_10->mci = ((void*)0);
 return VAR_13;
}
