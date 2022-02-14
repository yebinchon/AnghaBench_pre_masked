
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (struct connection*,char const*,int,int,int,int ,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int*) ;
 int VAR_4 ;
 int FUNC_5 (char const*,char**,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6 (struct connection *VAR_6, const char *VAR_7, int VAR_8, int VAR_9) {
  int VAR_10;
  int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0xffffffff;
  char *VAR_14;


  if (*VAR_7 == '%') {
    VAR_12 = 1;
  }

  if ((FUNC_4 (VAR_7+VAR_12, "raw_user_comm_bookmarks%n", &VAR_11) >= 0) && VAR_11 > 0) {
    VAR_11 += VAR_12;
    VAR_14 = 0;
    VAR_10 = FUNC_5 (VAR_7+VAR_11, &VAR_14, 10);
    if (VAR_14 < VAR_7 + VAR_8 && *VAR_14 == ',') {
      VAR_14 ++;
      VAR_13 = FUNC_5 (VAR_14, &VAR_14, 10);
    }

    VAR_2 = FUNC_2 (VAR_10, VAR_13, VAR_1, VAR_0 / 3);
    if (VAR_5 >= 2) {
      FUNC_1 (VAR_4, "QL = %d, bookmarks_size = %d\n", VAR_2, VAR_3);
    }
    if (VAR_2 < 0) {
      return -2;
    }
    FUNC_0 (VAR_2 * 3 <= VAR_0);
    FUNC_3 (VAR_6, VAR_7 - VAR_9, VAR_8 + VAR_9, 0x7fffffff, -VAR_12, VAR_1, VAR_2 * 3);
  }
  return 0;
}
