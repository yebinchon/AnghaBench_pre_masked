
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct throtl_grp {int dummy; } ;
struct kernfs_open_file {int dummy; } ;
struct blkg_conf_ctx {int blkg; int body; } ;
struct blkcg {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blkg_conf_ctx*) ;
 int FUNC_1 (struct blkcg*,int *,char*,struct blkg_conf_ctx*) ;
 struct throtl_grp* FUNC_2 (int ) ;
 struct blkcg* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct kernfs_open_file*) ;
 int FUNC_5 (struct kernfs_open_file*) ;
 int FUNC_6 (int ,char*,unsigned int*) ;
 int FUNC_7 (struct throtl_grp*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct kernfs_open_file *VAR_3,
      char *VAR_4, size_t VAR_5, loff_t VAR_6, bool VAR_7)
{
 struct blkcg *VAR_8 = FUNC_3(FUNC_5(VAR_3));
 struct blkg_conf_ctx VAR_9;
 struct throtl_grp *VAR_10;
 int VAR_11;
 u64 VAR_12;

 VAR_11 = FUNC_1(VAR_8, &VAR_2, VAR_4, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = -VAR_0;
 if (FUNC_6(VAR_9.body, "%llu", &VAR_12) != 1)
  goto out_finish;
 if (!VAR_12)
  VAR_12 = VAR_1;

 VAR_10 = FUNC_2(VAR_9.blkg);

 if (VAR_7)
  *(u64 *)((void *)VAR_10 + FUNC_4(VAR_3)->private) = VAR_12;
 else
  *(unsigned int *)((void *)VAR_10 + FUNC_4(VAR_3)->private) = VAR_12;

 FUNC_7(VAR_10, 0);
 VAR_11 = 0;
out_finish:
 FUNC_0(&VAR_9);
 return VAR_11 ?: VAR_5;
}
