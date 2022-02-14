
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (int) ;
 int VAR_7 ;

void FUNC_4 (void) {
  int VAR_8 = VAR_0[VAR_5];
  int VAR_9 = VAR_0[VAR_4];
  int VAR_10 = VAR_0[VAR_2];
  int VAR_11 = VAR_0[VAR_3];
  if (VAR_9 <= 0 || VAR_8 <= 0) {

    return;
  }
  if (!FUNC_0 (VAR_9)) {
    return;
  }
  if (VAR_11 != -1 && VAR_11 < VAR_6 - 10) {
    FUNC_1 (VAR_7, "date goes back by %d seconds\n", VAR_6 - VAR_11);
  } else if (VAR_11 > VAR_6) {
    FUNC_3 (VAR_11);
    VAR_6 = VAR_11;
  }
  FUNC_2 (VAR_9, -VAR_8, VAR_10, 0);
  VAR_1++;
}
