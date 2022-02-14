
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; scalar_t__ f_type; } ;
typedef TYPE_1__ uv_statfs_t ;
struct TYPE_6__ {TYPE_1__* ptr; int path; } ;
typedef TYPE_2__ uv_fs_t ;
struct statvfs {int dummy; } ;
struct statfs {int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; scalar_t__ f_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct statfs*) ;
 scalar_t__ FUNC_1 (int ,struct statvfs*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(uv_fs_t* VAR_2) {
  uv_statfs_t* VAR_3;





  struct statfs VAR_4;

  if (0 != FUNC_0(VAR_2->path, &VAR_4))

    return -1;

  VAR_3 = FUNC_2(sizeof(*VAR_3));
  if (VAR_3 == ((void*)0)) {
    VAR_1 = VAR_0;
    return -1;
  }




  VAR_3->f_type = VAR_4.f_type;

  VAR_3->f_bsize = VAR_4.f_bsize;
  VAR_3->f_blocks = VAR_4.f_blocks;
  VAR_3->f_bfree = VAR_4.f_bfree;
  VAR_3->f_bavail = VAR_4.f_bavail;
  VAR_3->f_files = VAR_4.f_files;
  VAR_3->f_ffree = VAR_4.f_ffree;
  VAR_2->ptr = VAR_3;
  return 0;
}
