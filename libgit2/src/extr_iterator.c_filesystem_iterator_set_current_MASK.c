
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef void* int32_t ;
struct TYPE_12__ {scalar_t__ st_size; int st_gid; int st_uid; int st_mode; int st_ino; int st_dev; scalar_t__ st_mtime_nsec; scalar_t__ st_ctime_nsec; scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
struct TYPE_15__ {int path; int id; TYPE_3__ st; } ;
typedef TYPE_6__ filesystem_iterator_entry ;
struct TYPE_11__ {scalar_t__ nanoseconds; void* seconds; } ;
struct TYPE_10__ {scalar_t__ nanoseconds; void* seconds; } ;
struct TYPE_14__ {int path; int id; scalar_t__ file_size; int gid; int uid; int mode; int ino; int dev; TYPE_2__ mtime; TYPE_1__ ctime; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_16__ {int current_is_ignored; TYPE_5__ entry; TYPE_4__ base; } ;
typedef TYPE_7__ filesystem_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(
 filesystem_iterator *VAR_2,
 filesystem_iterator_entry *VAR_3)
{







 VAR_2->entry.ctime.seconds = (int32_t)VAR_3->st.st_ctime;
 VAR_2->entry.mtime.seconds = (int32_t)VAR_3->st.st_mtime;





 VAR_2->entry.ctime.nanoseconds = 0;
 VAR_2->entry.mtime.nanoseconds = 0;


 VAR_2->entry.dev = VAR_3->st.st_dev;
 VAR_2->entry.ino = VAR_3->st.st_ino;
 VAR_2->entry.mode = FUNC_0(VAR_3->st.st_mode);
 VAR_2->entry.uid = VAR_3->st.st_uid;
 VAR_2->entry.gid = VAR_3->st.st_gid;
 VAR_2->entry.file_size = (uint32_t)VAR_3->st.st_size;

 if (VAR_2->base.flags & VAR_1)
  FUNC_1(&VAR_2->entry.id, &VAR_3->id);

 VAR_2->entry.path = VAR_3->path;

 VAR_2->current_is_ignored = VAR_0;
}
