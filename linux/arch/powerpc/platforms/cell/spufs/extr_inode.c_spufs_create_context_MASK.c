
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct vfsmount {int dummy; } ;
struct spu_gang {int aff_mutex; } ;
struct spu_context {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_ctx; struct spu_gang* i_gang; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct spu_context*) ;
 struct spu_context* FUNC_9 (int,struct spu_gang*,struct file*) ;
 int FUNC_10 (struct path*) ;
 int FUNC_11 (struct inode*,struct dentry*,int,int) ;
 int FUNC_12 (struct inode*,struct dentry*) ;
 int FUNC_13 (int,int ,struct spu_context*) ;

__attribute__((used)) static int
FUNC_14(struct inode *VAR_9, struct dentry *VAR_10,
   struct vfsmount *VAR_11, int VAR_12, umode_t VAR_13,
   struct file *VAR_14)
{
 int VAR_15;
 int VAR_16;
 struct spu_gang *VAR_17;
 struct spu_context *VAR_18;
 struct path VAR_19 = {.mnt = VAR_11, .dentry = VAR_10};

 if ((VAR_12 & VAR_7) &&
     !FUNC_4(VAR_0))
  return -VAR_3;

 if ((VAR_12 & (VAR_7 | VAR_6))
     == VAR_6)
  return -VAR_1;

 if ((VAR_12 & VAR_6) && !VAR_8)
  return -VAR_2;

 VAR_17 = ((void*)0);
 VAR_18 = ((void*)0);
 VAR_16 = VAR_12 & (VAR_4 | VAR_5);
 if (VAR_16) {
  VAR_17 = FUNC_2(VAR_9)->i_gang;
  if (!VAR_17)
   return -VAR_1;
  FUNC_6(&VAR_17->aff_mutex);
  VAR_18 = FUNC_9(VAR_12, VAR_17, VAR_14);
  if (FUNC_0(VAR_18)) {
   VAR_15 = FUNC_1(VAR_18);
   goto out_aff_unlock;
  }
 }

 VAR_15 = FUNC_11(VAR_9, VAR_10, VAR_12, VAR_13 & 0777);
 if (VAR_15)
  goto out_aff_unlock;

 if (VAR_16) {
  FUNC_13(VAR_12, FUNC_2(FUNC_5(VAR_10))->i_ctx,
        VAR_18);
  if (VAR_18)
   FUNC_8(VAR_18);
 }

 VAR_15 = FUNC_10(&VAR_19);
 if (VAR_15 < 0)
  FUNC_3(FUNC_12(VAR_9, VAR_10));

out_aff_unlock:
 if (VAR_16)
  FUNC_7(&VAR_17->aff_mutex);
 return VAR_15;
}
