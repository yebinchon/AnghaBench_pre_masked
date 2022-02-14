
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kernfs_open_file {int dummy; } ;
struct iolatency_grp {scalar_t__ min_lat_nsec; struct blk_iolatency* blkiolat; } ;
struct blkg_conf_ctx {char* body; struct blkcg_gq* blkg; } ;
struct blkcg_gq {int q; } ;
struct blkcg {int dummy; } ;
struct blk_iolatency {int enabled; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (struct blkg_conf_ctx*) ;
 int FUNC_8 (struct blkcg*,int *,char*,struct blkg_conf_ctx*) ;
 int FUNC_9 (struct blkcg_gq*) ;
 int FUNC_10 (struct blkcg_gq*) ;
 struct iolatency_grp* FUNC_11 (struct blkcg_gq*) ;
 struct blkcg* FUNC_12 (int ) ;
 int FUNC_13 (struct blkcg_gq*) ;
 int FUNC_14 (struct blkcg_gq*,scalar_t__) ;
 int FUNC_15 (struct kernfs_open_file*) ;
 int FUNC_16 (char*,char*,...) ;
 int FUNC_17 (char*,char*) ;
 char* FUNC_18 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_19(struct kernfs_open_file *VAR_3, char *VAR_4,
        size_t VAR_5, loff_t VAR_6)
{
 struct blkcg *VAR_7 = FUNC_12(FUNC_15(VAR_3));
 struct blkcg_gq *VAR_8;
 struct blkg_conf_ctx VAR_9;
 struct iolatency_grp *VAR_10;
 char *VAR_11, *VAR_12;
 u64 VAR_13 = 0;
 u64 VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_8(VAR_7, &VAR_2, VAR_4, &VAR_9);
 if (VAR_15)
  return VAR_15;

 VAR_10 = FUNC_11(VAR_9.blkg);
 VAR_11 = VAR_9.body;

 VAR_15 = -VAR_0;
 while ((VAR_12 = FUNC_18(&VAR_11, " "))) {
  char VAR_17[16];
  char VAR_18[21];

  if (FUNC_16(VAR_12, "%15[^=]=%20s", VAR_17, VAR_18) != 2)
   goto out;

  if (!FUNC_17(VAR_17, "target")) {
   u64 VAR_19;

   if (!FUNC_17(VAR_18, "max"))
    VAR_13 = 0;
   else if (FUNC_16(VAR_18, "%llu", &VAR_19) == 1)
    VAR_13 = VAR_19 * VAR_1;
   else
    goto out;
  } else {
   goto out;
  }
 }


 VAR_8 = VAR_9.blkg;
 VAR_14 = VAR_10->min_lat_nsec;

 VAR_16 = FUNC_14(VAR_8, VAR_13);
 if (VAR_16) {
  FUNC_0(!FUNC_3(VAR_8->q));
  FUNC_9(VAR_8);
 }

 if (VAR_14 != VAR_10->min_lat_nsec) {
  FUNC_13(VAR_8);
 }

 VAR_15 = 0;
out:
 FUNC_7(&VAR_9);
 if (VAR_15 == 0 && VAR_16) {
  struct iolatency_grp *VAR_20 = FUNC_11(VAR_8);
  struct blk_iolatency *VAR_21 = VAR_20->blkiolat;

  FUNC_4(VAR_8->q);

  if (VAR_16 == 1)
   FUNC_2(&VAR_21->enabled);
  else if (VAR_16 == -1)
   FUNC_1(&VAR_21->enabled);
  else
   FUNC_0(1);

  FUNC_5(VAR_8->q);

  FUNC_10(VAR_8);
  FUNC_6(VAR_8->q);
 }
 return VAR_15 ?: VAR_5;
}
