
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ disabled; } ;
typedef TYPE_1__ volume_t ;
struct connection {int Out; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct connection*,int ,TYPE_1__*,char const*,char*,int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_6 (long long,int ) ;
 int VAR_9 ;
 int FUNC_7 (char*,long long) ;
 int FUNC_8 (char*,long long) ;
 int FUNC_9 (char const*,char*,int) ;
 int FUNC_10 (struct connection*,char const*,char*,int) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (char const*,char*,long long*,...) ;
 char* VAR_10 ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (struct connection*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_1__*,double,long long) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char const*,char*,int) ;
 char* VAR_11 ;
 int FUNC_21 (int,char*,...) ;
 int FUNC_22 (int *,char*,int) ;

int FUNC_23 (struct connection *VAR_12, const char *VAR_13, int VAR_14) {
  FUNC_21 (3, "memcache_get (c = %p, %.*s)\n", VAR_12, VAR_14, VAR_13);
  VAR_8++;
  int VAR_15 = FUNC_3 (VAR_13, VAR_14);
  VAR_13 += VAR_15;
  VAR_14 -= VAR_15;

  long long VAR_16;
  char VAR_17[1024];
  int VAR_18 = 0;
  int VAR_19;

  if (VAR_14 >= 4 && !FUNC_9 (VAR_13, "file", 4) && FUNC_13 (VAR_13+4, "%lld,%1023s", &VAR_16, VAR_17) == 2) {
    VAR_5++;
    VAR_18 = 1;
  }

  if (VAR_14 >= 4 && !FUNC_9 (VAR_13, "hide", 4) && FUNC_13 (VAR_13+4, "%lld,%x", &VAR_16, &VAR_19) == 2) {
    FUNC_21 (4, "HIDE\n");
    VAR_6++;
    FUNC_0 (FUNC_11 (VAR_17, sizeof (VAR_17), "**hide doc**%x", VAR_19) < sizeof (VAR_17));
    VAR_18 = 1;
  }

  if (VAR_18) {
    FUNC_21 (4, "path: %s\n", VAR_17);
    volume_t *VAR_20 = FUNC_6 (VAR_16, 0);
    if (VAR_20 == ((void*)0)) {
      VAR_9++;
      VAR_7++;
      return 0;
    }

    if (VAR_20->disabled || VAR_2 || VAR_4) {
      return 0;
    }
    FUNC_1 (VAR_12, 0, VAR_20, VAR_13 + VAR_15, VAR_17, ((void*)0), 0, VAR_3);
    return 0;
  }

  int VAR_21;
  double VAR_22 = 0.0;
  long long VAR_23;
  if (VAR_14 >= 10 && !FUNC_9 (VAR_13, "check_file", 10) && (VAR_21 = FUNC_13 (VAR_13 + 10, "%lld,%lld,%lf", &VAR_16, &VAR_23, &VAR_22)) >= 2) {
    if (VAR_21 == 2) {
      VAR_22 = 99.0;
    }
    if (VAR_22 < 0.0) {
      VAR_22 = 0.0;
    }
    if (VAR_22 > 100.0) {
      VAR_22 = 100.0;
    }
    volume_t *VAR_24 = FUNC_6 (VAR_16, 0);
    if (VAR_24 == ((void*)0)) {
      VAR_9++;
      VAR_7++;
      return 0;
    }
    if (VAR_24->disabled || VAR_2 || VAR_4) {
      return 0;
    }
    VAR_21 = FUNC_18 (VAR_24, VAR_22 * 0.01, VAR_23);
    return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_11, FUNC_12 (VAR_11, "%d", VAR_21));
  }

  if (VAR_14 == 7 && !FUNC_9 (VAR_13, "volumes", 7) && (VAR_21 = FUNC_2 ()) >= 0) {
    return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_11, VAR_21);
  }

  if (VAR_14 >= 6 && !FUNC_9 (VAR_13, "volume", 6) && FUNC_13 (VAR_13 + 6, "%lld", &VAR_16) == 1 &&
      (VAR_21 = FUNC_7 (VAR_11, VAR_16) ) >= 0) {
    FUNC_22 (&VAR_12->Out, VAR_11+VAR_21, FUNC_12 (VAR_11+VAR_21, "VALUE %s 1 %d\r\n", VAR_13 - VAR_15, VAR_21));
    FUNC_22 (&VAR_12->Out, VAR_11, VAR_21);
    FUNC_22 (&VAR_12->Out, "\r\n", 2);
    return 0;
  }

  if (VAR_14 >= 6 && !FUNC_9 (VAR_13, "Volume", 6) && FUNC_13 (VAR_13 + 6, "%lld", &VAR_16) == 1 &&
      (VAR_21 = FUNC_8 (VAR_11, VAR_16)) >= 0) {
    return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_11, VAR_21);
  }

  if (VAR_14 == 4 && !FUNC_9 (VAR_13, "dirs", 4) && !FUNC_5 (VAR_11)) {
    VAR_21 = FUNC_19 (VAR_11);
    FUNC_22 (&VAR_12->Out, VAR_11+VAR_21, FUNC_12 (VAR_11+VAR_21, "VALUE %s 1 %d\r\n", VAR_13 - VAR_15, VAR_21));
    FUNC_22 (&VAR_12->Out, VAR_11, VAR_21);
    FUNC_22 (&VAR_12->Out, "\r\n", 2);
    return 0;
  }

  if (VAR_14 >= 5 && !FUNC_20 (VAR_13, "stats", 5)) {
    int VAR_25 = FUNC_16 (VAR_12);
    return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_10, VAR_25);
  }

  int VAR_26 = -1;

  if (VAR_14 >= 11 && !FUNC_9 (VAR_13, "enable_file", 11) && FUNC_13 (VAR_13 + 11, "%lld,%d", &VAR_16, &VAR_26) == 2) {
    volume_t *VAR_27 = FUNC_6 (VAR_16, 0);
    if (VAR_27 == ((void*)0)) {
      VAR_7++;
      return 0;
    }
    VAR_21 = FUNC_15 (VAR_27, VAR_26);
    if (VAR_21 == VAR_1) {
      return FUNC_10 (VAR_12, VAR_13 - VAR_15, "2", 1);
    }
    if (VAR_21 < 0) {
      FUNC_21 (0, "enable_file%lld,%d returns error code %d.\n", VAR_16, VAR_26, VAR_21);
    }
    return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_21 < 0 ? "0" : "1", 1);
  }

  if (VAR_14 >= 12 && !FUNC_9 (VAR_13, "disable_file", 12) && FUNC_13 (VAR_13 + 12, "%lld,%d", &VAR_16, &VAR_26) == 2) {
    volume_t *VAR_28 = FUNC_6 (VAR_16, 0);
    if (VAR_28 == ((void*)0)) {
      VAR_7++;
      return 0;
    }
    VAR_21 = FUNC_14 (VAR_28, VAR_26);
    return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_21 < 0 ? "0" : "1", 1);
  }

  if (VAR_14 >= 7 && !FUNC_9 (VAR_13, "scandir", 7)) {
    char *VAR_29;
    int VAR_30 = FUNC_4 (VAR_13 + 7);
    if (VAR_30 < 0) {
      VAR_29 = "Path wasn't found";
      return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_29, FUNC_19 (VAR_29));
    }
    int VAR_31 = FUNC_17 (VAR_30);
    if (VAR_31 == VAR_0) {
      VAR_29 = "Couldn't scandir more than once";
      return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_29, FUNC_19 (VAR_29));
    } else {
      return FUNC_10 (VAR_12, VAR_13 - VAR_15, VAR_11, FUNC_12 (VAR_11, "%d", VAR_31));
    }
  }
  VAR_7++;
  return 0;
}
