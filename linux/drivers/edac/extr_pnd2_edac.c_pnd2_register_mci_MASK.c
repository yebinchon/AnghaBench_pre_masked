
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnd2_pvt {int dummy; } ;
struct mem_ctl_info {char* ctl_name; int dev_name; int mod_name; struct pnd2_pvt* pvt_info; } ;
struct edac_mc_layer {int is_virt_csrow; int size; int type; } ;
struct TYPE_2__ {int (* check_ecc ) () ;int (* get_dimm_config ) (struct mem_ctl_info*) ;int name; int dimms_per_channel; int channels; } ;


 int FUNC_0 (struct edac_mc_layer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_3 (int ,int ,struct edac_mc_layer*,int) ;
 int FUNC_4 (struct mem_ctl_info*) ;
 int FUNC_5 (struct pnd2_pvt*,int ,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_8(struct mem_ctl_info **VAR_6)
{
 struct edac_mc_layer VAR_7[2];
 struct mem_ctl_info *VAR_8;
 struct pnd2_pvt *VAR_9;
 int VAR_10;

 VAR_10 = VAR_5->check_ecc();
 if (VAR_10 < 0)
  return VAR_10;


 VAR_7[0].type = VAR_0;
 VAR_7[0].size = VAR_5->channels;
 VAR_7[0].is_virt_csrow = 0;
 VAR_7[1].type = VAR_1;
 VAR_7[1].size = VAR_5->dimms_per_channel;
 VAR_7[1].is_virt_csrow = 1;
 VAR_8 = FUNC_3(0, FUNC_0(VAR_7), VAR_7, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_4;

 VAR_9 = VAR_8->pvt_info;
 FUNC_5(VAR_9, 0, sizeof(*VAR_9));

 VAR_8->mod_name = VAR_2;
 VAR_8->dev_name = VAR_5->name;
 VAR_8->ctl_name = "Pondicherry2";


 VAR_5->get_dimm_config(VAR_8);

 if (FUNC_2(VAR_8)) {
  FUNC_1(0, "MC: failed edac_mc_add_mc()\n");
  FUNC_4(VAR_8);
  return -VAR_3;
 }

 *VAR_6 = VAR_8;

 return 0;
}
