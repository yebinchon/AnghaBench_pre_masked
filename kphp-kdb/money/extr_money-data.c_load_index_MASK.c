
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* kfs_file_handle_t ;
struct TYPE_6__ {TYPE_1__* info; } ;
struct TYPE_5__ {int filename; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2 (kfs_file_handle_t VAR_0) {
  FUNC_0 (VAR_0);
  FUNC_1 ("fatal: cannot load index %s\n", VAR_0->info->filename);
  return 7;
}
