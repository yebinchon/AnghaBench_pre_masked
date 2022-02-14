
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (size_t,int ,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (int ,int,char*,char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_6 (int VAR_7) {
  FUNC_0 (0 <= VAR_7 && VAR_7 < VAR_3 && VAR_0 != ((void*)0));

  if (VAR_4[VAR_1] != -1) {
    FUNC_1 (VAR_1);
  }

  int VAR_8 = VAR_7;

  if (VAR_6 > 0) {
    FUNC_4 (VAR_5, "\nSwitching to database dump %d, memory_used = %d\n", VAR_8, FUNC_2());
  }

  FUNC_5 (VAR_2, 100, "%s%03d.dump", VAR_0, VAR_8);
  return FUNC_3 (VAR_1, VAR_2, -1) >= 0;
}
