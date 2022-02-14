
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct metafile {int dummy; } ;
struct bookmark_user {int dummy; } ;
struct TYPE_8__ {int small_users; int large_users; int large_data_offset; } ;
typedef TYPE_1__ index_header ;
struct TYPE_10__ {int next; int prev; } ;
struct TYPE_9__ {scalar_t__ offset; scalar_t__ user_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_3 (int) ;

void FUNC_4 (index_header *VAR_10) {
  int VAR_11;
  FUNC_0 (sizeof (struct bookmark_user) == 8);
  VAR_1 = VAR_10->large_data_offset;

  VAR_7 = VAR_10->small_users;
  VAR_6 = FUNC_3 (sizeof (struct bookmark_user) * (VAR_7 + 1));
  FUNC_2 (VAR_0, VAR_6, sizeof (struct bookmark_user) * (VAR_7 + 1));

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
    FUNC_0 (VAR_6[VAR_11+1].offset > VAR_6[VAR_11].offset);
    FUNC_0 (VAR_6[VAR_11+1].user_id > VAR_6[VAR_11].user_id || VAR_11 == VAR_7 - 1);
  }
  FUNC_0 (!VAR_6[0].offset);

  VAR_4 = VAR_10->large_users;
  VAR_3 = FUNC_3 (sizeof (struct bookmark_user) * (VAR_4 + 1));
  FUNC_2 (VAR_0, VAR_3, sizeof (struct bookmark_user) * (VAR_4 + 1));

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
    FUNC_0 (VAR_3[VAR_11+1].offset > VAR_3[VAR_11].offset);
    FUNC_0 (VAR_3[VAR_11+1].user_id > VAR_3[VAR_11].user_id || VAR_11 == VAR_4 - 1);
  }
  FUNC_0 (!VAR_3[0].offset);


  VAR_5 = FUNC_3 (VAR_6[VAR_7].offset * sizeof (long long));
  FUNC_2 (VAR_0, VAR_5, VAR_6[VAR_7].offset * sizeof (long long));

  VAR_2 = FUNC_3 (sizeof (struct metafile) * (VAR_4 + 1));
  if (VAR_9) {
    FUNC_1 (VAR_8, "small_users = %d, large_users = %d\n", VAR_7, VAR_4);
  }
  VAR_2[VAR_4].next = VAR_4;
  VAR_2[VAR_4].prev = VAR_4;
}
