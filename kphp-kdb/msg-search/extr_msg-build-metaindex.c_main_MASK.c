
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int userlist_entry_t ;
struct TYPE_6__ {scalar_t__ magic; int hash_cnt; int list_cnt; scalar_t__ user_id; } ;
typedef TYPE_1__ user_header_t ;
struct TYPE_7__ {int hash_cnt; int list_cnt; scalar_t__ offset; scalar_t__ file_no; scalar_t__ user_id; } ;


 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_2__** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int VAR_13 ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (int,TYPE_2__*,size_t) ;

int FUNC_6 (int VAR_14, const char *VAR_15[]) {
  user_header_t *VAR_16;
  int VAR_17;
  FUNC_0 (VAR_14 == 2);
  VAR_11 = FUNC_3 (VAR_15[1], VAR_5);
  FUNC_0 (VAR_11 >= 0);
  VAR_4 = 0;
  do {
    if (VAR_10 + sizeof(user_header_t) > VAR_12 + VAR_13) {
      FUNC_0 (FUNC_1 (VAR_11, VAR_10, VAR_8) == VAR_10);
      VAR_13 = FUNC_4 (VAR_11, VAR_9, VAR_7);
      FUNC_0 (VAR_13 >= 0);
      VAR_12 = VAR_10;

      if (!VAR_13) break;
      FUNC_0 (VAR_13 >= sizeof(user_header_t));
    }

    VAR_16 = (user_header_t *) &VAR_9[VAR_10 - VAR_12];

    FUNC_0 (VAR_16->magic == VAR_2);

    FUNC_0 ((unsigned long) VAR_16->user_id < (1L << 31) && (unsigned long) VAR_16->hash_cnt < (1L << 24) && (unsigned long) VAR_16->list_cnt < (1L << 26));
    VAR_10 += sizeof (user_header_t);
    if (VAR_16->user_id && (unsigned long) VAR_16->user_id < (1L << 26)) {
      VAR_0[VAR_4].user_id = VAR_16->user_id;
      VAR_0[VAR_4].hash_cnt = VAR_16->hash_cnt;
      VAR_0[VAR_4].list_cnt = VAR_16->list_cnt;
      VAR_0[VAR_4].file_no = 0;
      VAR_0[VAR_4].offset = VAR_10;
      VAR_6[VAR_4] = &VAR_0[VAR_4];
      VAR_4++;
    }
    VAR_10 += VAR_16->hash_cnt * 16 + VAR_16->list_cnt * 4;
    FUNC_0 (VAR_4 <= VAR_3);
  } while (1);
  FUNC_2 (0, VAR_4-1);
  for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) VAR_1[VAR_17] = *VAR_6[VAR_17];
  VAR_17 = FUNC_5 (1, VAR_1, VAR_4 * sizeof(userlist_entry_t));
  FUNC_0 (VAR_17 == VAR_4 * sizeof(userlist_entry_t));
  return 0;
}
