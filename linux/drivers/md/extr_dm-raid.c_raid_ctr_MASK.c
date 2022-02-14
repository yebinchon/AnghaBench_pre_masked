
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct rs_layout {int dummy; } ;
struct raid_type {int dummy; } ;
struct TYPE_15__ {scalar_t__ dev_sectors; int ro; int in_sync; TYPE_2__* pers; int recovery; int flags; int event_work; int sync_super; } ;
struct TYPE_13__ {int mode; } ;
struct TYPE_12__ {int congested_fn; } ;
struct raid_set {TYPE_3__ md; int runtime_flags; TYPE_1__ journal_dev; int ctr_flags; TYPE_11__ callbacks; } ;
struct dm_target {char* error; int num_flush_bios; int table; struct raid_set* private; } ;
struct dm_arg_set {unsigned int member_0; char** member_1; int argc; } ;
struct dm_arg {int member_0; int member_1; char* member_2; int max; } ;
typedef scalar_t__ sector_t ;
struct TYPE_14__ {int (* check_reshape ) (TYPE_3__*) ;scalar_t__ start_reshape; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct raid_set*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct raid_set*) ;
 int FUNC_4 (unsigned int,int,int ) ;
 scalar_t__ FUNC_5 (struct raid_set*) ;
 int FUNC_6 (struct dm_target*,struct raid_set*) ;
 int FUNC_7 (struct raid_set*) ;
 int FUNC_8 (struct dm_arg_set*,unsigned int) ;
 scalar_t__ FUNC_9 (struct dm_arg*,struct dm_arg_set*,unsigned int*,char**) ;
 scalar_t__ FUNC_10 (struct dm_arg*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_11 (struct dm_arg_set*) ;
 int FUNC_12 (int ,TYPE_11__*) ;
 int VAR_14 ;
 struct raid_type* FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (struct raid_set*,struct dm_arg_set*) ;
 int FUNC_21 (struct raid_set*,struct dm_arg_set*,unsigned int) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int VAR_15 ;
 struct raid_set* FUNC_23 (struct dm_target*,struct raid_type*,unsigned int) ;
 int FUNC_24 (struct raid_set*) ;
 int FUNC_25 (struct raid_set*) ;
 int FUNC_26 (struct raid_set*) ;
 int FUNC_27 (struct raid_set*) ;
 int FUNC_28 (struct raid_set*,struct rs_layout*) ;
 int FUNC_29 (struct raid_set*,struct rs_layout*) ;
 scalar_t__ FUNC_30 (struct raid_set*) ;
 scalar_t__ FUNC_31 (struct raid_set*) ;
 scalar_t__ FUNC_32 (struct raid_set*) ;
 scalar_t__ FUNC_33 (struct raid_set*) ;
 scalar_t__ FUNC_34 (struct raid_set*) ;
 int FUNC_35 (struct raid_set*) ;
 scalar_t__ FUNC_36 (struct raid_set*) ;
 int FUNC_37 (struct raid_set*) ;
 int FUNC_38 (struct raid_set*,int) ;
 int FUNC_39 (struct raid_set*) ;
 int FUNC_40 (struct raid_set*) ;
 int FUNC_41 (struct raid_set*,scalar_t__) ;
 int FUNC_42 (struct raid_set*) ;
 scalar_t__ FUNC_43 (struct raid_set*) ;
 int FUNC_44 (int ,int *) ;
 int FUNC_45 (TYPE_3__*) ;
 int VAR_16 ;
 scalar_t__ FUNC_46 (int ,int *) ;

__attribute__((used)) static int FUNC_47(struct dm_target *VAR_17, unsigned int VAR_18, char **VAR_19)
{
 int VAR_20;
 bool VAR_21 = 0;
 struct raid_type *VAR_22;
 unsigned int VAR_23, VAR_24;
 sector_t VAR_25, VAR_26, VAR_27;
 struct raid_set *VAR_28 = ((void*)0);
 const char *VAR_29;
 struct rs_layout VAR_30;
 struct dm_arg_set VAR_31 = { VAR_18, VAR_19 }, VAR_32;
 struct dm_arg VAR_33[] = {
  { 0, VAR_31.argc, "Cannot understand number of raid parameters" },
  { 1, 254, "Cannot understand number of raid devices parameters" }
 };


 VAR_29 = FUNC_11(&VAR_31);
 if (!VAR_29) {
  VAR_17->error = "No arguments";
  return -VAR_0;
 }

 VAR_22 = FUNC_13(VAR_29);
 if (!VAR_22) {
  VAR_17->error = "Unrecognised raid_type";
  return -VAR_0;
 }


 if (FUNC_10(VAR_33, &VAR_31, &VAR_23, &VAR_17->error))
  return -VAR_0;


 VAR_32 = VAR_31;
 FUNC_8(&VAR_32, VAR_23);
 VAR_33[1].max = (VAR_32.argc - 1) / 2;
 if (FUNC_9(VAR_33 + 1, &VAR_32, &VAR_24, &VAR_17->error))
  return -VAR_0;

 if (!FUNC_4(VAR_24, 1, VAR_2)) {
  VAR_17->error = "Invalid number of supplied raid devices";
  return -VAR_0;
 }

 VAR_28 = FUNC_23(VAR_17, VAR_22, VAR_24);
 if (FUNC_1(VAR_28))
  return FUNC_2(VAR_28);

 VAR_20 = FUNC_21(VAR_28, &VAR_31, VAR_23);
 if (VAR_20)
  goto bad;

 VAR_20 = FUNC_20(VAR_28, &VAR_31);
 if (VAR_20)
  goto bad;

 VAR_28->md.sync_super = VAR_16;







 VAR_20 = FUNC_38(VAR_28, 0);
 if (VAR_20)
  goto bad;

 VAR_25 = VAR_28->md.dev_sectors;






 FUNC_28(VAR_28, &VAR_30);

 VAR_20 = FUNC_6(VAR_17, VAR_28);
 if (VAR_20)
  goto bad;

 VAR_26 = FUNC_3(VAR_28);
 if (!VAR_26) {
  VAR_17->error = "Invalid rdev size";
  VAR_20 = -VAR_0;
  goto bad;
 }


 VAR_27 = FUNC_5(VAR_28);
 if (VAR_25 != VAR_26)
  VAR_21 = VAR_25 != (VAR_27 ? VAR_26 - VAR_27 : VAR_26);

 FUNC_0(&VAR_28->md.event_work, VAR_14);
 VAR_17->private = VAR_28;
 VAR_17->num_flush_bios = 1;


 FUNC_29(VAR_28, &VAR_30);







 if (FUNC_46(VAR_3, &VAR_28->md.flags)) {

  if (FUNC_32(VAR_28) &&
      FUNC_46(VAR_11, &VAR_28->ctr_flags)) {
   VAR_17->error = "'nosync' not allowed for new raid6 set";
   VAR_20 = -VAR_0;
   goto bad;
  }
  FUNC_41(VAR_28, 0);
  FUNC_44(VAR_8, &VAR_28->runtime_flags);
  FUNC_39(VAR_28);
 } else if (FUNC_33(VAR_28)) {

  if (FUNC_46(VAR_12, &VAR_28->ctr_flags)) {
   FUNC_44(VAR_8, &VAR_28->runtime_flags);
   FUNC_41(VAR_28, VAR_5);
  }

  ;
 } else if (FUNC_34(VAR_28)) {

  if (VAR_21) {
   VAR_17->error = "Can't resize a reshaping raid set";
   VAR_20 = -VAR_1;
   goto bad;
  }

 } else if (FUNC_43(VAR_28)) {
  if (FUNC_34(VAR_28)) {
   VAR_17->error = "Can't takeover a reshaping raid set";
   VAR_20 = -VAR_1;
   goto bad;
  }


  if (FUNC_46(VAR_9, &VAR_28->ctr_flags)) {
   VAR_17->error = "Can't takeover a journaled raid4/5/6 set";
   VAR_20 = -VAR_1;
   goto bad;
  }
  VAR_20 = FUNC_27(VAR_28);
  if (VAR_20)
   goto bad;

  VAR_20 = FUNC_42(VAR_28);
  if (VAR_20)
   goto bad;

  FUNC_44(VAR_8, &VAR_28->runtime_flags);

  FUNC_41(VAR_28, VAR_5);
  FUNC_39(VAR_28);
 } else if (FUNC_36(VAR_28)) {






  if (FUNC_46(VAR_9, &VAR_28->ctr_flags)) {
   VAR_17->error = "Can't reshape a journaled raid4/5/6 set";
   VAR_20 = -VAR_1;
   goto bad;
  }


  if (VAR_27 || FUNC_30(VAR_28)) {







   VAR_20 = FUNC_35(VAR_28);
   if (VAR_20)
    goto bad;


   FUNC_41(VAR_28, VAR_5);
  }
  FUNC_37(VAR_28);
 } else {

  if (FUNC_46(VAR_12, &VAR_28->ctr_flags)) {
   FUNC_41(VAR_28, VAR_5);
   FUNC_44(VAR_8, &VAR_28->runtime_flags);
  } else
   FUNC_41(VAR_28, FUNC_46(VAR_13, &VAR_28->ctr_flags) ?
           0 : (VAR_21 ? VAR_25 : VAR_5));
  FUNC_37(VAR_28);
 }


 VAR_20 = FUNC_25(VAR_28);
 if (VAR_20)
  goto bad;


 VAR_28->md.ro = 1;
 VAR_28->md.in_sync = 1;


 FUNC_44(VAR_4, &VAR_28->md.recovery);


 FUNC_17(&VAR_28->md);
 VAR_20 = FUNC_14(&VAR_28->md);
 VAR_28->md.in_sync = 0;
 if (VAR_20) {
  VAR_17->error = "Failed to run raid array";
  FUNC_19(&VAR_28->md);
  goto bad;
 }

 VAR_20 = FUNC_15(&VAR_28->md);

 if (VAR_20) {
  VAR_17->error = "Failed to start raid array";
  FUNC_19(&VAR_28->md);
  goto bad_md_start;
 }

 VAR_28->callbacks.congested_fn = VAR_15;
 FUNC_12(VAR_17->table, &VAR_28->callbacks);


 if (FUNC_46(VAR_10, &VAR_28->ctr_flags)) {
  VAR_20 = FUNC_22(&VAR_28->md, VAR_28->journal_dev.mode);
  if (VAR_20) {
   VAR_17->error = "Failed to set raid4/5/6 journal mode";
   FUNC_19(&VAR_28->md);
   goto bad_journal_mode_set;
  }
 }

 FUNC_18(&VAR_28->md);
 FUNC_44(VAR_7, &VAR_28->runtime_flags);


 if (FUNC_31(VAR_28)) {
  VAR_20 = FUNC_40(VAR_28);
  if (VAR_20)
   goto bad_stripe_cache;
 }


 if (FUNC_46(VAR_6, &VAR_28->runtime_flags)) {
  VAR_20 = FUNC_26(VAR_28);
  if (VAR_20)
   goto bad_check_reshape;


  FUNC_29(VAR_28, &VAR_30);

  if (VAR_28->md.pers->start_reshape) {
   VAR_20 = VAR_28->md.pers->check_reshape(&VAR_28->md);
   if (VAR_20) {
    VAR_17->error = "Reshape check failed";
    goto bad_check_reshape;
   }
  }
 }


 FUNC_7(VAR_28);

 FUNC_19(&VAR_28->md);
 return 0;

bad_md_start:
bad_journal_mode_set:
bad_stripe_cache:
bad_check_reshape:
 FUNC_16(&VAR_28->md);
bad:
 FUNC_24(VAR_28);

 return VAR_20;
}
