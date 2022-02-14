
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 struct lev_start* FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (int,struct lev_start*,int) ;

void FUNC_8 (const char *VAR_5) {
  char VAR_6[VAR_3];
  FUNC_0 (FUNC_6 (VAR_6, VAR_3, "%s.bin", VAR_5) < VAR_3);
  int VAR_7;
  struct lev_start *VAR_8 = FUNC_1 (VAR_4, &VAR_7);
  int VAR_9 = FUNC_5 (VAR_6, VAR_0 | VAR_2 | VAR_1, 0660);
  if (VAR_9 < 0) {
    FUNC_4 ("open (%s, O_CREAT | O_WRONLY | O_EXCL, 0660) failed. %m\n", VAR_6);
    FUNC_0 (VAR_9 >= 0);
  }
  FUNC_0 (FUNC_7 (VAR_9, VAR_8, VAR_7) == VAR_7);
  FUNC_0 (FUNC_3 (VAR_9) >= 0);
  FUNC_0 (FUNC_2 (VAR_9) >= 0);
}
