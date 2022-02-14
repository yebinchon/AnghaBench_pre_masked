
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct connection*,char const*,int) ;
 int FUNC_1 (struct connection*,char const*,int) ;
 int FUNC_2 (struct connection*,char const*,int) ;
 int FUNC_3 (struct connection*,char const*,int,int) ;
 int FUNC_4 (struct connection*,char const*,int) ;
 int FUNC_5 (struct connection*,char const*,int) ;
 int FUNC_6 (struct connection*,char const*,int) ;
 int FUNC_7 (struct connection*,char const*,int) ;
 int FUNC_8 (struct connection*,char const*,int) ;
 int FUNC_9 (int ,char*,char const*) ;
 int FUNC_10 (struct connection*) ;
 int FUNC_11 (struct connection*) ;
 int FUNC_12 (struct connection*,char const*,int ,int ) ;
 int FUNC_13 (struct connection*,char const*,int,int,int ,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 () ;
 int FUNC_17 (char const*,char*,int) ;
 int VAR_9 ;

int FUNC_18 (struct connection *VAR_10, const char *VAR_11, int VAR_12) {
  if (VAR_9 > 1) {
    FUNC_9 (VAR_8, "memcache_get: key='%s'\n", VAR_11);
  }

  if (VAR_12 >= 5 && !FUNC_17 (VAR_11, "stats", 5)) {
    FUNC_12 (VAR_10, VAR_11, VAR_7, FUNC_11 (VAR_10));
    return 0;
  }

  if (VAR_12 == 18 && !FUNC_17 (VAR_11, "start_write_binlog", 18)) {
    FUNC_12 (VAR_10, VAR_11, VAR_7, FUNC_14 (VAR_7, "%d", FUNC_15()));
    return 0;
  }

  if (VAR_12 == 17 && !FUNC_17 (VAR_11, "stop_write_binlog", 17)) {
    FUNC_12 (VAR_10, VAR_11, VAR_7, FUNC_14 (VAR_7, "%d", FUNC_16()));
    return 0;
  }

  if (VAR_12 == 15 && !FUNC_17 (VAR_11, "binlog_disabled", 15)) {
    FUNC_12 (VAR_10, VAR_11, VAR_7, FUNC_14 (VAR_7, "%d", VAR_5));
    return 0;
  }

  if (VAR_12 >= 16 && !FUNC_17 (VAR_11, "free_block_stats", 16)) {
    FUNC_13 (VAR_10, VAR_11, VAR_12, VAR_1, 0, VAR_0, VAR_1);
    return 0;
  }

  if (VAR_12 >= 16 && !FUNC_17 (VAR_11, "used_block_stats", 16)) {
    FUNC_13 (VAR_10, VAR_11, VAR_12, VAR_1, 0, VAR_4, VAR_1);
    return 0;
  }

  if (VAR_12 >= 16 && !FUNC_17 (VAR_11, "allocation_stats", 16)) {
    FUNC_13 (VAR_10, VAR_11, VAR_12, VAR_1, 0, VAR_2[0], VAR_1 * 4);
    return 0;
  }

  if (VAR_12 >= 17 && !FUNC_17 (VAR_11, "split_block_stats", 17)) {
    FUNC_13 (VAR_10, VAR_11, VAR_12, VAR_1, 0, VAR_3, VAR_1);
    return 0;
  }

  if (VAR_6) {
    if (VAR_12 >= 19 && (!FUNC_17 (VAR_11, "common_friends_num", 18) || !FUNC_17 (VAR_11, "%common_friends_num", 19))) {
      FUNC_2 (VAR_10, VAR_11, VAR_12);
      FUNC_10 (VAR_10);
      return 0;
    }
    if (VAR_12 >= 15 && (!FUNC_17 (VAR_11, "common_friends", 14) || !FUNC_17 (VAR_11, "%common_friends", 15))) {
      FUNC_1 (VAR_10, VAR_11, VAR_12);
      FUNC_10 (VAR_10);
      return 0;
    }
    return 0;
  }

  if (VAR_12 >= 7 && !FUNC_17 (VAR_11, "friends", 7)) {
    FUNC_3 (VAR_10, VAR_11, VAR_12, 7);
    return 0;
  }

  if (VAR_12 >= 9 && !FUNC_17 (VAR_11, "friendcnt", 9)) {
    FUNC_3 (VAR_10, VAR_11, VAR_12, 9);
    return 0;
  }

  if (VAR_12 >= 9 && !FUNC_17 (VAR_11, "friendreq", 9)) {
    FUNC_5 (VAR_10, VAR_11, VAR_12);
    return 0;
  }

  if (VAR_12 >= 9 && !FUNC_17 (VAR_11, "requests", 8)) {
    FUNC_8 (VAR_10, VAR_11, VAR_12);
    return 0;
  }

  if (VAR_12 >= 7 && !FUNC_17 (VAR_11, "friend", 6)) {
    FUNC_4 (VAR_10, VAR_11, VAR_12);
    return 0;
  }

  if (VAR_12 >= 14 && !FUNC_17 (VAR_11, "recent_friends", 14)) {
    FUNC_7 (VAR_10, VAR_11, VAR_12);
    return 0;
  }

  if (VAR_12 >= 1 && *VAR_11 >= '1' && *VAR_11 <= '9') {
    FUNC_0 (VAR_10, VAR_11, VAR_12);
    return 0;
  }

  if (VAR_12 >= 7 && !FUNC_17 (VAR_11, "privacy", 7)) {
    FUNC_6 (VAR_10, VAR_11, VAR_12);
    return 0;
  }

  return 0;
}
