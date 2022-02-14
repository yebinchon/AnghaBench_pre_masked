
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hash_cnt; scalar_t__ list_cnt; scalar_t__ offset; scalar_t__ file_no; int user_id; } ;
typedef TYPE_1__ userlist_entry_t ;
typedef int user_header_t ;
struct TYPE_6__ {scalar_t__ hash_cnt; scalar_t__ list_cnt; int user_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__** VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_1 (void) {
  userlist_entry_t *VAR_14 = VAR_2 + VAR_1;
  FUNC_0 (VAR_1 < VAR_0);
  if (VAR_4.hash_cnt <= 0) { return; }

  VAR_14->user_id = VAR_4.user_id;
  VAR_14->hash_cnt = VAR_4.hash_cnt;
  VAR_14->list_cnt = VAR_4.list_cnt;
  VAR_14->file_no = 0;
  VAR_14->offset = VAR_13 + sizeof(user_header_t);
  VAR_3[VAR_1++] = VAR_14;

  VAR_12 += VAR_5;
  VAR_5 = 0;
  VAR_10 += VAR_4.list_cnt;
  if (VAR_4.list_cnt > VAR_6) { VAR_6 = VAR_4.list_cnt; VAR_7 = VAR_4.user_id; }
  VAR_11 += VAR_4.hash_cnt;
  if (VAR_4.hash_cnt > VAR_8) { VAR_8 = VAR_4.hash_cnt; VAR_9 = VAR_4.user_id; }

}
