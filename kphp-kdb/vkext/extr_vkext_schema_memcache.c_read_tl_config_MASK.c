
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,long long) ;
 int FUNC_4 (int ,char*,char const*,long long) ;
 int FUNC_5 (char*) ;
 long long FUNC_6 (int,int ,int ) ;
 char* FUNC_7 (long long) ;
 int FUNC_8 (char const*,int ) ;
 long long FUNC_9 (int,char*,long long) ;
 int FUNC_10 () ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (char const*) ;

int FUNC_13 (const char *VAR_7) {
  int VAR_8 = FUNC_8 (VAR_7, VAR_1);

  if (VAR_8 < 0) { return -1; }
  long long VAR_9 = FUNC_6 (VAR_8, 0, VAR_2);
  if (VAR_9 < 0) { return -1; }
  if (VAR_9 > VAR_0) {
    return -1;
  }
  if (VAR_6 >= 2) {
    FUNC_4 (VAR_4, "File found. Name %s. size = %lld\n", VAR_7, VAR_9);
  }
  char *VAR_10 = FUNC_7 (VAR_9);
  FUNC_1 (FUNC_6 (VAR_8, 0, VAR_3) == 0);
  FUNC_1 (FUNC_9 (VAR_8, VAR_10, VAR_9) == VAR_9);
  FUNC_2 (VAR_8);
  FUNC_3 (VAR_10, VAR_9);
  int VAR_11 = FUNC_10 ();
  FUNC_5 (VAR_10);
  if (VAR_11 > 0) {
    VAR_5 = FUNC_12 (VAR_7);
    FUNC_0 (FUNC_11 (VAR_5));
  }

  return VAR_11;
}
