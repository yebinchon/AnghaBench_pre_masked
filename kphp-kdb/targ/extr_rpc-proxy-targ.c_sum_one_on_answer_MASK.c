
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather {void* extra; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1 (struct gather *VAR_1, int VAR_2) {
  if (FUNC_0 () != VAR_0) {
    return;
  }
  int VAR_3 = FUNC_0 ();
  VAR_1->extra = (void *)(VAR_3 + (long)VAR_1->extra);
}
