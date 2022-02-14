
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef void* time_t ;
struct stat {scalar_t__ st_size; int st_gid; int st_uid; int st_ino; int st_dev; scalar_t__ st_mtime_nsec; scalar_t__ st_ctime_nsec; scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
struct p_timeval {scalar_t__ tv_usec; void* tv_sec; } ;
typedef void* int32_t ;
struct TYPE_11__ {scalar_t__ nanoseconds; void* seconds; } ;
struct TYPE_10__ {scalar_t__ nanoseconds; void* seconds; } ;
struct TYPE_12__ {scalar_t__ file_size; int gid; int uid; int ino; int dev; TYPE_2__ mtime; TYPE_1__ ctime; } ;
typedef TYPE_3__ git_index_entry ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char*,int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (int ,struct p_timeval*) ;
 int VAR_2 ;
 void* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(char *VAR_3[])
{
 char *VAR_4;
 struct stat VAR_5;
 git_buf VAR_6 = VAR_0;
 git_index_entry *VAR_7;
 struct p_timeval VAR_8[2];
 time_t VAR_9;
 size_t VAR_10;
 VAR_9 = FUNC_8(((void*)0));
 VAR_8[0].tv_sec = VAR_9 - 5;
 VAR_8[0].tv_usec = 0;
 VAR_8[1].tv_sec = VAR_9 - 5;
 VAR_8[1].tv_usec = 0;

 for (VAR_10 = 0, VAR_4 = VAR_3[VAR_10]; VAR_4; VAR_4 = VAR_3[++VAR_10]) {
  FUNC_2(&VAR_6);

  FUNC_0(VAR_7 = (git_index_entry *)
   FUNC_5(VAR_2, VAR_4, 0));

  FUNC_1(FUNC_4(&VAR_6, "%s/%s", VAR_1, VAR_4));
  FUNC_1(FUNC_7(VAR_6.ptr, VAR_8));
  FUNC_1(FUNC_6(VAR_6.ptr, &VAR_5));

  VAR_7->ctime.seconds = (int32_t)VAR_5.st_ctime;
  VAR_7->mtime.seconds = (int32_t)VAR_5.st_mtime;




  VAR_7->ctime.nanoseconds = 0;
  VAR_7->mtime.nanoseconds = 0;

  VAR_7->dev = VAR_5.st_dev;
  VAR_7->ino = VAR_5.st_ino;
  VAR_7->uid = VAR_5.st_uid;
  VAR_7->gid = VAR_5.st_gid;
  VAR_7->file_size = (uint32_t)VAR_5.st_size;
 }

 FUNC_3(&VAR_6);
}
