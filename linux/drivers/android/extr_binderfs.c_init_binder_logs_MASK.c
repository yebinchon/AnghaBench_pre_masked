
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct binderfs_info* s_fs_info; struct dentry* s_root; } ;
struct dentry {int dummy; } ;
struct binderfs_info {struct dentry* proc_log_dir; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_2 (struct dentry*,char*) ;
 struct dentry* FUNC_3 (struct dentry*,char*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_6)
{
 struct dentry *VAR_7, *VAR_8, *VAR_9;
 struct binderfs_info *VAR_10;
 int VAR_11 = 0;

 VAR_7 = FUNC_2(VAR_6->s_root,
         "binder_logs");
 if (FUNC_0(VAR_7)) {
  VAR_11 = FUNC_1(VAR_7);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_7, "stats",
          &VAR_1, ((void*)0));
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_7, "state",
          &VAR_0, ((void*)0));
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_7, "transactions",
          &VAR_5, ((void*)0));
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_7,
          "transaction_log",
          &VAR_4,
          &VAR_2);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_7,
          "failed_transaction_log",
          &VAR_4,
          &VAR_3);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_9 = FUNC_2(VAR_7, "proc");
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out;
 }
 VAR_10 = VAR_6->s_fs_info;
 VAR_10->proc_log_dir = VAR_9;

out:
 return VAR_11;
}
