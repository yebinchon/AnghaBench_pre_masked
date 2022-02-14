
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct vnode {scalar_t__ v_type; struct cdev* v_rdev; int v_mount; } ;
struct ufsmount {struct vnode* um_devvp; struct fs* um_fs; } ;
struct inode {scalar_t__ i_number; } ;
struct fs {int fs_ipg; int fs_ncg; int fs_unrefs; int fs_fmod; int fs_fsmnt; } ;
struct cg {int cg_unrefs; } ;
struct cdev {int dummy; } ;
struct buf {int dummy; } ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (struct fs*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ufsmount*) ;
 int FUNC_2 (struct ufsmount*) ;
 scalar_t__ VAR_1 ;
 struct ufsmount* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 struct inode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct cdev*) ;
 int FUNC_7 (struct fs*,struct vnode*,int,int ,struct buf**,struct cg**) ;
 int FUNC_8 (struct fs*,scalar_t__) ;
 int FUNC_9 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct vnode *VAR_3, int VAR_4)
{
 struct cg *VAR_5;
 struct buf *VAR_6;
 int VAR_7, VAR_8;
 struct cdev *VAR_9;
 struct inode *VAR_10;
 struct ufsmount *VAR_11;
 struct fs *VAR_12;
 struct vnode *VAR_13;
 ino_t VAR_14;

 VAR_10 = FUNC_4(VAR_3);
 VAR_11 = FUNC_3(VAR_3->v_mount);
 VAR_12 = VAR_11->um_fs;
 VAR_13 = VAR_11->um_devvp;
 VAR_14 = VAR_10->i_number;

 VAR_8 = FUNC_8(VAR_12, VAR_14);
 if (VAR_13->v_type == VAR_2) {

  VAR_9 = FUNC_3(VAR_13->v_mount)->um_devvp->v_rdev;
 } else if (VAR_13->v_type == VAR_1) {

  VAR_9 = VAR_13->v_rdev;
 } else {
  VAR_6 = ((void*)0);
  return (VAR_0);
 }
 if ((u_int)VAR_14 >= VAR_12->fs_ipg * VAR_12->fs_ncg)
  FUNC_9("ufs_gjournal_modref: range: dev = %s, ino = %lu, fs = %s",
      FUNC_6(VAR_9), (u_long)VAR_14, VAR_12->fs_fsmnt);
 if ((VAR_7 = FUNC_7(VAR_12, VAR_13, VAR_8, 0, &VAR_6, &VAR_5)) != 0)
  return (VAR_7);
 VAR_5->cg_unrefs += VAR_4;
 FUNC_1(VAR_11);
 VAR_12->fs_unrefs += VAR_4;
 VAR_12->fs_fmod = 1;
 FUNC_0(VAR_12, VAR_8);
 FUNC_2(VAR_11);
 FUNC_5(VAR_6);
 return (0);
}
