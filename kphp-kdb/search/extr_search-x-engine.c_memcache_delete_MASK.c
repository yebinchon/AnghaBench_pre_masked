
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*,char*,int*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*,long long,...) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7;

  if (VAR_2 > 0) {
    FUNC_1 (VAR_1, "delete \"%s\"\n", VAR_4);
  }

  int VAR_8 = 0;

  switch (*VAR_4) {
  case 'i':
    if (FUNC_2 (VAR_4, "item%d_%d ", &VAR_6, &VAR_7) == 2 && VAR_6 && VAR_7 > 0) {
      VAR_0++;
      if (VAR_2 >= 1) {
       FUNC_1 (VAR_1, "delete_item (%d,%d)\n", VAR_6, VAR_7);
      }

      FUNC_3 (3, "delete: item_id=%lld\n", ((long long) VAR_7 << 32) + (unsigned) VAR_6);

      VAR_8 = FUNC_0 (((long long) VAR_7 << 32) + (unsigned) VAR_6);
    } else if (FUNC_2 (VAR_4, "item%d ", &VAR_7) == 1 && VAR_7 > 0) {
      VAR_0++;
      FUNC_3 (1, "delete_item (%d,%d)\n", 0, VAR_7);
      FUNC_3 (3, "delete: item_id=%lld\n", (long long)VAR_7);

      VAR_8 = FUNC_0 (VAR_7);
    }
    break;
  }
  if (VAR_8 > 0) {
    FUNC_4 (&VAR_3->Out, "DELETED\r\n", 9);
  } else {
    FUNC_4 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
  }

  return 0;
}
