
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cur; void* value64; } ;
typedef TYPE_1__ gh_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2 (gh_entry_t *VAR_7) {
  int *VAR_8 = VAR_7->cur;
  int VAR_9, VAR_10;
  if (VAR_3 || VAR_2) {
    VAR_9 = (VAR_8[1] ? VAR_8[1] : VAR_8[0]);
    VAR_10 = (VAR_0 & VAR_6 ? VAR_8[2] : VAR_9);
  } else if (VAR_4) {
    VAR_9 = VAR_8[0];
    VAR_10 = (VAR_0 & VAR_6 ? VAR_8[1] : VAR_9);
  } else if (VAR_1) {
    VAR_9 = VAR_8[0];
    VAR_10 = -VAR_8[2];

  } else {
    FUNC_0 (0);
  }
  if (VAR_0 & VAR_5) {

    VAR_7->value64 = FUNC_1 (-(VAR_10+1),-(VAR_9+1));
  } else {
    VAR_7->value64 = FUNC_1 (VAR_10, VAR_9);
  }
}
