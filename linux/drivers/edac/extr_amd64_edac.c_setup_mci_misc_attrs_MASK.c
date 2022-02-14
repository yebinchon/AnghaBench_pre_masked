
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int mtype_cap; int get_sdram_scrub_rate; int set_sdram_scrub_rate; int * ctl_page_to_phys; int dev_name; int ctl_name; int mod_name; int edac_cap; int edac_ctl_cap; struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int nbcap; int F3; scalar_t__ umc; } ;
struct amd64_family_type {int ctl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct amd64_pvt*) ;
 int FUNC_1 (struct mem_ctl_info*,struct amd64_pvt*) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_10,
     struct amd64_family_type *VAR_11)
{
 struct amd64_pvt *VAR_12 = VAR_10->pvt_info;

 VAR_10->mtype_cap = VAR_4 | VAR_5;
 VAR_10->edac_ctl_cap = VAR_0;

 if (VAR_12->umc) {
  FUNC_1(VAR_10, VAR_12);
 } else {
  if (VAR_12->nbcap & VAR_7)
   VAR_10->edac_ctl_cap |= VAR_2;

  if (VAR_12->nbcap & VAR_6)
   VAR_10->edac_ctl_cap |= VAR_1;
 }

 VAR_10->edac_cap = FUNC_0(VAR_12);
 VAR_10->mod_name = VAR_3;
 VAR_10->ctl_name = VAR_11->ctl_name;
 VAR_10->dev_name = FUNC_2(VAR_12->F3);
 VAR_10->ctl_page_to_phys = ((void*)0);


 VAR_10->set_sdram_scrub_rate = VAR_9;
 VAR_10->get_sdram_scrub_rate = VAR_8;
}
