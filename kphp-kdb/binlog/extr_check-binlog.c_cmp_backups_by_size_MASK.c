
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ orig_file_size; } ;
struct TYPE_4__ {TYPE_1__ S; } ;
typedef TYPE_2__ backup_file_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  backup_file_t *VAR_2 = *((backup_file_t **) VAR_0);
  backup_file_t *VAR_3 = *((backup_file_t **) VAR_1);
  if (VAR_2->S.orig_file_size > VAR_3->S.orig_file_size) {
    return -1;
  }
  if (VAR_2->S.orig_file_size < VAR_3->S.orig_file_size) {
    return 1;
  }
  return 0;
}
