
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_3__ {int data_len; char* data; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,char const*,long long) ;
 int FUNC_4 (char const*,int,long long) ;
 TYPE_1__* FUNC_5 (int) ;
 long long FUNC_6 (char const*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,unsigned long long) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (unsigned long long*,int) ;
 char* FUNC_12 (int) ;

int FUNC_13 (struct connection *VAR_4, int VAR_5, const char *VAR_6, int VAR_7, long long VAR_8) {
  if (VAR_3 > 0) {
    FUNC_3 (VAR_2, "memcache_incr: op=%d, key='%s', val=%lld\n", VAR_5, VAR_6, VAR_8);
  }
  if (VAR_8 < 0) {
    VAR_8 *= -1;
    VAR_5 ^= 1;
  }

  if (VAR_5 == 1) {
    VAR_0++;
  } else {
    VAR_1++;
  }

  long long VAR_9 = FUNC_6 (VAR_6, VAR_7);
  int VAR_10 = FUNC_4 (VAR_6, VAR_7, VAR_9);

  FUNC_0 (2);

  if (VAR_10 == -1) {
    FUNC_10 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    return 0;
  }

  hash_entry_t *VAR_11 = FUNC_5 (VAR_10);

  unsigned long long VAR_12 = 0;
  int VAR_13, VAR_14 = 1;

  for (VAR_13 = 0; VAR_13 < VAR_11->data_len && VAR_14; VAR_13++) {
    if ('0' <= VAR_11->data[VAR_13] && VAR_11->data[VAR_13] <= '9') {
      VAR_12 = VAR_12 * 10 + VAR_11->data[VAR_13] - '0';
    } else {
      VAR_14 = 0;
    }
  }

  if (VAR_14 == 0) {
    VAR_12 = 0;
  }

  if (VAR_5 == 1) {
    if ((unsigned long long)VAR_8 > VAR_12) {
      VAR_12 = 0;
    } else {
      VAR_12 -= VAR_8;
    }
  } else {
    VAR_12 += (unsigned long long)VAR_8;
  }

  FUNC_11 (VAR_11->data, VAR_11->data_len + 1);
  FUNC_2 (VAR_10);
  FUNC_1 (VAR_10);

  char VAR_15[30];
  FUNC_8 (VAR_15, "%llu", VAR_12);

  int VAR_16 = FUNC_9 (VAR_15);

  char *VAR_17 = FUNC_12 (VAR_16 + 1);
  FUNC_7 (VAR_17, VAR_15, VAR_16 + 1);

  VAR_11->data = VAR_17;
  VAR_11->data_len = VAR_16;

  FUNC_10 (&VAR_4->Out, VAR_17, VAR_16);
  FUNC_10 (&VAR_4->Out, "\r\n", 2);

  return 0;
}
