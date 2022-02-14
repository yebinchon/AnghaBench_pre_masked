
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfs_file_info {int flags; long long file_size; int kfs_headers; scalar_t__ start; } ;
struct TYPE_3__ {long long orig_file_size; } ;
typedef TYPE_1__ kfs_binlog_zip_header_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline long long FUNC_1 (struct kfs_file_info *VAR_0) {
  if (!(VAR_0->flags & 16)) {
    return VAR_0->file_size - 4096 * VAR_0->kfs_headers;
  }
  kfs_binlog_zip_header_t *VAR_1 = (kfs_binlog_zip_header_t *) VAR_0->start;
  FUNC_0 (VAR_1);
  return VAR_1->orig_file_size;
}
