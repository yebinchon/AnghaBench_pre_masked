
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* F; } ;
struct TYPE_10__ {TYPE_3__ S; int rotate_from; int rotate_to; } ;
typedef TYPE_4__ file_t ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_7__ {int filename; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2 (file_t *VAR_0, file_t *VAR_1) {
  if (FUNC_1 (&VAR_0->rotate_to, &VAR_1->rotate_from) <= 0) {
    FUNC_0 ("'%s' and '%s' have unconsistent LEV_ROTATE_TO and LEV_ROTATE_FROM", VAR_0->S.F->info->filename, VAR_1->S.F->info->filename);
    return -1;
  }
  return 1;
}
