
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {scalar_t__ v_rdev; } ;
struct ufsmount {int um_fsckpid; int um_cp; struct fs* um_fs; struct vnode* um_devvp; } ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct mount {int mnt_flag; int mnt_optnew; int mnt_opt; } ;
struct inode {int dummy; } ;
struct fs {scalar_t__ fs_ronly; scalar_t__ fs_pendingblocks; scalar_t__ fs_pendinginodes; char* fs_fsmnt; int fs_flags; int fs_clean; scalar_t__* fs_snapinum; int fs_fmod; void* fs_mtime; } ;
typedef int pid_t ;
typedef int intmax_t ;
typedef int accmode_t ;


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
 int FUNC_0 (int,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_3 (struct mount*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nameidata*,int ) ;
 int VAR_25 ;
 int FUNC_6 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct ufsmount* FUNC_7 (struct mount*) ;
 int FUNC_8 (struct vnode*,int,int ,struct thread*) ;
 int FUNC_9 (struct vnode*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 struct thread* VAR_33 ;
 int FUNC_10 (struct mount*,int,struct thread*) ;
 int FUNC_11 (struct vnode*,struct mount*,struct thread*) ;
 int VAR_34 ;
 int FUNC_12 (struct mount*,struct thread*,int ) ;
 int FUNC_13 (struct ufsmount*,int ,int ) ;
 int FUNC_14 (struct mount*,char*) ;
 int FUNC_15 (struct mount*) ;
 int FUNC_16 (int ,int ,int,int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct nameidata*) ;
 int FUNC_20 (char*,char*,...) ;
 int FUNC_21 (struct thread*,int ) ;
 int FUNC_22 (struct mount*,int,struct thread*) ;
 int FUNC_23 (struct vnode*,struct mount*,struct fs*,int ) ;
 int FUNC_24 (struct mount*) ;
 void* VAR_35 ;
 int * VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* FUNC_25 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_26 (struct mount*,int ) ;
 int FUNC_27 (int ,char*) ;
 scalar_t__ FUNC_28 (int ,int ) ;
 scalar_t__ FUNC_29 (int ,char*,int *,int ) ;
 scalar_t__ FUNC_30 (int ,char*,int *,int *) ;
 char* FUNC_31 (int ,char*,int*) ;
 int FUNC_32 (struct mount*,char*,...) ;
 int FUNC_33 (struct mount*,char*) ;
 int FUNC_34 (int ,char*,char*,int*) ;
 int FUNC_35 (struct mount*) ;
 int FUNC_36 (struct mount*,int ) ;
 int FUNC_37 (struct mount*) ;
 int FUNC_38 (struct vnode*,int*) ;
 int FUNC_39 (struct vnode*,int) ;
 int FUNC_40 (int *,struct mount**,int ) ;
 int FUNC_41 (struct vnode*) ;
 int FUNC_42 (struct vnode*) ;

__attribute__((used)) static int
FUNC_43(struct mount *VAR_39)
{
 struct vnode *VAR_40;
 struct thread *VAR_41;
 struct ufsmount *VAR_42 = ((void*)0);
 struct fs *VAR_43;
 pid_t VAR_44 = 0;
 int VAR_45, VAR_46, VAR_47;
 uint64_t VAR_48, VAR_49;
 accmode_t VAR_50;
 struct nameidata VAR_51;
 char *VAR_52;

 VAR_41 = VAR_33;
 if (FUNC_28(VAR_39->mnt_optnew, VAR_34))
  return (VAR_0);
 if (VAR_36 == ((void*)0)) {
  VAR_36 = FUNC_25("FFS inode",
      sizeof(struct inode), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      VAR_28, 0);
  VAR_37 = FUNC_25("FFS1 dinode",
      sizeof(struct ufs1_dinode), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      VAR_28, 0);
  VAR_38 = FUNC_25("FFS2 dinode",
      sizeof(struct ufs2_dinode), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      VAR_28, 0);
 }

 FUNC_27(VAR_39->mnt_optnew, "groupquota");
 FUNC_27(VAR_39->mnt_optnew, "userquota");

 VAR_52 = FUNC_31(VAR_39->mnt_optnew, "from", &VAR_45);
 if (VAR_45)
  return (VAR_45);

 VAR_48 = 0;
 if (FUNC_30(VAR_39->mnt_optnew, "untrusted", ((void*)0), ((void*)0)) == 0)
  VAR_48 |= VAR_22;

 if (FUNC_30(VAR_39->mnt_optnew, "acls", ((void*)0), ((void*)0)) == 0)
  VAR_48 |= VAR_15;

 if (FUNC_30(VAR_39->mnt_optnew, "snapshot", ((void*)0), ((void*)0)) == 0) {
  VAR_48 |= VAR_21;




  FUNC_27(VAR_39->mnt_optnew, "snapshot");
  FUNC_27(VAR_39->mnt_opt, "snapshot");
 }

 if (FUNC_30(VAR_39->mnt_optnew, "fsckpid", ((void*)0), ((void*)0)) == 0 &&
     FUNC_34(VAR_39->mnt_optnew, "fsckpid", "%d", &VAR_44) == 1) {




  FUNC_27(VAR_39->mnt_optnew, "fsckpid");
  FUNC_27(VAR_39->mnt_opt, "fsckpid");
  if (VAR_39->mnt_flag & VAR_23) {
   if (FUNC_7(VAR_39)->um_fs->fs_ronly == 0 &&
        FUNC_29(VAR_39->mnt_optnew, "ro", ((void*)0), 0) == 0) {
    FUNC_32(VAR_39,
        "Checker enable: Must be read-only");
    return (VAR_0);
   }
  } else if (FUNC_29(VAR_39->mnt_optnew, "ro", ((void*)0), 0) == 0) {
   FUNC_32(VAR_39,
       "Checker enable: Must be read-only");
   return (VAR_0);
  }

  if (VAR_44 == 0)
   VAR_44 = -1;
 }

 if (FUNC_30(VAR_39->mnt_optnew, "nfsv4acls", ((void*)0), ((void*)0)) == 0) {
  if (VAR_48 & VAR_15) {
   FUNC_32(VAR_39,
       "\"acls\" and \"nfsv4acls\" options "
       "are mutually exclusive");
   return (VAR_0);
  }
  VAR_48 |= VAR_18;
 }

 FUNC_1(VAR_39);
 VAR_39->mnt_flag |= VAR_48;
 FUNC_2(VAR_39);




 if (VAR_39->mnt_flag & VAR_23) {
  VAR_42 = FUNC_7(VAR_39);
  VAR_43 = VAR_42->um_fs;
  VAR_40 = VAR_42->um_devvp;
  if (VAR_44 == -1 && VAR_42->um_fsckpid > 0) {
   if ((VAR_45 = FUNC_10(VAR_39, VAR_32, VAR_41)) != 0 ||
       (VAR_45 = FUNC_13(VAR_42, VAR_24, 0)) != 0)
    return (VAR_45);
   FUNC_17();



   VAR_45 = FUNC_16(VAR_42->um_cp, 0, -1, 0);
   FUNC_18();
   VAR_42->um_fsckpid = 0;
  }
  if (VAR_43->fs_ronly == 0 &&
      FUNC_29(VAR_39->mnt_optnew, "ro", ((void*)0), 0)) {



   if ((VAR_45 = FUNC_40(((void*)0), &VAR_39, VAR_31)) != 0)
    return (VAR_45);
   VAR_45 = FUNC_37(VAR_39);
   if (VAR_45 != 0)
    return (VAR_45);




   VAR_47 = VAR_32;
   if (VAR_39->mnt_flag & VAR_17)
    VAR_47 |= VAR_3;
   if (FUNC_3(VAR_39)) {
    VAR_45 = FUNC_22(VAR_39, VAR_47, VAR_41);
   } else {
    VAR_45 = FUNC_10(VAR_39, VAR_47, VAR_41);
   }
   if (VAR_45) {
    FUNC_36(VAR_39, 0);
    return (VAR_45);
   }
   if (VAR_43->fs_pendingblocks != 0 ||
       VAR_43->fs_pendinginodes != 0) {
    FUNC_20("WARNING: %s Update error: blocks %jd "
        "files %d\n", VAR_43->fs_fsmnt,
        (intmax_t)VAR_43->fs_pendingblocks,
        VAR_43->fs_pendinginodes);
    VAR_43->fs_pendingblocks = 0;
    VAR_43->fs_pendinginodes = 0;
   }
   if ((VAR_43->fs_flags & (VAR_9 | VAR_6)) == 0)
    VAR_43->fs_clean = 1;
   if ((VAR_45 = FUNC_13(VAR_42, VAR_24, 0)) != 0) {
    VAR_43->fs_ronly = 0;
    VAR_43->fs_clean = 0;
    FUNC_36(VAR_39, 0);
    return (VAR_45);
   }
   if (FUNC_3(VAR_39))
    FUNC_24(VAR_39);
   FUNC_17();



   FUNC_16(VAR_42->um_cp, 0, -1, -1);
   FUNC_18();
   VAR_43->fs_ronly = 1;
   FUNC_1(VAR_39);
   VAR_39->mnt_flag |= VAR_19;
   FUNC_2(VAR_39);




   FUNC_36(VAR_39, 0);
  }
  if ((VAR_39->mnt_flag & VAR_20) &&
      (VAR_45 = FUNC_12(VAR_39, VAR_41, 0)) != 0)
   return (VAR_45);
  if (VAR_43->fs_ronly &&
      !FUNC_29(VAR_39->mnt_optnew, "ro", ((void*)0), 0)) {



   if (VAR_42->um_fsckpid > 0) {
    FUNC_32(VAR_39,
        "Active checker, cannot upgrade to write");
    return (VAR_0);
   }




   FUNC_39(VAR_40, VAR_10 | VAR_11);
   VAR_45 = FUNC_8(VAR_40, VAR_29 | VAR_30,
       VAR_41->td_ucred, VAR_41);
   if (VAR_45)
    VAR_45 = FUNC_21(VAR_41, VAR_26);
   if (VAR_45) {
    FUNC_9(VAR_40, 0);
    return (VAR_45);
   }
   FUNC_9(VAR_40, 0);
   VAR_43->fs_flags &= ~VAR_9;
   if (VAR_43->fs_clean == 0) {
    VAR_43->fs_flags |= VAR_9;
    if ((VAR_39->mnt_flag & VAR_17) ||
        ((VAR_43->fs_flags &
         (VAR_8 | VAR_6)) == 0 &&
         (VAR_43->fs_flags & VAR_5))) {
     FUNC_20("WARNING: %s was not properly "
        "dismounted\n", VAR_43->fs_fsmnt);
    } else {
     FUNC_32(VAR_39,
        "R/W mount of %s denied. %s.%s",
        VAR_43->fs_fsmnt,
        "Filesystem is not clean - run fsck",
        (VAR_43->fs_flags & VAR_8) == 0 ? "" :
        " Forced mount will invalidate"
        " journal contents");
     return (VAR_1);
    }
   }
   FUNC_17();



   VAR_45 = FUNC_16(VAR_42->um_cp, 0, 1, 1);
   FUNC_18();
   if (VAR_45)
    return (VAR_45);
   if ((VAR_45 = FUNC_40(((void*)0), &VAR_39, VAR_31)) != 0)
    return (VAR_45);
   VAR_45 = FUNC_37(VAR_39);
   if (VAR_45 != 0)
    return (VAR_45);
   VAR_43->fs_ronly = 0;
   FUNC_1(VAR_39);
   VAR_49 = VAR_19;
   if (FUNC_3(VAR_39) && (VAR_39->mnt_flag &
       VAR_16) != 0)
    VAR_49 |= VAR_16;
   VAR_39->mnt_flag &= ~VAR_49;
   FUNC_2(VAR_39);
   VAR_43->fs_mtime = VAR_35;

   if ((VAR_43->fs_flags & VAR_5) &&
       (VAR_45 = FUNC_23(VAR_40, VAR_39, VAR_43, VAR_41->td_ucred))){
    VAR_43->fs_ronly = 1;
    FUNC_1(VAR_39);
    VAR_39->mnt_flag |= VAR_49;
    FUNC_2(VAR_39);
    FUNC_36(VAR_39, 0);
    return (VAR_45);
   }
   VAR_43->fs_clean = 0;
   if ((VAR_45 = FUNC_13(VAR_42, VAR_24, 0)) != 0) {
    VAR_43->fs_ronly = 1;
    FUNC_1(VAR_39);
    VAR_39->mnt_flag |= VAR_49;
    FUNC_2(VAR_39);
    FUNC_36(VAR_39, 0);
    return (VAR_45);
   }
   if (VAR_43->fs_snapinum[0] != 0)
    FUNC_15(VAR_39);
   FUNC_36(VAR_39, 0);
  }







  if (FUNC_3(VAR_39)) {

   FUNC_1(VAR_39);
   VAR_39->mnt_flag &= ~VAR_16;
   FUNC_2(VAR_39);
  }



  if ((VAR_43->fs_flags & VAR_4) != 0) {

   FUNC_1(VAR_39);
   VAR_39->mnt_flag |= VAR_15;
   FUNC_2(VAR_39);
  }

  if ((VAR_43->fs_flags & VAR_7) != 0) {

   FUNC_1(VAR_39);
   VAR_39->mnt_flag |= VAR_18;
   FUNC_2(VAR_39);
  }




  if (VAR_44 > 0) {
   if (VAR_42->um_fsckpid != 0) {
    FUNC_32(VAR_39,
        "Active checker already running on %s",
        VAR_43->fs_fsmnt);
    return (VAR_0);
   }
   FUNC_0(FUNC_3(VAR_39) == 0,
       ("soft updates enabled on read-only file system"));
   FUNC_17();



   VAR_45 = FUNC_16(VAR_42->um_cp, 0, 1, 0);
   FUNC_18();
   if (VAR_45) {
    FUNC_32(VAR_39,
        "Checker activation failed on %s",
        VAR_43->fs_fsmnt);
    return (VAR_45);
   }
   VAR_42->um_fsckpid = VAR_44;
   if (VAR_43->fs_snapinum[0] != 0)
    FUNC_15(VAR_39);
   VAR_43->fs_mtime = VAR_35;
   VAR_43->fs_fmod = 1;
   VAR_43->fs_clean = 0;
   (void) FUNC_13(VAR_42, VAR_24, 0);
  }




  if (VAR_39->mnt_flag & VAR_21)
   return (FUNC_14(VAR_39, VAR_52));




  FUNC_35(VAR_39);
 }





 FUNC_6(&VAR_51, VAR_13, VAR_2 | VAR_12, VAR_27, VAR_52, VAR_41);
 VAR_45 = FUNC_19(&VAR_51);
 if ((VAR_39->mnt_flag & VAR_23) != 0) {






  VAR_46 = FUNC_26(VAR_39, VAR_14);
  FUNC_4(VAR_46 == 0);
 }
 if (VAR_45 != 0)
  return (VAR_45);
 FUNC_5(&VAR_51, VAR_25);
 VAR_40 = VAR_51.ni_vp;
 if (!FUNC_38(VAR_40, &VAR_45)) {
  FUNC_41(VAR_40);
  return (VAR_45);
 }





 VAR_50 = VAR_29;
 if ((VAR_39->mnt_flag & VAR_19) == 0)
  VAR_50 |= VAR_30;
 VAR_45 = FUNC_8(VAR_40, VAR_50, VAR_41->td_ucred, VAR_41);
 if (VAR_45)
  VAR_45 = FUNC_21(VAR_41, VAR_26);
 if (VAR_45) {
  FUNC_41(VAR_40);
  return (VAR_45);
 }

 if (VAR_39->mnt_flag & VAR_23) {







  if (VAR_40->v_rdev != VAR_42->um_devvp->v_rdev)
   VAR_45 = VAR_0;
  FUNC_41(VAR_40);
  if (VAR_45)
   return (VAR_45);
 } else {
  if ((VAR_45 = FUNC_11(VAR_40, VAR_39, VAR_41)) != 0) {
   FUNC_42(VAR_40);
   return (VAR_45);
  }
  if (VAR_44 > 0) {
   FUNC_0(FUNC_3(VAR_39) == 0,
       ("soft updates enabled on read-only file system"));
   VAR_42 = FUNC_7(VAR_39);
   VAR_43 = VAR_42->um_fs;
   FUNC_17();



   VAR_45 = FUNC_16(VAR_42->um_cp, 0, 1, 0);
   FUNC_18();
   if (VAR_45) {
    FUNC_20("WARNING: %s: Checker activation "
        "failed\n", VAR_43->fs_fsmnt);
   } else {
    VAR_42->um_fsckpid = VAR_44;
    if (VAR_43->fs_snapinum[0] != 0)
     FUNC_15(VAR_39);
    VAR_43->fs_mtime = VAR_35;
    VAR_43->fs_clean = 0;
    (void) FUNC_13(VAR_42, VAR_24, 0);
   }
  }
 }
 FUNC_33(VAR_39, VAR_52);
 return (0);
}
