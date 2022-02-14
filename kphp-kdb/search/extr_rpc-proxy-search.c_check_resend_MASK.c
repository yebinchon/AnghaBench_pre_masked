
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct search_extra {int sent_limit; double limit; } ;
struct gather {int tot_num; TYPE_1__* List; struct search_extra* extra; } ;
struct TYPE_2__ {int bytes; int* data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gather*,int) ;
 int FUNC_1 (int,char*,int,...) ;

int FUNC_2 (struct gather *VAR_1) {
  int VAR_2;
  struct search_extra *VAR_3 = VAR_1->extra;
  int VAR_4 = 0;
  int VAR_5 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1->tot_num; VAR_2++) if (VAR_1->List[VAR_2].bytes >= 16 && VAR_1->List[VAR_2].data[0] == VAR_0) {
    int VAR_6 = VAR_1->List[VAR_2].data[2];
    int VAR_7 = VAR_1->List[VAR_2].data[3];
    if (VAR_7 == VAR_3->sent_limit && VAR_6 > VAR_7) {
      VAR_5 ++;
    }
    VAR_4 += VAR_7;
  }
  FUNC_1 (3, "total_sum = %d, limit = %d, count = %d, tot_num = %d\n", VAR_4, VAR_3->limit, VAR_5, VAR_1->tot_num);
  if (VAR_4 < 1.5 * VAR_3->limit && VAR_5 < 0.1 * VAR_1->tot_num) {
    int VAR_8 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1->tot_num; VAR_2++) if (VAR_1->List[VAR_2].bytes >= 16 && VAR_1->List[VAR_2].data[0] == VAR_0) {
      int VAR_9 = VAR_1->List[VAR_2].data[2];
      int VAR_10 = VAR_1->List[VAR_2].data[3];
      if (VAR_10 == VAR_3->sent_limit && VAR_9 > VAR_10) {
        FUNC_1 (4, "Resending #%d\n", VAR_2);
        VAR_8 += FUNC_0 (VAR_1, VAR_2);
      }
    }
    FUNC_1 (4, "result = %d\n", VAR_8);
    return VAR_8;
  } else {
    return 0;
  }
}
