
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_info {int flags; scalar_t__ orig_file_size; int fsize; int fd; scalar_t__ head_data; scalar_t__ filename; } ;
struct TYPE_2__ {scalar_t__ last36_bytes; scalar_t__ first36_bytes; } ;
typedef TYPE_1__ kfs_binlog_zip_header_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int const) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5 (struct file_info *VAR_3, struct file_info *VAR_4) {
  FUNC_0 (!(VAR_3->flags & VAR_1) && (VAR_4->flags & VAR_1));
  int VAR_5;
  const int VAR_6 = FUNC_4 (VAR_3->filename), VAR_7 = FUNC_4 (VAR_4->filename);
  if (VAR_7 != VAR_6 + 14 || FUNC_2 (VAR_3->filename, VAR_4->filename, VAR_6) || VAR_3->orig_file_size != VAR_4->orig_file_size) {
    return 0;
  }

  kfs_binlog_zip_header_t *VAR_8 = (kfs_binlog_zip_header_t *) VAR_4->head_data;
  if (FUNC_2 (VAR_3->head_data, VAR_8->first36_bytes, 36)) {
    return 0;
  }

  FUNC_0 (FUNC_1 (VAR_3->fd, VAR_3->fsize - 36, VAR_2) == VAR_3->fsize - 36);
  VAR_5 = FUNC_3 (VAR_3->fd, VAR_0, 36);
  if (VAR_5 != 36 || FUNC_2 (VAR_0, VAR_8->last36_bytes, 36)) {
    return 0;
  }

  return 1;
}
