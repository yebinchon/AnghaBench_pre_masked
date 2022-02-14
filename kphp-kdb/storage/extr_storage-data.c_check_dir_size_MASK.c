
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct statvfs {scalar_t__ f_bavail; scalar_t__ f_bsize; scalar_t__ f_blocks; scalar_t__ f_frsize; } ;
struct TYPE_3__ {int last_statvfs_time; double disk_total_bytes; long long disk_free_bytes; int path; } ;
typedef TYPE_1__ storage_dir_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct statvfs*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ,...) ;

int FUNC_2 (storage_dir_t *VAR_2, double VAR_3, long long VAR_4) {
  if (!VAR_2->last_statvfs_time ||
       VAR_2->last_statvfs_time <= VAR_0 - 3600 ||
       VAR_3 * VAR_2->disk_total_bytes < (VAR_2->disk_total_bytes - VAR_2->disk_free_bytes) + VAR_4 + (VAR_0 - VAR_2->last_statvfs_time) * 200000000LL) {
    struct statvfs VAR_5;
    if (FUNC_0 (VAR_2->path, &VAR_5) < 0) {
      FUNC_1 (2, "statvfs (\"%s\") fail. %m", VAR_2->path);
      return 0;
    }
    VAR_1++;
    VAR_2->last_statvfs_time = VAR_0;
    VAR_2->disk_total_bytes = (long long) VAR_5.f_frsize * (long long) VAR_5.f_blocks;
    VAR_2->disk_free_bytes = (long long) VAR_5.f_bsize * (long long) VAR_5.f_bavail;
    FUNC_1 (4, "path: %s, last_statvfs_time: %d, disk_total_bytes: %lld, disk_free_bytes: %lld\n", VAR_2->path, VAR_2->last_statvfs_time, VAR_2->disk_total_bytes, VAR_2->disk_free_bytes);
    return (VAR_3 * VAR_2->disk_total_bytes >= (VAR_2->disk_total_bytes - VAR_2->disk_free_bytes) + VAR_4) ? 1 : 0;
  }
  return 1;
}
