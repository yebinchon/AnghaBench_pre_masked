
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 void* VAR_6 ;
 int FUNC_1 (scalar_t__,int,void*) ;

void FUNC_2 (void) {
  int VAR_7 = VAR_0[VAR_3];
  VAR_6 = VAR_0[VAR_5];
  if (FUNC_0 (VAR_6) < 0 || VAR_7 <= 0 || !VAR_0[VAR_4]) {
    return;
  }
  FUNC_1 (VAR_1 + 0, VAR_7, VAR_0[VAR_4]);
  VAR_2++;
}
