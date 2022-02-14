
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_entry {int res_bytes; int* data; } ;
struct friends_gather_extra {int query_type; int num; int raw; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int*,int,int,int ) ;
 int* VAR_2 ;
 int FUNC_2 (struct connection*,char const*,int,int,int ,int*,int) ;

int FUNC_3 (struct connection *VAR_3, const char *VAR_4, int VAR_5, void *VAR_6, struct gather_entry *VAR_7, int VAR_8) {
  int VAR_9, VAR_10;
  struct friends_gather_extra* VAR_11 = VAR_6;
  if (VAR_11->query_type == 1) {
    for (VAR_10 = 0; VAR_10 < VAR_11->num; VAR_10++) {
      VAR_2[VAR_10] = 0;
    }
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
      if (VAR_7[VAR_9].res_bytes == 4 * VAR_11->num) {
       for (VAR_10 = 0; VAR_10 < VAR_11->num; VAR_10++) {
          VAR_2[VAR_10] += VAR_7[VAR_9].data[VAR_10];
        }
      }
    }
    FUNC_2 (VAR_3, VAR_4, VAR_5, 0x7fffffff, -VAR_11->raw, VAR_2, VAR_11->num);
  } else if (VAR_11->query_type == 2) {
    int VAR_12 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
      if (VAR_7[VAR_9].res_bytes >= 4) {
       for (VAR_10 = 0; VAR_10 < VAR_7[VAR_9].data[0]; VAR_10++) {
          if (VAR_12 < VAR_0) {
            VAR_2[VAR_12++] = VAR_7[VAR_9].data[VAR_10 + 1];
         }
        }
      }
    }
    FUNC_1 (VAR_2, VAR_12, sizeof (int), VAR_1);
    FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_12, -VAR_11->raw, VAR_2, VAR_12);
  } else {
    FUNC_0 (0);
  }
  return 1;
}
