
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfs_file_info {int flags; long long file_size; } ;
struct TYPE_3__ {long long orig_file_size; } ;
typedef TYPE_1__ kfs_binlog_zip_header_t ;


 TYPE_1__* FUNC_0 (struct kfs_file_info*) ;

__attribute__((used)) static long long FUNC_1 (struct kfs_file_info *VAR_0) {
  if (VAR_0->flags & 16) {
    kfs_binlog_zip_header_t *VAR_1 = FUNC_0 (VAR_0);
    if (!VAR_1) {
      return -1;
    }
    return VAR_1->orig_file_size;
  }
  return VAR_0->file_size;
}
