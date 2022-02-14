
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int binlog_prefix_len; int filename; } ;
typedef TYPE_1__ backup_file_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static backup_file_t *FUNC_2 (char *VAR_0, int VAR_1) {

  backup_file_t *VAR_2 = FUNC_0 (sizeof (backup_file_t));
  VAR_2->filename = FUNC_1 (VAR_0);
  VAR_2->binlog_prefix_len = VAR_1;
  return VAR_2;
}
