
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 long long FUNC_0 (int ,long long) ;
 int FUNC_1 () ;
 char* VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4 (long long VAR_5, char **VAR_6) {
  FUNC_1 ();
  VAR_0 = 0;
  VAR_3 = VAR_1 = 0;
  VAR_4 = *VAR_6;
  VAR_2 = FUNC_2 ();
  if (!VAR_2 || *VAR_4) {
    FUNC_1 ();
    *VAR_6 = VAR_4;
    return -1;
  }
  if (FUNC_3 (VAR_2) < 0) {
    FUNC_1 ();
    return -1;
  }
  int VAR_7 = (VAR_5 == FUNC_0 (VAR_2, VAR_5)) ? 1 : 0;
  FUNC_1 ();
  return VAR_7;
}
