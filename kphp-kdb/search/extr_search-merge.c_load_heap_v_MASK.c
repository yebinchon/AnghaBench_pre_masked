
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cur; int x; int value; } ;
typedef TYPE_1__ gh_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0 (gh_entry_t *VAR_3) {
  int *VAR_4 = VAR_3->cur;
  int VAR_5 = (VAR_4[1] ? VAR_4[1] : VAR_4[0]);
  int VAR_6 = (VAR_0 & VAR_2 ? VAR_4[2] : VAR_5);
  if (VAR_0 & VAR_1) {
    VAR_3->x = -VAR_5;
    VAR_3->value = -VAR_6;
  } else {
    VAR_3->x = VAR_5;
    VAR_3->value = VAR_6;
  }
}
