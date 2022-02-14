
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int,int,int*,int) ;
 int FUNC_4 (int,int,int,int,int) ;
 int FUNC_5 (struct connection*,char const*,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (char const*,char*,int*,int*,...) ;
 int VAR_6 ;
 int FUNC_7 (char const*,char**,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8 (struct connection *VAR_8, const char *VAR_9, int VAR_10, int VAR_11) {
  int VAR_12;
  int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0xffffffff;
  char *VAR_18;


  if (*VAR_9 == '%') {
    VAR_16 = 1;
  }

  if ((FUNC_6 (VAR_9+VAR_16, "raw_user_comm_updates[%d,%d]:%n", &VAR_13, &VAR_14, &VAR_15) >= 2 ||
       FUNC_6 (VAR_9+VAR_16, "raw_user_comm_updates%n%d", &VAR_15, &VAR_12) >= 1) && VAR_15 > 0) {
    VAR_15 += VAR_16;
    VAR_18 = 0;
    VAR_12 = FUNC_7 (VAR_9+VAR_15, &VAR_18, 10);
    if (VAR_18 < VAR_9 + VAR_10 && *VAR_18 == ',') {
      VAR_18 ++;
      VAR_17 = FUNC_7 (VAR_18, &VAR_18, 10);
    }

    VAR_2 = FUNC_3 (VAR_12, VAR_17, VAR_1, VAR_0 / 3);
    if (VAR_7 >= 2) {
      FUNC_2 (VAR_6, "QL = %d, bookmarks_size = %d\n", VAR_2, VAR_5);
    }
    if (VAR_2 < 0) {
      return -2;
    }

    FUNC_1 ();
    int VAR_19, VAR_20 = 0;
    VAR_2 *= 3;
    FUNC_0 (VAR_2 <= VAR_0);
    for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19 += 3) {
      int VAR_21 = FUNC_4 (VAR_1[VAR_19], VAR_1[VAR_19+1], VAR_1[VAR_19+2], VAR_13, VAR_14);
      if (VAR_7 > 2) {
        FUNC_2 (VAR_6, "prepare_raw_comm_updates(%d_%d_%d) = %d\n", VAR_1[VAR_19], VAR_1[VAR_19+1], VAR_1[VAR_19+2], VAR_21);
      }
      if (VAR_21 > VAR_20) {
        VAR_20 = VAR_21;
      }
    }
    if (VAR_20 >= 0) {
      return FUNC_5 (VAR_8, VAR_9 - VAR_11, VAR_10 + VAR_11, 0x7fffffff, -VAR_16, VAR_3, VAR_4 - VAR_3);
    }
  }
  return 0;
}
