
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; int rates; int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct item** VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3 (void) {
  int VAR_7, VAR_8 = 0;
  struct item *VAR_9;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    VAR_9 = VAR_2[VAR_7];
    if (VAR_9) {
      if (!(VAR_9->extra & VAR_0)) {
        VAR_2[VAR_8++] = VAR_9;
      } else {
        FUNC_0 (!VAR_9->str && !VAR_9->rates);
      }
    }
  }
  VAR_5 = VAR_8;
  if (VAR_6 >= 1) {
    FUNC_1 (VAR_4, "found %d items. Deleted %d items.\n", VAR_5, VAR_3);
  }
  VAR_3 = 0;
  FUNC_2 (0, VAR_8-1);

}
