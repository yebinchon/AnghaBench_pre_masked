
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* hnext; } ;
typedef TYPE_1__ backup_file_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (void) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < 10007; VAR_1++) {
    backup_file_t *VAR_2, *VAR_3;
    for (VAR_2 = VAR_0[VAR_1]; VAR_2; VAR_2 = VAR_3) {
      VAR_3 = VAR_2->hnext;
      FUNC_0 (VAR_2);
    }
    VAR_0[VAR_1] = 0;
  }
}
