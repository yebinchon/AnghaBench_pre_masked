
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* filename; struct TYPE_5__* next; } ;
typedef TYPE_1__ backup_file_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3 (backup_file_t *VAR_0) {
  FUNC_0 (VAR_0 && VAR_0->filename);
  if (VAR_0->next) {
    FUNC_3 (VAR_0->next);
    VAR_0->next = 0;
  }
  FUNC_2 (VAR_0->filename, FUNC_1 (VAR_0->filename) + 1);
  FUNC_2 (VAR_0, sizeof (*VAR_0));
}
