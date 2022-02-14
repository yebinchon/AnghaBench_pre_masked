
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ priority; } ;
typedef TYPE_1__ storage_binlog_file_t ;



__attribute__((used)) static storage_binlog_file_t *FUNC_0 (void **VAR_0, storage_binlog_file_t *VAR_1, storage_binlog_file_t *VAR_2) {
  if (VAR_1->priority < VAR_2->priority) {
    return VAR_1;
  }
  if (VAR_1->priority > VAR_2->priority) {
    return VAR_2;
  }
  return VAR_1;
}
