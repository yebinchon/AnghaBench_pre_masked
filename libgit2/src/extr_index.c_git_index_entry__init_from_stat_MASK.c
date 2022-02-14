
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct stat {int st_mode; scalar_t__ st_size; int st_gid; int st_uid; int st_ino; int st_rdev; int st_ctime_nsec; int st_mtime_nsec; scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
typedef void* int32_t ;
struct TYPE_6__ {int nanoseconds; void* seconds; } ;
struct TYPE_5__ {int nanoseconds; void* seconds; } ;
struct TYPE_7__ {scalar_t__ file_size; int gid; int uid; int mode; int ino; int dev; TYPE_2__ ctime; TYPE_1__ mtime; } ;
typedef TYPE_3__ git_index_entry ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(
 git_index_entry *VAR_0, struct stat *VAR_1, bool VAR_2)
{
 VAR_0->ctime.seconds = (int32_t)VAR_1->st_ctime;
 VAR_0->mtime.seconds = (int32_t)VAR_1->st_mtime;




 VAR_0->dev = VAR_1->st_rdev;
 VAR_0->ino = VAR_1->st_ino;
 VAR_0->mode = (!VAR_2 && FUNC_0(VAR_1->st_mode)) ?
  FUNC_1(0666) : FUNC_1(VAR_1->st_mode);
 VAR_0->uid = VAR_1->st_uid;
 VAR_0->gid = VAR_1->st_gid;
 VAR_0->file_size = (uint32_t)VAR_1->st_size;
}
