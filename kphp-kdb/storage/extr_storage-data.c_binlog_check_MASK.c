
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int abs_filename; } ;
typedef TYPE_1__ storage_binlog_file_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_1 (char*,int ,int ) ;

int FUNC_2 (storage_binlog_file_t *VAR_1, storage_binlog_file_t *VAR_2) {
  if (VAR_1->size != VAR_2->size) {
    FUNC_1 ("%s and %s has different size\n", VAR_1->abs_filename, VAR_2->abs_filename);
  }
  if (VAR_1->size > VAR_2->size) {
    storage_binlog_file_t *VAR_3 = VAR_1; VAR_1 = VAR_2; VAR_2 = VAR_3;
  }
  int VAR_4 = VAR_0;
  if (VAR_4 > VAR_1->size) {
    VAR_4 = VAR_1->size;
  }

  int VAR_5 = FUNC_0 (VAR_1, VAR_2, 0, VAR_4);
  if (VAR_5 < 0) {
    FUNC_1 ("head 32Ki of '%s' and '%s' are differ.\n", VAR_1->abs_filename, VAR_2->abs_filename);
    return VAR_5;
  }

  if (VAR_1->size > VAR_0) {
    VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_1->size - VAR_4, VAR_4);
    if (VAR_5 < 0) {
      FUNC_1 ("tail 32Ki of '%s' and '%s' are differ.\n", VAR_1->abs_filename, VAR_2->abs_filename);
      return VAR_5;
    }
  }
  return 0;
}
