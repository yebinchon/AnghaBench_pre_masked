
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char const*,char*,...) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,char*,int) ;

int FUNC_7 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  int VAR_7, VAR_8;
  FUNC_5 (1, "delete \"%s\"\n", VAR_5);
  int VAR_9 = 0;
  long long VAR_10 = 0;
  char VAR_11, VAR_12;
  if (FUNC_4 (VAR_5, "itemswithhash%llx", &VAR_10) == 1) {
    VAR_1++;
    VAR_9 = FUNC_1 (VAR_10);
    VAR_2 += VAR_9;
  } else if (FUNC_4 (VAR_5, "item%d_%d ", &VAR_7, &VAR_8) == 2 && VAR_7 && VAR_8 > 0) {
    VAR_3++;
    FUNC_5 (1, "delete_item (%d,%d)\n", VAR_7, VAR_8);
    FUNC_5 (3, "delete: item_id=%lld\n", ((long long) VAR_8 << 32) + (unsigned) VAR_7);
    VAR_9 = FUNC_0 (((long long) VAR_8 << 32) + (unsigned) VAR_7);
  } else if (FUNC_4 (VAR_5, "item%d ", &VAR_8) == 1 && VAR_8 > 0) {
    VAR_3++;
    FUNC_5 (1, "delete_item (%d,%d)\n", 0, VAR_8);
    FUNC_5 (3, "delete: item_id=%lld\n", (long long) VAR_8);
    VAR_9 = FUNC_0 (VAR_8);
  } else if (FUNC_4 (VAR_5, "reset_all_%cate%c", &VAR_11, &VAR_12) == 2 && VAR_12 == 's') {
    int VAR_13 = FUNC_3 (VAR_11);
    if (VAR_13 >= 0 && VAR_13 < VAR_0) {
      VAR_3++;
      VAR_9 = FUNC_2 (VAR_13);
    }
  }
  if (VAR_9 > 0) {
    FUNC_6 (&VAR_4->Out, "DELETED\r\n", 9);
  } else {
    FUNC_6 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
  }
  return 0;
}
