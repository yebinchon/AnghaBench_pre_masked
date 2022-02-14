
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
struct fs {scalar_t__ fs_magic; scalar_t__ fs_cgsize; scalar_t__ fs_fshift; size_t fs_ipg; } ;
struct cg {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef size_t ino_t ;
typedef struct cg* caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (struct fs*) ;
 scalar_t__ FUNC_1 (struct fs*) ;
 int FUNC_2 (struct ufs2_dinode*,int) ;
 int FUNC_3 (struct cg*) ;
 int FUNC_4 (struct cg*) ;
 scalar_t__ FUNC_5 (struct fs*,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (struct cg*) ;
 int FUNC_9 (struct fs*,size_t) ;
 scalar_t__ FUNC_10 (struct fs*,size_t) ;
 scalar_t__ FUNC_11 (int ,size_t) ;
 scalar_t__ FUNC_12 (int,scalar_t__,int ) ;
 struct cg* FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int,struct cg*,scalar_t__) ;
 size_t FUNC_15 (size_t,size_t) ;

__attribute__((used)) static union dinode *
FUNC_16(int VAR_2, struct fs *VAR_3, ino_t VAR_4)
{
 static caddr_t VAR_5;
 static struct cg *VAR_6;
 static ino_t VAR_7;
 static int VAR_8;
 struct ufs2_dinode *VAR_9;

 if (VAR_2 < 0) {
  if (VAR_5) {
   FUNC_8(VAR_5);
   VAR_5 = 0;
   if (VAR_3 != ((void*)0) && VAR_3->fs_magic == VAR_1) {
    FUNC_8(VAR_6);
    VAR_6 = 0;
   }
  }
  return 0;
 }

 if (!VAR_5 || VAR_4 < VAR_7 || VAR_4 >= VAR_7 + FUNC_0(VAR_3)) {
  if (VAR_3->fs_magic == VAR_1 &&
      (!VAR_6 || VAR_8 != FUNC_9(VAR_3, VAR_4))) {
   VAR_8 = FUNC_9(VAR_3, VAR_4);
   if (!VAR_6 && !(VAR_6 = FUNC_13(VAR_3->fs_cgsize)))
    FUNC_7(1, "allocate cg");
   if (FUNC_12(VAR_2, (off_t)FUNC_5(VAR_3, VAR_8) << VAR_3->fs_fshift, 0) < 0)
    FUNC_6(1, "lseek cg");
   if (FUNC_14(VAR_2, VAR_6, VAR_3->fs_cgsize) != VAR_3->fs_cgsize)
    FUNC_6(1, "read cg");
   if (!FUNC_3(VAR_6))
    FUNC_7(1, "cg has bad magic");
  }
  if (!VAR_5
      && !(VAR_5 = FUNC_13(FUNC_1(VAR_3))))
   FUNC_7(1, "allocate inodes");
  VAR_7 = FUNC_15(VAR_4, FUNC_0(VAR_3));
  if (FUNC_12(VAR_2, (off_t)FUNC_10(VAR_3, VAR_7) << VAR_3->fs_fshift, 0) < (off_t)0
      || FUNC_14(VAR_2, VAR_5, FUNC_1(VAR_3)) != (ssize_t)FUNC_1(VAR_3))
   FUNC_6(1, "read inodes");
 }

 if (VAR_3->fs_magic == VAR_0)
  return ((union dinode *)
      &((struct ufs1_dinode *)VAR_5)[VAR_4 % FUNC_0(VAR_3)]);
 VAR_9 = &((struct ufs2_dinode *)VAR_5)[VAR_4 % FUNC_0(VAR_3)];

 if (FUNC_11(FUNC_4(VAR_6), VAR_4 % VAR_3->fs_ipg))
  FUNC_2(VAR_9, sizeof (*VAR_9));
 return ((union dinode *)VAR_9);
}
