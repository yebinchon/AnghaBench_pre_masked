
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
 int FUNC_0 (char const*,int,char**,int*) ;
 int FUNC_1 (struct connection*,char*,int,char const*) ;
 int FUNC_2 (struct connection*,char*,int,char const*) ;
 int FUNC_3 (struct connection*,char*,int,char const*,int) ;
 int FUNC_4 (struct connection*,char*,int,char const*) ;
 int FUNC_5 (struct connection*,char*,int,char const*) ;
 int FUNC_6 (struct connection*,char*,int,char const*) ;
 int FUNC_7 (struct connection*,char*,int,char const*) ;
 int FUNC_8 (struct connection*,char*,int,char const*) ;
 int FUNC_9 (struct connection*,char*,int,int,char const*,int) ;
 int FUNC_10 (struct connection*,char*,int,char const*,int) ;
 int FUNC_11 (struct connection*,char*,int,char const*,int) ;
 int FUNC_12 (struct connection*,char*,int,char const*) ;
 int FUNC_13 (struct connection*,char*,int,char const*) ;
 int FUNC_14 (int ,char*,char const*) ;
 int FUNC_15 (struct connection*) ;
 int FUNC_16 (struct connection*,char const*,int ,int) ;
 int FUNC_17 (struct connection*,char const*,int,int,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (char*,char*,int) ;
 int VAR_7 ;

int FUNC_19 (struct connection *VAR_8, const char *VAR_9, int VAR_10) {
  if (VAR_7 > 1) {
    FUNC_14 (VAR_6, "memcache_get: key='%s'\n", VAR_9);
  }

  char *VAR_11;
  int VAR_12;

  FUNC_0 (VAR_9, VAR_10, &VAR_11, &VAR_12);

  if (VAR_12 >= 9 && !FUNC_18 (VAR_11, "datedistr", 9)) {
    FUNC_3 (VAR_8, VAR_11, VAR_12, VAR_9, VAR_10);
    return 0;
  }

  if (VAR_12 >= 9 && !FUNC_18 (VAR_11, "intersect", 9)) {
    FUNC_9 (VAR_8, VAR_11, VAR_12, 9, VAR_9, VAR_10);
    return 0;
  }

  if (VAR_12 >= 8 && !FUNC_18 (VAR_11, "subtract", 8)) {
    FUNC_9 (VAR_8, VAR_11, VAR_12, 8, VAR_9, VAR_10);
    return 0;
  }

  if (VAR_12 >= 7 && !FUNC_18 (VAR_11, "sumlist", 7)) {
    FUNC_9 (VAR_8, VAR_11, VAR_12, 7, VAR_9, VAR_10);
    return 0;
  }

  if (VAR_12 >= 4 && !FUNC_18 (VAR_11, "list", 4)) {
    FUNC_10 (VAR_8, VAR_11, VAR_12, VAR_9, VAR_10);
    return 0;
  }

  if (VAR_12 >= 10 && !FUNC_18 (VAR_11, "sortedlist", 10)) {
    FUNC_11 (VAR_8, VAR_11, VAR_12, VAR_9, VAR_10);
    return 0;
  }

  if (VAR_12 >= 9 && !FUNC_18 (VAR_11, "entry_pos", 9)) {
    FUNC_5 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 17 && !FUNC_18 (VAR_11, "entry_sublist_pos", 17)) {
    FUNC_6 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 5 && !FUNC_18 (VAR_11, "entry", 5)) {
    FUNC_4 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 5 && !FUNC_18 (VAR_11, "flags", 5)) {
    FUNC_7 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 5 && !FUNC_18 (VAR_11, "value", 5)) {
    FUNC_13 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 4 && !FUNC_18 (VAR_11, "text", 4)) {
    FUNC_12 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 6 && !FUNC_18 (VAR_11, "counts", 6)) {
    FUNC_2 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 5 && !FUNC_18 (VAR_11, "count", 5)) {
    FUNC_1 (VAR_8, VAR_11, VAR_12, VAR_9);
    return 0;
  }

  if (VAR_12 >= 10 && !FUNC_18 (VAR_11, "incr_value", 10)) {
    FUNC_8 (VAR_8, VAR_11, VAR_12, VAR_9);
  }

  if (VAR_12 >= 16 && !FUNC_18 (VAR_11, "free_block_stats", 16)) {
    FUNC_17 (VAR_8, VAR_9, VAR_10, VAR_1, 0, VAR_0, VAR_1);
    return 0;
  }

  if (VAR_12 >= 16 && !FUNC_18 (VAR_11, "used_block_stats", 16)) {
    FUNC_17 (VAR_8, VAR_9, VAR_10, VAR_1, 0, VAR_4, VAR_1);
    return 0;
  }

  if (VAR_12 >= 16 && !FUNC_18 (VAR_11, "allocation_stats", 16)) {
    FUNC_17 (VAR_8, VAR_9, VAR_10, VAR_1, 0, VAR_2[0], VAR_1 * 4);
    return 0;
  }

  if (VAR_12 >= 17 && !FUNC_18 (VAR_11, "split_block_stats", 17)) {
    FUNC_17 (VAR_8, VAR_9, VAR_10, VAR_1, 0, VAR_3, VAR_1);
    return 0;
  }

  if (VAR_12 >= 5 && !FUNC_18 (VAR_11, "stats", 5)) {
    int VAR_13 = FUNC_15 (VAR_8);
    FUNC_16 (VAR_8, VAR_9, VAR_5, VAR_13);
    return 0;
  }

  return 0;
}
