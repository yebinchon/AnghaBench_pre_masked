
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union dinode {char ffs1_din; char ffs2_din; } ;
typedef int uintmax_t ;
typedef int uint32_t ;
struct vnode {int * member_1; TYPE_1__* member_0; } ;
struct TYPE_8__ {int ffs2_din; int ffs1_din; } ;
struct inode {int i_number; int i_size; TYPE_3__ i_din; struct vnode* i_devvp; struct fs* i_fs; } ;
struct fs {int dummy; } ;
struct buf {int * b_data; } ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_6__ {scalar_t__ superblock; TYPE_2__* fs_specific; } ;
typedef TYPE_1__ fsinfo_t ;
struct TYPE_7__ {int version; int bsize; } ;
typedef TYPE_2__ ffs_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union dinode*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buf*) ;
 scalar_t__ FUNC_5 (struct buf*) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,char*,char*,long long,int,int ) ;
 scalar_t__ FUNC_10 (struct inode*,int,int,struct buf**) ;
 int FUNC_11 (TYPE_3__*,int,TYPE_1__*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (int *,char*,int) ;
 int VAR_7 ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_18(union dinode *VAR_9, uint32_t VAR_10, void *VAR_11, fsinfo_t *VAR_12)
{
 int VAR_13, VAR_14;
 char *VAR_15, *VAR_16;
 off_t VAR_17, VAR_18, VAR_19;
 ssize_t VAR_20;
 struct inode VAR_21;
 struct buf * VAR_22;
 ffs_opt_t *VAR_23 = VAR_12->fs_specific;
 struct vnode VAR_24 = { VAR_12, ((void*)0) };

 FUNC_3 (VAR_9 != ((void*)0));
 FUNC_3 (VAR_11 != ((void*)0));
 FUNC_3 (VAR_12 != ((void*)0));
 FUNC_3 (VAR_23 != ((void*)0));

 VAR_13 = FUNC_2(FUNC_0(VAR_9, VAR_7));
 VAR_15 = ((void*)0);
 VAR_14 = -1;
 VAR_16 = ((void*)0);

 VAR_21.i_fs = (struct fs *)VAR_12->superblock;
 VAR_21.i_devvp = &VAR_24;

 if (VAR_5 & VAR_0) {
  FUNC_16(
      "ffs_write_file: ino %u, din %p, isfile %d, %s, size %lld",
      VAR_10, VAR_9, VAR_13, FUNC_13(FUNC_0(VAR_9, VAR_7) & VAR_4),
      (long long)FUNC_0(VAR_9, VAR_8));
  if (VAR_13)
   FUNC_16(", file '%s'\n", (char *)VAR_11);
  else
   FUNC_16(", buffer %p\n", VAR_11);
 }

 VAR_21.i_number = VAR_10;
 VAR_21.i_size = FUNC_0(VAR_9, VAR_8);
 if (VAR_23->version == 1)
  FUNC_14(&VAR_21.i_din.ffs1_din, &VAR_9->ffs1_din,
      sizeof(VAR_21.i_din.ffs1_din));
 else
  FUNC_14(&VAR_21.i_din.ffs2_din, &VAR_9->ffs2_din,
      sizeof(VAR_21.i_din.ffs2_din));

 if (FUNC_0(VAR_9, VAR_8) == 0)
  goto write_inode_and_leave;

 if (VAR_13) {
  VAR_15 = FUNC_7(VAR_23->bsize);
  if ((VAR_14 = FUNC_15((char *)VAR_11, VAR_3, 0444)) == -1) {
   FUNC_8(VAR_2, "Can't open `%s' for reading", (char *)VAR_11);
  }
 } else {
  VAR_16 = VAR_11;
 }

 VAR_18 = 0;
 for (VAR_17 = FUNC_0(VAR_9, VAR_8); VAR_17 > 0; VAR_17 -= VAR_18) {
  VAR_18 = FUNC_1(VAR_17, VAR_23->bsize);
  if (!VAR_13)
   ;
  else if ((VAR_20 = FUNC_17(VAR_14, VAR_15, VAR_18)) == -1)
   FUNC_8(VAR_2, "Reading `%s', %lld bytes to go",
       (char *)VAR_11, (long long)VAR_17);
  else if (VAR_20 != VAR_18)
   FUNC_9(VAR_2, "Reading `%s', %lld bytes to go, "
       "read %zd bytes, expected %ju bytes, does "
       "metalog size= attribute mismatch source size?",
       (char *)VAR_11, (long long)VAR_17, VAR_20,
       (uintmax_t)VAR_18);
  else
   VAR_16 = VAR_15;
  VAR_19 = FUNC_0(VAR_9, VAR_8) - VAR_17;
  if (VAR_5 & VAR_1)
   FUNC_16(
  "ffs_write_file: write %p offset %lld size %lld left %lld\n",
       VAR_16, (long long)VAR_19,
       (long long)VAR_18, (long long)VAR_17);






  VAR_6 = FUNC_10(&VAR_21, VAR_19, VAR_18, &VAR_22);
 bad_ffs_write_file:
  if (VAR_6 != 0)
   FUNC_8(1,
       "Writing inode %d (%s), bytes %lld + %lld",
       VAR_10,
       VAR_13 ? (char *)VAR_11 :
         FUNC_13(FUNC_0(VAR_9, VAR_7) & VAR_4),
       (long long)VAR_19, (long long)VAR_18);
  FUNC_14(VAR_22->b_data, VAR_16, VAR_18);
  VAR_6 = FUNC_5(VAR_22);
  if (VAR_6 != 0)
   goto bad_ffs_write_file;
  FUNC_4(VAR_22);
  if (!VAR_13)
   VAR_16 += VAR_18;
 }

 write_inode_and_leave:
 FUNC_11(&VAR_21.i_din, VAR_21.i_number, VAR_12);
 if (VAR_15)
  FUNC_12(VAR_15);
 if (VAR_14 != -1)
  FUNC_6(VAR_14);
}
