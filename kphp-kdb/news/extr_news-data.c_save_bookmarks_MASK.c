
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bookmark_user {int dummy; } ;
struct TYPE_4__ {int small_data_offset; int large_data_offset; int small_users; int large_users; } ;
typedef TYPE_1__ index_header ;
struct TYPE_5__ {int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,int) ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int) ;

void FUNC_12 (index_header *VAR_11) {
  FUNC_3 ();
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 0;
  if (VAR_7 > VAR_0 && VAR_6) {
    FUNC_1 (VAR_6 < 0 && VAR_5);
    if (VAR_10 > 0) {
      FUNC_5 (VAR_8, "sorting %d bookmarks...\n", -VAR_6);
    }
    FUNC_9 (VAR_5 + VAR_6, - VAR_6 - 1);
    if (VAR_10 > 0) {
      FUNC_5 (VAR_8, "building bookmark lists...\n");
    }
    FUNC_2 ();
  }
  if (VAR_10 > 0) {
    FUNC_5 (VAR_8, "writing bookmark lists...\n");
  }
  FUNC_8 ();
  int VAR_16 = 0;
  while (FUNC_0 () >= 0) {
    int VAR_17 = VAR_9.value;
    int VAR_18 = FUNC_6 (VAR_17, -1);
    FUNC_1 (VAR_18 >= 0);
    VAR_16++;
    if (VAR_10 >= 4) {
      FUNC_5 (VAR_8, "user #%d: %d, n = %d, max_small = %d, small_cnt = %d\n", VAR_16, VAR_17, VAR_18, VAR_3, VAR_14);
    }
    if (VAR_18 == 0) {
      continue;
    }
    FUNC_1 (VAR_18 > 0);
    if (VAR_18 <= VAR_3) {
      FUNC_10 (VAR_17);
      FUNC_10 (VAR_12);
      VAR_12 += VAR_18;
      FUNC_1 (VAR_12 >= 0);
      VAR_14 ++;
    }
  }
  FUNC_10 (0);
  FUNC_10 (VAR_12);
  FUNC_8 ();
  while (FUNC_0 () >= 0) {
    int VAR_19 = VAR_9.value;
    int VAR_20 = FUNC_6 (VAR_19, -1);
    FUNC_1 (VAR_20 >= 0);
    if (VAR_20 == 0) {
      continue;
    }
    FUNC_1 (VAR_20 > 0);
    if (VAR_20 > VAR_3) {
      if (VAR_20 > VAR_1) {
        VAR_20 = VAR_2;
      }
      FUNC_10 (VAR_19);
      FUNC_10 (VAR_13);
      VAR_13 += VAR_20;
      FUNC_1 (VAR_13 >= 0);
      VAR_15 ++;
    }
  }
  FUNC_10 (0);
  FUNC_10 (VAR_13);
  VAR_12 = 0;
  FUNC_8 ();
  while (FUNC_0 () >= 0) {
    int VAR_21 = VAR_9.value;
    int VAR_22 = FUNC_6 (VAR_21, -1);
    FUNC_1 (VAR_22 >= 0);
    if (VAR_22 == 0) {
      continue;
    }
    FUNC_1 (VAR_22 > 0);
    if (VAR_22 <= VAR_3) {
      FUNC_1 (VAR_22 == FUNC_7 (VAR_21, VAR_4, VAR_1));
      FUNC_1 (VAR_22 <= VAR_1);
      VAR_12 += VAR_22;
      FUNC_11 (VAR_4, VAR_22 * sizeof (long long));
    }
  }
  VAR_13 = 0;
  FUNC_8 ();
  while (FUNC_0 () >= 0) {
    int VAR_23 = VAR_9.value;
    int VAR_24 = FUNC_6 (VAR_23, -1);
    FUNC_1 (VAR_24 >= 0);
    if (VAR_24 == 0) {
      continue;
    }
    FUNC_1 (VAR_24 > 0);
    if (VAR_24 > VAR_3) {
      if (VAR_24 > VAR_1) {
        FUNC_5 (VAR_8, "user %d: has %d bookmarks, leaving only %d in index\n", VAR_23, VAR_24, VAR_2);
        VAR_24 = VAR_2;
      }
      FUNC_1 (VAR_24 == FUNC_7 (VAR_23, VAR_4, VAR_24));
      FUNC_1 (VAR_24 <= VAR_1);
      VAR_13 += VAR_24;
      FUNC_11 (VAR_4, VAR_24 * sizeof (long long));
    }
  }
  FUNC_4 ();

  VAR_11->small_data_offset = (VAR_14 + 1) * sizeof (struct bookmark_user) + (VAR_15 + 1) * sizeof (struct bookmark_user);
  VAR_11->large_data_offset = VAR_11->small_data_offset + sizeof (long long) * VAR_12;
  VAR_11->small_users = VAR_14;
  VAR_11->large_users = VAR_15;

  if (VAR_10) {
    FUNC_5 (VAR_8, "small_users = %d, large_users = %d\n", VAR_14, VAR_15);
  }
}
