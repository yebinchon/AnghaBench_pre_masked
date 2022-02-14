
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int infpwbcp; int infpwbif; int infpval1; void* infpabif; void* infpabcp; int infpdifl; int infpsifl; int infpdcps; int infpscps; int infplgnm; void* infplgif; void* infplgcp; int infpflg1; } ;
struct TYPE_10__ {int infmscps; int infmsifl; } ;
struct TYPE_8__ {int infhflg1; } ;
struct sthyi_sctns {TYPE_6__ par; TYPE_4__ mac; TYPE_2__ hdr; } ;
struct TYPE_11__ {int lpar_weight; int all_weight; int lpar_cap; int cpu_num_ded; int cpu_num_shd; int lpar_grp_cap; } ;
struct TYPE_9__ {int lpar_weight; int all_weight; int lpar_cap; int cpu_num_ded; int cpu_num_shd; int lpar_grp_cap; } ;
struct lpar_cpu_inf {TYPE_5__ ifl; TYPE_3__ cp; } ;
struct diag204_x_phys_block {int dummy; } ;
struct TYPE_7__ {int hardware_group_name; scalar_t__ mtid; } ;
struct diag204_x_part_block {TYPE_1__ hdr; } ;
struct diag204_x_info_blk_hdr {int npar; int this_part; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long,int,void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (struct sthyi_sctns*,struct diag204_x_phys_block*,void*) ;
 int FUNC_5 (unsigned long) ;
 struct diag204_x_part_block* FUNC_6 (struct lpar_cpu_inf*,int,void*,struct diag204_x_part_block*) ;
 int FUNC_7 (int ,int ,int) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct sthyi_sctns *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 bool VAR_17;
 void *VAR_18;
 void *VAR_19 = ((void*)0);
 struct diag204_x_info_blk_hdr *VAR_20;
 struct diag204_x_part_block *VAR_21;
 struct diag204_x_phys_block *VAR_22;
 struct lpar_cpu_inf VAR_23 = {};


 VAR_16 = FUNC_2((unsigned long)VAR_2 |
   (unsigned long)VAR_0, 0, ((void*)0));
 if (VAR_16 <= 0)
  return;

 VAR_18 = FUNC_10(FUNC_1(VAR_16, VAR_7));
 if (!VAR_18)
  return;

 VAR_15 = FUNC_2((unsigned long)VAR_3 |
      (unsigned long)VAR_0, VAR_16, VAR_18);
 if (VAR_15 < 0)
  goto out;

 VAR_19 = (void *)FUNC_0(VAR_5 | VAR_4);
 if (!VAR_19 || FUNC_3(VAR_19))
  goto out;

 VAR_20 = VAR_18;
 VAR_21 = VAR_18 + sizeof(*VAR_20);

 for (VAR_14 = 0; VAR_14 < VAR_20->npar; VAR_14++) {






  VAR_17 = (void *)VAR_21 - VAR_18 == VAR_20->this_part;
  VAR_21 = FUNC_6(&VAR_23, VAR_17, VAR_19,
       VAR_21);
 }

 VAR_22 = (struct diag204_x_phys_block *)VAR_21;
 VAR_21 = VAR_18 + VAR_20->this_part;
 if (VAR_21->hdr.mtid)
  VAR_13->par.infpflg1 = VAR_10;

 VAR_13->par.infpval1 |= VAR_9;
 VAR_13->par.infplgcp = FUNC_8(VAR_23.cp.lpar_grp_cap);
 VAR_13->par.infplgif = FUNC_8(VAR_23.ifl.lpar_grp_cap);
 FUNC_7(VAR_13->par.infplgnm, VAR_21->hdr.hardware_group_name,
        sizeof(VAR_13->par.infplgnm));

 VAR_13->par.infpscps = VAR_23.cp.cpu_num_shd;
 VAR_13->par.infpdcps = VAR_23.cp.cpu_num_ded;
 VAR_13->par.infpsifl = VAR_23.ifl.cpu_num_shd;
 VAR_13->par.infpdifl = VAR_23.ifl.cpu_num_ded;
 VAR_13->par.infpval1 |= VAR_11;

 VAR_13->par.infpabcp = FUNC_8(VAR_23.cp.lpar_cap);
 VAR_13->par.infpabif = FUNC_8(VAR_23.ifl.lpar_cap);
 VAR_13->par.infpval1 |= VAR_8;





 if (!(VAR_20->flags & VAR_1)) {
  VAR_13->hdr.infhflg1 |= VAR_6;
  goto out;
 }

 FUNC_4(VAR_13, VAR_22, VAR_19);

 if (VAR_23.cp.lpar_weight) {
  VAR_13->par.infpwbcp = VAR_13->mac.infmscps * 0x10000 *
   VAR_23.cp.lpar_weight / VAR_23.cp.all_weight;
 }

 if (VAR_23.ifl.lpar_weight) {
  VAR_13->par.infpwbif = VAR_13->mac.infmsifl * 0x10000 *
   VAR_23.ifl.lpar_weight / VAR_23.ifl.all_weight;
 }
 VAR_13->par.infpval1 |= VAR_12;

out:
 FUNC_5((unsigned long)VAR_19);
 FUNC_9(VAR_18);
}
