
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_root; int s_user_ns; struct binderfs_info* s_fs_info; int * s_op; int s_magic; int s_iflags; int s_blocksize_bits; int s_blocksize; } ;
struct inode {int i_mode; int * i_op; int i_ctime; int i_atime; int i_mtime; int * i_fop; int i_ino; } ;
struct TYPE_6__ {scalar_t__ stats_mode; } ;
struct binderfs_info {TYPE_3__ mount_opts; int root_uid; int root_gid; int ipc_ns; } ;
struct binderfs_device {int name; int member_0; } ;
struct TYPE_5__ {TYPE_1__* nsproxy; } ;
struct TYPE_4__ {int ipc_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,int *,struct binderfs_device*) ;
 int VAR_13 ;
 int FUNC_2 (void*,TYPE_3__*) ;
 int VAR_14 ;
 TYPE_2__* VAR_15 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct super_block*) ;
 struct binderfs_info* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 struct inode* FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct inode*,int) ;
 int VAR_16 ;
 size_t FUNC_13 (char const*,char*) ;
 int FUNC_14 (int ,char const*,size_t) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct super_block *VAR_17, void *VAR_18, int VAR_19)
{
 int VAR_20;
 struct binderfs_info *VAR_21;
 struct inode *VAR_22 = ((void*)0);
 struct binderfs_device VAR_23 = { 0 };
 const char *VAR_24;
 size_t VAR_25;

 VAR_17->s_blocksize = VAR_7;
 VAR_17->s_blocksize_bits = VAR_6;
 VAR_17->s_iflags &= ~VAR_8;
 VAR_17->s_iflags |= VAR_9;
 VAR_17->s_magic = VAR_0;
 VAR_17->s_op = &VAR_14;
 VAR_17->s_time_gran = 1;

 VAR_17->s_fs_info = FUNC_8(sizeof(struct binderfs_info), VAR_3);
 if (!VAR_17->s_fs_info)
  return -VAR_1;
 VAR_21 = VAR_17->s_fs_info;

 VAR_21->ipc_ns = FUNC_5(VAR_15->nsproxy->ipc_ns);

 VAR_20 = FUNC_2(VAR_18, &VAR_21->mount_opts);
 if (VAR_20)
  return VAR_20;

 VAR_21->root_gid = FUNC_9(VAR_17->s_user_ns, 0);
 if (!FUNC_6(VAR_21->root_gid))
  VAR_21->root_gid = VAR_4;
 VAR_21->root_uid = FUNC_10(VAR_17->s_user_ns, 0);
 if (!FUNC_15(VAR_21->root_uid))
  VAR_21->root_uid = VAR_5;

 VAR_22 = FUNC_11(VAR_17);
 if (!VAR_22)
  return -VAR_1;

 VAR_22->i_ino = VAR_2;
 VAR_22->i_fop = &VAR_16;
 VAR_22->i_mode = VAR_11 | 0755;
 VAR_22->i_mtime = VAR_22->i_atime = VAR_22->i_ctime = FUNC_3(VAR_22);
 VAR_22->i_op = &VAR_13;
 FUNC_12(VAR_22, 2);

 VAR_17->s_root = FUNC_4(VAR_22);
 if (!VAR_17->s_root)
  return -VAR_1;

 VAR_20 = FUNC_0(VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_24 = VAR_12;
 for (VAR_25 = FUNC_13(VAR_24, ","); VAR_25 > 0; VAR_25 = FUNC_13(VAR_24, ",")) {
  FUNC_14(VAR_23.name, VAR_24, VAR_25 + 1);
  VAR_20 = FUNC_1(VAR_22, ((void*)0), &VAR_23);
  if (VAR_20)
   return VAR_20;
  VAR_24 += VAR_25;
  if (*VAR_24 == ',')
   VAR_24++;
 }

 if (VAR_21->mount_opts.stats_mode == VAR_10)
  return FUNC_7(VAR_17);

 return 0;
}
