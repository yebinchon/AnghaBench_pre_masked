
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int n; int filled; TYPE_1__* h; } ;
struct TYPE_6__ {long long key; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 long long FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,long long,int*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_2__ VAR_5 ;
 char* VAR_6 ;
 char* FUNC_7 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int,char*,int,int ) ;

void FUNC_9 (void) {
  VAR_7++;
  FUNC_8 (2, "rebuild_hashmap: old hashmap size = %d, Q_limit = %d\n", VAR_5.size, VAR_1);
  int VAR_9;
  int VAR_10 = VAR_5.n << 1;

  if (VAR_10 > VAR_0 + 10) {
    VAR_10 = VAR_0 + 10;
  }
  FUNC_4 (&VAR_5);
  if (!FUNC_6 (&VAR_5, VAR_10)) {
    FUNC_2 (VAR_8, "Not enough memory for allocate hash table for storing %d entries.\n", VAR_10);
    FUNC_1 (2);
  }
  for (VAR_9 = 1; VAR_9 <= VAR_4; VAR_9++) {
    long long VAR_11 = FUNC_3 (VAR_2[VAR_9]);
    if (VAR_11) {
      int VAR_12;
      int VAR_13 = FUNC_5 (&VAR_5, VAR_11, &VAR_12);
      if (VAR_13) {
        FUNC_2 (VAR_8, "log_cur_pos ()\t%s\n", FUNC_7 ());
        FUNC_2 (VAR_8, "last_search_query\t%s\n", VAR_6);
        FUNC_0 (!VAR_13);
      }
      VAR_5.h[VAR_12].key = VAR_11;
      VAR_5.h[VAR_12].value = VAR_9;
      VAR_5.filled++;
      VAR_3[VAR_9] = VAR_12;
    } else {
      VAR_3[VAR_9] = VAR_5.size;
    }
  }
}
