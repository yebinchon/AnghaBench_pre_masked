
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int seq_hooks_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(tsdn_t *VAR_4, void *VAR_5) {
 if (VAR_1) {
  char *VAR_6 = (char *)&VAR_2[0];
  char *VAR_7 = (char *)&VAR_2[VAR_0];
  char *VAR_8 = (char *)VAR_5;
  FUNC_0(VAR_6 <= VAR_8 && VAR_8 < VAR_7
      && (VAR_8 - VAR_6) % sizeof(seq_hooks_t) == 0);
 }
 FUNC_2(VAR_4, &VAR_3);
 FUNC_1((seq_hooks_t *)VAR_5);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4, &VAR_3);
}
