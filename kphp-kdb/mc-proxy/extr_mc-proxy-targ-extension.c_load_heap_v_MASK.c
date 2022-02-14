
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cur; int value64; } ;
typedef TYPE_1__ gh_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2 (gh_entry_t *VAR_5) {
  if (VAR_4 & VAR_3) {
    int *VAR_6 = VAR_5->cur;
    int VAR_7 ;
    VAR_7 = VAR_6[0];





    if (VAR_4 & VAR_1) {

      VAR_5->value64 = VAR_7;


    } else {
      VAR_5->value64 = -VAR_7;

    }
  } else {
    FUNC_0 (VAR_4 & VAR_2);
    int *VAR_8 = VAR_5->cur;
    int VAR_9, VAR_10;
    VAR_9 = VAR_8[0];
    VAR_10 = (VAR_4 & VAR_0) ? VAR_8[1] : VAR_9;

    if (VAR_4 & VAR_1) {

      VAR_5->value64 = FUNC_1 (-(VAR_10+1),-(VAR_9+1));
    } else {
      VAR_5->value64 = FUNC_1 (VAR_10, VAR_9);
    }
  }
}
