
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data {int data_len; int flags; int data; } ;
struct connection {int flags; int Out; } ;
struct TYPE_2__ {int key_len; char* key; int prefix_len; int total_data_sent; char* ptr; scalar_t__ total_keys_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,int,int,scalar_t__) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct connection*,int) ;
 int FUNC_7 (struct connection*,char const*,int,int ,int,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int,char*,...) ;
 int VAR_4 ;
 struct connection* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct data FUNC_10 (char const*,int) ;
 char const* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_11 (char const*,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 char VAR_14 ;
 int FUNC_12 (struct connection*,char const*,int,int,int,scalar_t__,char*) ;
 int FUNC_13 (int *,char*,int) ;

int FUNC_14 (struct connection *VAR_15, const char *VAR_16, int VAR_17) {
  FUNC_9 (3, "memcache_get_wildcard. key = %s\n", VAR_16);
  VAR_7 = VAR_6;
  if (VAR_15->flags & VAR_0) {
    return 0;
  }
  int VAR_18 = FUNC_6 (VAR_15, 1);
  FUNC_9 (3, "read_last_kept = %d\n", VAR_18);
  VAR_14 = VAR_16[VAR_17 - 1];
  VAR_11 = 0;

  VAR_8 = VAR_16;;
  VAR_9 = VAR_17 - 1;
  VAR_5 = VAR_15;
  if (!VAR_18) {
    if (VAR_14 == '#') {
      struct data VAR_19 = FUNC_10 (VAR_16, VAR_17 - 1);
      if (VAR_19.data_len != -1) {
        FUNC_7 (VAR_15, VAR_16, VAR_17, VAR_19.data, VAR_19.data_len, VAR_19.flags);
        return 0;
      }
    }
    VAR_12 = 0;
    VAR_13 = 0;
    if (VAR_14 == '#') {
      if (VAR_3) {
        VAR_11 = FUNC_3 (VAR_1);
        FUNC_5 (VAR_11, "a:000000000:{", 13);
        VAR_12 = 13;
        VAR_4 ++;
      } else {
        static char VAR_20[65536];
        int VAR_21 = FUNC_8 (VAR_20, "VALUE ");
        FUNC_5 (VAR_20 + VAR_21, VAR_16, VAR_17);
        VAR_21 += VAR_17;
        VAR_21 += FUNC_8 (VAR_20 + VAR_21, " 1 ");
        FUNC_13 (&VAR_15->Out, VAR_20, VAR_21);
        VAR_11 = FUNC_2 (&VAR_15->Out, 50);
        FUNC_13 (&VAR_15->Out, "000000000\r\na:000000000:{", 24);
        VAR_12 = 13;
      }
    }
    VAR_10 = VAR_17 - 1;
  } else {
    FUNC_0 (VAR_3);

    VAR_9 = VAR_2->key_len;
    VAR_8 = VAR_2->key;
    VAR_10 = VAR_2->prefix_len;
    VAR_12 = VAR_2->total_data_sent;
    VAR_13 = VAR_2->total_keys_sent;
    VAR_11 = VAR_2->ptr;
  }


  int VAR_22 = FUNC_1 (VAR_8, VAR_9, VAR_10, VAR_13);
  FUNC_9 (3, "do_pmemcached_get_all_next_keys result: %d\n", VAR_22);
  if (VAR_22 == -2) {
    FUNC_0 (VAR_3);
    FUNC_12 (VAR_15, VAR_8, VAR_9, VAR_10, VAR_12, VAR_13, VAR_11);
    FUNC_4 (VAR_15);
    return 0;
  }
  FUNC_11 (VAR_16, VAR_17);
  return 0;
  return 0;

}
