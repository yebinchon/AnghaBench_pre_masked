
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather {int* extra; scalar_t__ not_sent_num; scalar_t__ timeouted_num; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct gather*) ;
 scalar_t__ FUNC_2 (struct gather*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void FUNC_5 (struct gather *VAR_1) {
  int *VAR_2 = VAR_1->extra;
  if (FUNC_2 (VAR_1) >= 0) {
    VAR_2[2] += VAR_1->timeouted_num + VAR_1->not_sent_num;
    FUNC_4 (VAR_0);
    FUNC_4 (VAR_2[0]);
    FUNC_4 (VAR_2[1]);
    FUNC_4 (VAR_2[2]);
    FUNC_3 ();
  }
  FUNC_0 (VAR_2);
  FUNC_1 (VAR_1);
}
