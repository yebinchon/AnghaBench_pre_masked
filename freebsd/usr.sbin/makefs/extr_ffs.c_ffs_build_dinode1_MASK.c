
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ufs1_dinode {size_t di_size; int di_db; int di_rdev; int di_ctimensec; int di_mtimensec; int di_atimensec; int di_ctime; int di_mtime; int di_atime; int di_gid; int di_uid; int di_gen; int di_flags; int di_nlink; int di_mode; } ;
struct stat {scalar_t__ st_ino; size_t st_size; int st_rdev; int st_ctimensec; int st_mtimensec; int st_atimensec; int st_ctime; int st_mtime; int st_atime; int st_gid; int st_uid; int st_flags; int st_mode; } ;
struct TYPE_10__ {void* symlink; int type; TYPE_1__* inode; } ;
typedef TYPE_2__ fsnode ;
struct TYPE_11__ {int needswap; } ;
typedef TYPE_3__ fsinfo_t ;
struct TYPE_12__ {size_t size; void* buf; } ;
typedef TYPE_4__ dirbuf_t ;
struct TYPE_9__ {struct stat st; int nlink; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t VAR_0 ;
 int FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (struct ufs1_dinode*,int ,int) ;
 int FUNC_5 () ;
 struct stat VAR_1 ;
 size_t FUNC_6 (void*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void *
FUNC_8(struct ufs1_dinode *VAR_2, dirbuf_t *VAR_3, fsnode *VAR_4,
   fsnode *VAR_5, fsinfo_t *VAR_6)
{
 size_t VAR_7;
 void *VAR_8;
 struct stat *VAR_9 = VAR_1.st_ino != 0 ? &VAR_1 : &VAR_4->inode->st;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->di_mode = VAR_4->inode->st.st_mode;
 VAR_2->di_nlink = VAR_4->inode->nlink;
 VAR_2->di_size = VAR_4->inode->st.st_size;



 VAR_2->di_gen = FUNC_5();
 VAR_2->di_uid = VAR_4->inode->st.st_uid;
 VAR_2->di_gid = VAR_4->inode->st.st_gid;

 VAR_2->di_atime = VAR_9->st_atime;
 VAR_2->di_mtime = VAR_9->st_mtime;
 VAR_2->di_ctime = VAR_9->st_ctime;







 VAR_8 = ((void*)0);
 if (VAR_4 == VAR_5) {
  VAR_8 = VAR_3->buf;
  VAR_2->di_size = VAR_3->size;
 } else if (FUNC_0(VAR_4->type) || FUNC_1(VAR_4->type)) {
  VAR_2->di_size = 0;
  VAR_2->di_rdev =
      FUNC_7(VAR_4->inode->st.st_rdev, VAR_6->needswap);
 } else if (FUNC_2(VAR_4->type)) {
  VAR_7 = FUNC_6(VAR_4->symlink);
  if (VAR_7 < VAR_0) {
   FUNC_3(VAR_2->di_db, VAR_4->symlink, VAR_7);
  } else
   VAR_8 = VAR_4->symlink;
  VAR_2->di_size = VAR_7;
 }
 return VAR_8;
}
