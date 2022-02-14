
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* key; int key_len; struct TYPE_5__* next_time; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,char*,TYPE_1__*,char*,int) ;
 int FUNC_4 () ;
 size_t VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,char*,int) ;

void FUNC_6 (int VAR_7) {
  FUNC_5 (4, "free_by_time: mx = %d\n", VAR_7);
  int VAR_8 = FUNC_0 (FUNC_4()),
      VAR_9 = VAR_5[VAR_3];

  while (VAR_8 - VAR_3 > VAR_0 || VAR_3 - VAR_8 > VAR_1 - VAR_0 ||
         (VAR_7-- && VAR_3 != VAR_8)) {
    hash_entry_t *VAR_10 = &VAR_2[VAR_9];
    FUNC_1 (VAR_10->next_time);
    if (VAR_10->next_time != VAR_10) {
      if (VAR_6 >= 4) {
        FUNC_3(VAR_4, "del entry %p by time(key = %s) gap = %d\n", VAR_10->next_time, VAR_10->next_time->key, VAR_8 - VAR_3);
      }
      FUNC_2 (VAR_10->next_time->key, VAR_10->next_time->key_len);
    } else {
      if (++VAR_3 == VAR_1) {
        VAR_3 = 0;
      }
      VAR_9 = VAR_5[VAR_3];
    }
  }
}
