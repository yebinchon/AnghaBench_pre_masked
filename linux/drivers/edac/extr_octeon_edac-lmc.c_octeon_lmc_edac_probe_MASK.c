
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ intr_sec_ena; scalar_t__ intr_ded_ena; int ecc_ena; } ;
union cvmx_lmcx_mem_cfg0 {void* u64; TYPE_1__ s; } ;
struct TYPE_6__ {scalar_t__ intr_sec_ena; scalar_t__ intr_ded_ena; } ;
union cvmx_lmcx_int_en {void* u64; TYPE_3__ s; } ;
struct TYPE_5__ {int ecc_ena; } ;
union cvmx_lmcx_config {TYPE_2__ s; void* u64; } ;
struct platform_device {int id; int dev; } ;
struct octeon_lmc_pvt {int dummy; } ;
struct mem_ctl_info {char* mod_name; char* ctl_name; int edac_check; void* dev_name; int * pdev; } ;
struct edac_mc_layer {int size; int is_virt_csrow; int type; } ;


 int FUNC_0 (struct edac_mc_layer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 void* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct mem_ctl_info*,int ) ;
 struct mem_ctl_info* FUNC_10 (int,int ,struct edac_mc_layer*,int) ;
 int FUNC_11 (struct mem_ctl_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 () ;
 int FUNC_13 (struct platform_device*,struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct mem_ctl_info *VAR_6;
 struct edac_mc_layer VAR_7[1];
 int VAR_8 = VAR_5->id;

 FUNC_12();

 VAR_7[0].type = VAR_0;
 VAR_7[0].size = 1;
 VAR_7[0].is_virt_csrow = 0;

 if (FUNC_3()) {
  union cvmx_lmcx_mem_cfg0 VAR_9;

  VAR_9 = FUNC_4(FUNC_2(0));
  if (!VAR_9) {
   FUNC_7(&VAR_5->dev, "Disabled (ECC not enabled)\n");
   return 0;
  }

  VAR_6 = FUNC_10(VAR_8, FUNC_0(VAR_7), VAR_7, sizeof(struct octeon_lmc_pvt));
  if (!VAR_6)
   return -VAR_1;

  VAR_6->pdev = &VAR_5->dev;
  VAR_6->dev_name = FUNC_8(&VAR_5->dev);

  VAR_6->mod_name = "octeon-lmc";
  VAR_6->ctl_name = "octeon-lmc-err";
  VAR_6->edac_check = VAR_3;

  if (FUNC_9(VAR_6, VAR_2)) {
   FUNC_6(&VAR_5->dev, "edac_mc_add_mc() failed\n");
   FUNC_11(VAR_6);
   return -VAR_1;
  }

  VAR_9 = FUNC_4(FUNC_2(VAR_8));
  VAR_9 = 0;
  VAR_9 = 0;
  FUNC_5(FUNC_2(VAR_8), VAR_9);
 } else {

  union cvmx_lmcx_int_en VAR_10;
  union cvmx_lmcx_config VAR_11;

  VAR_11.u64 = FUNC_4(FUNC_1(0));
  if (!VAR_11.s.ecc_ena) {
   FUNC_7(&VAR_5->dev, "Disabled (ECC not enabled)\n");
   return 0;
  }

  VAR_6 = FUNC_10(VAR_8, FUNC_0(VAR_7), VAR_7, sizeof(struct octeon_lmc_pvt));
  if (!VAR_6)
   return -VAR_1;

  VAR_6->pdev = &VAR_5->dev;
  VAR_6->dev_name = FUNC_8(&VAR_5->dev);

  VAR_6->mod_name = "octeon-lmc";
  VAR_6->ctl_name = "co_lmc_err";
  VAR_6->edac_check = VAR_4;

  if (FUNC_9(VAR_6, VAR_2)) {
   FUNC_6(&VAR_5->dev, "edac_mc_add_mc() failed\n");
   FUNC_11(VAR_6);
   return -VAR_1;
  }

  VAR_10.u64 = FUNC_4(FUNC_2(VAR_8));
  VAR_10.s.intr_ded_ena = 0;
  VAR_10.s.intr_sec_ena = 0;
  FUNC_5(FUNC_2(VAR_8), VAR_10.u64);
 }
 FUNC_13(VAR_5, VAR_6);

 return 0;
}
