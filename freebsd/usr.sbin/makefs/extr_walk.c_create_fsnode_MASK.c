
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; int st_birthtimensec; int st_birthtime; int st_ctimensec; int st_mtimensec; int st_atimensec; int st_ctime; int st_mtime; int st_atime; } ;
struct TYPE_6__ {char const* root; int type; TYPE_1__* inode; void* name; void* path; } ;
typedef TYPE_2__ fsnode ;
struct TYPE_7__ {int st_birthtimensec; int st_birthtime; int st_ctimensec; int st_mtimensec; int st_atimensec; int st_ctime; int st_mtime; int st_atime; scalar_t__ st_ino; } ;
struct TYPE_5__ {int nlink; struct stat st; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (char const*) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static fsnode *
FUNC_2(const char *VAR_2, const char *VAR_3, const char *VAR_4,
    struct stat *VAR_5)
{
 fsnode *VAR_6;

 VAR_6 = FUNC_0(1, sizeof(*VAR_6));
 VAR_6->path = FUNC_1(VAR_3);
 VAR_6->name = FUNC_1(VAR_4);
 VAR_6->inode = FUNC_0(1, sizeof(*VAR_6->inode));
 VAR_6->root = VAR_2;
 VAR_6->type = VAR_5->st_mode & VAR_0;
 VAR_6->inode->nlink = 1;
 VAR_6->inode->st = *VAR_5;
 if (VAR_1.st_ino) {
  VAR_6->inode->st.st_atime = VAR_1.st_atime;
  VAR_6->inode->st.st_mtime = VAR_1.st_mtime;
  VAR_6->inode->st.st_ctime = VAR_1.st_ctime;
 }
 return (VAR_6);
}
