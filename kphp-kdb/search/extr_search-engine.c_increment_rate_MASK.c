
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (long long,long long) ;
 int FUNC_1 (long long,long long) ;
 int FUNC_2 (long long,int,long long) ;
 int FUNC_3 (int*,long long,int) ;
 int FUNC_4 (char const) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char const*,char*,int*,...) ;
 int FUNC_7 (int,char*,long long,...) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9 (struct connection *VAR_1, const char *VAR_2, int VAR_3, long long VAR_4) {
  int VAR_5;
  long long VAR_6 = 0;
  int VAR_7, VAR_8, VAR_9 = 0, VAR_10;
  static char VAR_11[32];
  int VAR_12 = FUNC_4 (*VAR_2);

  FUNC_7 (4, "p = %d, *key=%c\n", VAR_12, *VAR_2);

  if (VAR_12 >= 0 && VAR_12 < VAR_0) {
    if (FUNC_6 (VAR_2+1, "ate%d_%d", &VAR_7, &VAR_8) == 2) {
      if (VAR_7 && VAR_8 > 0) {
        VAR_6 = (((long long) VAR_8) << 32) + (unsigned) VAR_7;
        VAR_9 = VAR_12+1;
      }
    } else if (FUNC_6 (VAR_2+1, "ate%d", &VAR_8) == 1) {
      if (VAR_8 > 0) {
        VAR_6 = VAR_8;
        VAR_9 = VAR_12+1;
      }
    }
  }

  FUNC_7 (3, "incr: item_id=%lld\n", (long long)VAR_6);

  if (VAR_9 > 0) {
    switch(VAR_9) {
      case 1:
        VAR_10 = FUNC_0(VAR_6, VAR_4);
        break;
      case 2:
        VAR_10 = FUNC_1(VAR_6, VAR_4);
        break;
      default:
        VAR_10 = FUNC_2 (VAR_6, VAR_12, VAR_4);
        break;
    }
    if (VAR_10) {
      if (!FUNC_3 (&VAR_5, VAR_6, VAR_12)) {
        return -1;
      }
      FUNC_8 (&VAR_1->Out, VAR_11, FUNC_5 (VAR_11, "%d\r\n", VAR_5));
      return 0;
    }
  }

  FUNC_8 (&VAR_1->Out, "NOT_FOUND\r\n", 11);
  return 0;
}
