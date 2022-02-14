
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3 (void) {
  int VAR_6, VAR_7 = 0;
  FUNC_0 (VAR_4 > 0 && VAR_4 <= VAR_0);
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    VAR_2[VAR_6] = VAR_7;
    VAR_7 = FUNC_1 (VAR_7, VAR_3);
  }
  VAR_2[VAR_6] = VAR_7;
  FUNC_0 (VAR_7 == VAR_1 + 1);
  if (VAR_5) {
    if (VAR_6 <= 2) {
      FUNC_2 (1, "only %d passes needed, ignoring temporary directory\n", VAR_6);
      VAR_5 = 0;
    }
  }
  return VAR_6;
}
