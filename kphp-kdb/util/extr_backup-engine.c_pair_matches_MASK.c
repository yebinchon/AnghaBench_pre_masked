
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {scalar_t__ fsize; scalar_t__ head_crc32; int tail_data; int fd; int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5 (struct file_info *VAR_3, struct file_info *VAR_4) {
  int VAR_5 = FUNC_4 (VAR_3->filename), VAR_6 = FUNC_4 (VAR_4->filename), VAR_7;
  if (VAR_6 != VAR_5 + 11 || FUNC_2 (VAR_3->filename, VAR_4->filename, VAR_5) || VAR_3->fsize < VAR_4->fsize) {
    return 0;
  }

  if (VAR_3->head_crc32 != VAR_4->head_crc32) {
    return 0;
  }

  FUNC_0 (FUNC_1 (VAR_3->fd, VAR_4->fsize - VAR_0, VAR_2) == VAR_4->fsize - VAR_0);
  VAR_7 = FUNC_3 (VAR_3->fd, VAR_1, VAR_0);
  if (VAR_7 != VAR_0) {
    return 0;
  }
  return !FUNC_2 (VAR_1, VAR_4->tail_data, VAR_0);
}
