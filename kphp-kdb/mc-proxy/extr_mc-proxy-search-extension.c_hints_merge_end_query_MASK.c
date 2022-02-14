
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hints_gather_extra {int limit; scalar_t__ need_rating; } ;
struct gather_entry {scalar_t__ num; } ;
struct connection {int Out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 () ;
 int FUNC_6 (struct gather_entry*) ;
 int* FUNC_7 () ;
 char* FUNC_8 (int *,int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (struct connection*,char const*,char*,int) ;
 size_t FUNC_11 (char*,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int *,char const*,int) ;

int FUNC_13 (struct connection *VAR_4, const char *VAR_5, int VAR_6, void *VAR_7, struct gather_entry *VAR_8, int VAR_9) {
  struct hints_gather_extra *VAR_10 = VAR_7;
  FUNC_1 (VAR_7 != 0);
  static char VAR_11[2048];
  int VAR_12, VAR_13;
  int VAR_14 = 0;
  char *VAR_15, *VAR_16, *VAR_17;
  int VAR_18 = VAR_6;

  VAR_1 = VAR_10->limit;

  int VAR_19 = FUNC_3 (VAR_5, VAR_18);
  VAR_5 += VAR_19;
  VAR_18 -= VAR_19;

  FUNC_2 (0);
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) if (VAR_8[VAR_13].num >= 0) {
    VAR_14 += VAR_8[VAR_13].num;
    FUNC_1 (VAR_8[VAR_13].num >= 0);
    if (VAR_3 >= 4) {
      FUNC_4 (VAR_2, "Using result %d (num = %ld)\n", VAR_13, VAR_8[VAR_13].num);
    }
    FUNC_6 (&VAR_8[VAR_13]);
  } else {
    if (VAR_3 >= 4) {
      FUNC_4 (VAR_2, "Dropping result %d (num = %ld)\n", VAR_13, VAR_8[VAR_13].num);
    }
  }

  if (VAR_3 > 0) {
    FUNC_4 (VAR_2, "result = %d\n", VAR_14);
  }

  if (!VAR_1 || !VAR_14) {
    VAR_12 = FUNC_11 (VAR_11, "%d", VAR_14);
    return FUNC_10 (VAR_4, VAR_5, VAR_11, VAR_12);
  }

  FUNC_12 (&VAR_4->Out, "VALUE ", 6);
  FUNC_12 (&VAR_4->Out, VAR_5, VAR_18);

  VAR_15 = FUNC_8 (&VAR_4->Out, 512);
  if (!VAR_15) return -1;
  VAR_17 = VAR_15 + 448;

  FUNC_9 (VAR_15, " 0 .........\r\n", 14);
  VAR_16 = VAR_15 + 3;
  VAR_15 += 14;
  VAR_15 += VAR_12 = FUNC_11 (VAR_15, "%d", VAR_14);



  if (VAR_0) {
  } else {
    FUNC_1 (0);
  }

  for (VAR_13 = 0; VAR_13 < VAR_1; ) {
    int VAR_20, *VAR_21 = FUNC_7 ();
    if (!VAR_21) { break; }

    if (VAR_15 >= VAR_17) {
      FUNC_0 (&VAR_4->Out, VAR_15 - (VAR_17 - 448));
      VAR_15 = FUNC_8 (&VAR_4->Out, 512);
      if (!VAR_15) return -1;
      VAR_17 = VAR_15 + 448;
    }

    *VAR_15++ = ','; VAR_12++;
    VAR_12 += VAR_20 = FUNC_11 (VAR_15, "%d%c%d", VAR_21[0], ',', VAR_21[1]);
    VAR_15 += VAR_20;
    if (VAR_10->need_rating) {
      VAR_12 += VAR_20 = FUNC_11 (VAR_15, "%c%.6lf", ',', (double)*(float *)&VAR_21[2]);
      VAR_15 += VAR_20;
    }

    FUNC_5 ();
    VAR_13++;
  }

  VAR_16[FUNC_11 (VAR_16, "% 9d", VAR_12)] = '\r';


  FUNC_9 (VAR_15, "\r\n", 2);
  VAR_15+=2;
  FUNC_0 (&VAR_4->Out, VAR_15 - (VAR_17 - 448));

  return 0;
}
