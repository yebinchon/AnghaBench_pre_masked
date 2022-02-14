
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct policy_work {scalar_t__ op; } ;
struct per_bio_data {scalar_t__ req_nr; } ;
struct TYPE_2__ {int demotion; } ;
struct cache {int committer; TYPE_1__ stats; int policy; } ;
struct bio {int bi_opf; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cache*,struct bio*) ;
 int FUNC_3 (struct cache*,struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct cache*,int ,struct bio*) ;
 int FUNC_7 (struct cache*,struct bio*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct cache*) ;
 struct per_bio_data* FUNC_11 (struct bio*) ;
 int FUNC_12 (struct cache*,struct bio*) ;
 int FUNC_13 (struct cache*,struct bio*) ;
 int FUNC_14 (struct cache*,int ,int ,struct bio*) ;
 int FUNC_15 (struct cache*,int ) ;
 int FUNC_16 (int *,struct bio*) ;
 int FUNC_17 (struct cache*,struct policy_work*,struct bio*) ;
 scalar_t__ FUNC_18 (struct cache*,struct bio*,int ) ;
 scalar_t__ FUNC_19 (struct cache*) ;
 int FUNC_20 (int ,int ,int *,int,int,int*) ;
 int FUNC_21 (int ,int ,int *,int,int,struct policy_work**) ;
 int FUNC_22 (struct cache*,struct bio*,int ,int ) ;
 int FUNC_23 (struct cache*,struct bio*,int ,int ) ;
 int FUNC_24 (struct cache*,struct bio*,int ) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (struct cache*) ;
 scalar_t__ FUNC_27 (struct cache*) ;

__attribute__((used)) static int FUNC_28(struct cache *VAR_6, struct bio *VAR_7, dm_oblock_t VAR_8,
     bool *VAR_9)
{
 int VAR_10, VAR_11;
 bool VAR_12, VAR_13;
 dm_cblock_t VAR_14;

 *VAR_9 = 0;

 VAR_12 = FUNC_6(VAR_6, VAR_8, VAR_7);
 if (!VAR_12) {






  *VAR_9 = 1;
  return VAR_1;
 }

 VAR_11 = FUNC_5(VAR_7);

 if (FUNC_18(VAR_6, VAR_7, VAR_8)) {
  struct policy_work *VAR_15 = ((void*)0);

  VAR_10 = FUNC_21(VAR_6->policy, VAR_8, &VAR_14, VAR_11, 1, &VAR_15);
  if (FUNC_25(VAR_10 && VAR_10 != -VAR_2)) {
   FUNC_1("%s: policy_lookup_with_work() failed with r = %d",
        FUNC_10(VAR_6), VAR_10);
   FUNC_9(VAR_7);
   return VAR_1;
  }

  if (VAR_10 == -VAR_2 && VAR_15) {
   FUNC_7(VAR_6, VAR_7);
   FUNC_0(VAR_15->op != VAR_3);
   FUNC_17(VAR_6, VAR_15, VAR_7);
   return VAR_1;
  }
 } else {
  VAR_10 = FUNC_20(VAR_6->policy, VAR_8, &VAR_14, VAR_11, 0, &VAR_13);
  if (FUNC_25(VAR_10 && VAR_10 != -VAR_2)) {
   FUNC_1("%s: policy_lookup() failed with r = %d",
        FUNC_10(VAR_6), VAR_10);
   FUNC_9(VAR_7);
   return VAR_1;
  }

  if (VAR_13)
   FUNC_26(VAR_6);
 }

 if (VAR_10 == -VAR_2) {
  struct per_bio_data *VAR_16 = FUNC_11(VAR_7);




  FUNC_13(VAR_6, VAR_7);
  if (VAR_16->req_nr == 0) {
   FUNC_2(VAR_6, VAR_7);
   FUNC_24(VAR_6, VAR_7, VAR_8);
  } else {




   FUNC_8(VAR_7);
   return VAR_1;
  }
 } else {



  FUNC_12(VAR_6, VAR_7);





  if (FUNC_19(VAR_6)) {
   if (FUNC_5(VAR_7) == VAR_5) {
    FUNC_7(VAR_6, VAR_7);
    FUNC_4(&VAR_6->stats.demotion);
    FUNC_14(VAR_6, VAR_14, VAR_8, VAR_7);
   } else
    FUNC_24(VAR_6, VAR_7, VAR_8);
  } else {
   if (FUNC_5(VAR_7) == VAR_5 && FUNC_27(VAR_6) &&
       !FUNC_15(VAR_6, VAR_14)) {
    FUNC_23(VAR_6, VAR_7, VAR_8, VAR_14);
    FUNC_2(VAR_6, VAR_7);
   } else
    FUNC_22(VAR_6, VAR_7, VAR_8, VAR_14);
  }
 }




 if (VAR_7->bi_opf & VAR_4) {




  FUNC_3(VAR_6, VAR_7);
  FUNC_16(&VAR_6->committer, VAR_7);
  *VAR_9 = 1;
  return VAR_1;
 }

 return VAR_0;
}
