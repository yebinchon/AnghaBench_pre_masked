
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ priority; scalar_t__ dir_id; } ;
typedef TYPE_1__ storage_binlog_file_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const storage_binlog_file_t *VAR_2 = *(const storage_binlog_file_t **) VAR_0;
  const storage_binlog_file_t *VAR_3 = *(const storage_binlog_file_t **) VAR_1;
  if (VAR_2->size > VAR_3->size) {
    return -1;
  }
  if (VAR_2->size < VAR_3->size) {
    return 1;
  }
  if (VAR_2->priority < VAR_3->priority) {
    return -1;
  }
  if (VAR_2->priority > VAR_3->priority) {
    return 1;
  }
  if (VAR_2->dir_id < VAR_3->dir_id) {
    return -1;
  }
  if (VAR_2->dir_id > VAR_3->dir_id) {
    return 1;
  }
  return 0;
}
