
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,int,int,int,int,char*) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct connection*,char*,char*,int) ;
 size_t FUNC_9 (char*,char*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char**,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_12 (struct connection *VAR_12, char *VAR_13, int VAR_14) {
  int VAR_15, VAR_16, VAR_17, VAR_18;
  char *VAR_19, *VAR_20, *VAR_21;

  if (FUNC_10 (VAR_13, "search(", 7)) { return -1; }
  VAR_20 = VAR_13 + 7;
  VAR_15 = FUNC_11 (VAR_20, &VAR_19, 10);
  if (VAR_19 == VAR_20 || *VAR_19 != ',' || VAR_15 <= 0 || VAR_15 > (1L<<30)) {
    return -1;
  }
  VAR_20 = VAR_19+1;
  VAR_16 = FUNC_11 (VAR_20, &VAR_19, 10);
  if (VAR_19 == VAR_20 || *VAR_19 != ',' || VAR_16 <= 0 || VAR_16 > VAR_0) {
    return -1;
  }

  VAR_2 = VAR_1;
  FUNC_7(VAR_19+1);

  if (VAR_11) {
    FUNC_3 (VAR_8, "%d search query: uid=%d, max_res=%d, keywords=%d, text='%s'\n", VAR_7, VAR_15, VAR_16, VAR_3, VAR_19+1);
  }

  VAR_6 = FUNC_2(VAR_15,0);
  if (!FUNC_5(VAR_15) && !VAR_6) {
    return FUNC_8 (VAR_12, VAR_13, "no_user", 7);
  }

  if (!VAR_3) {
    return FUNC_8 (VAR_12, VAR_13, "empty_query", 11);
  }

  if (FUNC_1() < 0) {
    return FUNC_8 (VAR_12, VAR_13, "search_error", 12);
  }

  VAR_19 = FUNC_4 (&VAR_12->Out, 512);
  if (!VAR_19) return -1;
  VAR_20 = VAR_19 + 480;
  FUNC_6 (VAR_19, "VALUE ", 6);
  VAR_19 += 6;
  FUNC_6 (VAR_19, VAR_13, VAR_14);
  VAR_19 += VAR_14;
  FUNC_6 (VAR_19, " 0 .........\r\n", 14);
  VAR_21 = VAR_19 + 3;
  VAR_19 += 14;
  VAR_19 += VAR_18 = FUNC_9 (VAR_19, "%d", VAR_5);
  for (VAR_17 = 0; VAR_17 < VAR_5 && VAR_17 < VAR_16; VAR_17++) {
    int VAR_22;
    if (VAR_19 >= VAR_20) {
      FUNC_0 (&VAR_12->Out, VAR_19 - (VAR_20 - 480));
      VAR_19 = FUNC_4 (&VAR_12->Out, 512);
      if (!VAR_19) return -1;
      VAR_20 = VAR_19 + 480;
    }
    *VAR_19++ = ','; VAR_18++;
    VAR_18 += VAR_22 = FUNC_9 (VAR_19, "%d", VAR_4[VAR_17]);
    VAR_19 += VAR_22;
  }
  VAR_21[FUNC_9 (VAR_21, "% 9d", VAR_18)] = '\r';
  FUNC_6 (VAR_19, "\r\nEND\r\n", 7);
  VAR_19 += 7;
  FUNC_0 (&VAR_12->Out, VAR_19 - (VAR_20 - 480));

  VAR_10 += VAR_5;
  VAR_9 += VAR_18;

  return 0;
}
