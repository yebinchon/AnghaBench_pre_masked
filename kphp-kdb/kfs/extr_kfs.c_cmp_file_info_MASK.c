
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfs_file_info {scalar_t__ min_log_pos; int filename; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1 (const struct kfs_file_info *VAR_0, const struct kfs_file_info *VAR_1) {
  if (VAR_0->min_log_pos < VAR_1->min_log_pos) {
    return -1;
  } else if (VAR_0->min_log_pos > VAR_1->min_log_pos) {
    return 1;
  } else {
    return FUNC_0 (VAR_0->filename, VAR_1->filename);
  }
}
