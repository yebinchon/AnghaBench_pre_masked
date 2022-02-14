
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long long,int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int,long long,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  if (VAR_1 > 2) {
    FUNC_2 (VAR_0, "add_del_bookmark: %d - %d - %d\n", VAR_3, VAR_4, VAR_5);
  }
  if (!FUNC_1 (VAR_3, VAR_4, VAR_5) || VAR_2 <= 0) {
    return 0;
  }
  long long VAR_7;
  FUNC_0 (VAR_7, VAR_3, VAR_4, VAR_5);
  FUNC_3 (VAR_2, VAR_7, VAR_6, 1);
  return 1;
}
