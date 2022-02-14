
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ufsmount {int um_mountp; int um_devvp; struct fs* um_fs; } ;
struct fs {scalar_t__ fs_sblockloc; scalar_t__ fs_magic; int fs_old_flags; char* fs_fsmnt; int fs_ckhash; scalar_t__ fs_sbsize; } ;
struct devfd {scalar_t__ waitfor; int error; scalar_t__ suspended; struct buf* sbbp; struct ufsmount* ump; } ;
struct buf {int b_flags; scalar_t__ b_data; } ;
typedef scalar_t__ off_t ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct fs*) ;
 int FUNC_7 (struct fs*,struct ufsmount*) ;
 struct buf* FUNC_8 (int ,int ,int,int ,int ,int ) ;
 int FUNC_9 (char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct ufsmount*,struct fs*,struct buf*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_7, off_t VAR_8, void *VAR_9, int VAR_10)
{
 struct devfd *VAR_11;
 struct ufsmount *VAR_12;
 struct buf *VAR_13;
 struct fs *VAR_14;
 int VAR_15;

 VAR_11 = VAR_7;
 VAR_12 = VAR_11->ump;
 VAR_14 = VAR_12->um_fs;



 if (VAR_8 != VAR_14->fs_sblockloc) {
  VAR_13 = FUNC_8(VAR_12->um_devvp, FUNC_4(VAR_8), VAR_10, 0, 0, 0);
  FUNC_2(VAR_9, VAR_13->b_data, (u_int)VAR_10);
  if (VAR_11->suspended)
   VAR_13->b_flags |= VAR_0;
  if (VAR_11->waitfor != VAR_4)
   FUNC_1(VAR_13);
  else if ((VAR_15 = FUNC_5(VAR_13)) != 0)
   VAR_11->error = VAR_15;
  return (0);
 }



 VAR_13 = VAR_11->sbbp;
 if (VAR_11->error != 0) {
  FUNC_3(VAR_13);
  return (VAR_11->error);
 }
 if (VAR_14->fs_magic == VAR_2 && VAR_14->fs_sblockloc != VAR_5 &&
     (VAR_14->fs_old_flags & VAR_1) == 0) {
  FUNC_9("WARNING: %s: correcting fs_sblockloc from %jd to %d\n",
      VAR_14->fs_fsmnt, VAR_14->fs_sblockloc, VAR_5);
  VAR_14->fs_sblockloc = VAR_5;
 }
 if (VAR_14->fs_magic == VAR_3 && VAR_14->fs_sblockloc != VAR_6 &&
     (VAR_14->fs_old_flags & VAR_1) == 0) {
  FUNC_9("WARNING: %s: correcting fs_sblockloc from %jd to %d\n",
      VAR_14->fs_fsmnt, VAR_14->fs_sblockloc, VAR_6);
  VAR_14->fs_sblockloc = VAR_6;
 }
 if (FUNC_0(VAR_12->um_mountp))
  FUNC_10(VAR_12, (struct fs *)VAR_13->b_data, VAR_13);
 FUNC_2((caddr_t)VAR_14, VAR_13->b_data, (u_int)VAR_14->fs_sbsize);
 VAR_14 = (struct fs *)VAR_13->b_data;
 FUNC_7(VAR_14, VAR_12);




 VAR_14->fs_ckhash = FUNC_6(VAR_14);
 if (VAR_11->suspended)
  VAR_13->b_flags |= VAR_0;
 if (VAR_11->waitfor != VAR_4)
  FUNC_1(VAR_13);
 else if ((VAR_15 = FUNC_5(VAR_13)) != 0)
  VAR_11->error = VAR_15;
 return (VAR_11->error);
}
