
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char**,char*) ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_12 (char*,int,...) ;
 char* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_25 () ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 char* VAR_27 ;
 int FUNC_26 (char*,char*,int*,int*) ;
 int FUNC_27 (int ,char*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 char* VAR_31 ;
 int VAR_32 ;
 int FUNC_28 () ;
 char* VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int FUNC_29 (int,int ,int) ;

int FUNC_30 (int VAR_36, char *VAR_37[]) {
  int VAR_38;
  VAR_22 = VAR_37[0];
  while ((VAR_38 = FUNC_10 (VAR_36, VAR_37, "hvu:m:f:g:o:")) != -1) {
    switch (VAR_38) {
    case 'v':
      VAR_34 = 1;
      break;
    case 'h':
      FUNC_28();
      return 2;
    case 'm':
      FUNC_0 (FUNC_26(VAR_19, "%d,%d", &VAR_25, &VAR_24) == 2);
      FUNC_0 (VAR_24 > 0 && VAR_24 <= 1000 && VAR_25 >= 0 && VAR_25 < VAR_24);
      break;
    case 'f':
      VAR_29 = FUNC_9(VAR_19);
      if (!VAR_29) {
 FUNC_8 (VAR_28, "fatal: unsupported table dump format: %s\n", VAR_19);
 return 2;
      }
      break;
    case 'g':
      VAR_12 = VAR_19;
      break;
    case 'o':
      VAR_21 = FUNC_1 (VAR_19);
      break;
    case 'u':
      VAR_33 = VAR_19;
      break;
    }
  }

  if (VAR_20 >= VAR_36 || VAR_20 + 2 < VAR_36) {
    FUNC_28();
    return 2;
  }

  VAR_27 = VAR_37[VAR_20];

  if (VAR_33 && FUNC_2 (VAR_33) < 0) {
    FUNC_8 (VAR_28, "fatal: cannot change user to %s\n", VAR_33 ? VAR_33 : "(none)");
    return 1;
  }

  VAR_26 = FUNC_12 (VAR_27, VAR_4);
  if (VAR_26 < 0) {
    FUNC_8 (VAR_28, "cannot open %s: %m\n", VAR_27);
    return 1;
  }

  if (!VAR_29) {
    VAR_29 = FUNC_9 (FUNC_7 (VAR_27));
    if (!VAR_29) {
      FUNC_8 (VAR_28, "fatal: cannot determine table type from filename %s\n", VAR_27);
    }
  }

  if (VAR_20 + 1 < VAR_36) {
    VAR_31 = VAR_37[VAR_20+1];
    VAR_30 = FUNC_12 (VAR_31, VAR_6 | VAR_2 | VAR_3, 0644);
    if (VAR_30 < 0) {
      FUNC_8 (VAR_28, "cannot create %s: %m\n", VAR_31);
      return 1;
    }
  } else {
    VAR_31 = "stdout";
    VAR_30 = 1;
  }

  switch (VAR_29) {
  case 137:
    VAR_0 = VAR_9;
    FUNC_27(VAR_7, "audio_search");
    while (FUNC_25() > 0) {
      FUNC_15();
    }
    break;
  case 128:
    VAR_0 = VAR_35;
    FUNC_27(VAR_7, "video_search");
    while (FUNC_25() > 0) {
      FUNC_24();
    }
    break;
  case 138:
    VAR_0 = VAR_8;
    FUNC_27(VAR_7, "apps_search");
    while (FUNC_25() > 0) {
      FUNC_14();
    }
    break;
  case 134:
    VAR_0 = VAR_11;
    FUNC_27(VAR_7, "group_search");
    while (FUNC_25() > 0) {
      FUNC_18();
    }
    break;
  case 135:
    VAR_0 = VAR_11;
    FUNC_27(VAR_7, "event_search");
    while (FUNC_25() > 0) {
      FUNC_17();
    }
    break;
  case 136:
    VAR_0 = VAR_10;
    FUNC_27(VAR_7, "blog_posts_search");
    while (FUNC_25() > 0) {
      FUNC_16();
    }
    break;
  case 132:
    VAR_0 = VAR_18;
    FUNC_27(VAR_7, "member_name_search");
    while (FUNC_25() > 0) {
      FUNC_20();
    }
    break;
  case 133:
    VAR_0 = VAR_17;
    FUNC_27(VAR_7, "market_search");
    while (FUNC_25() > 0) {
      FUNC_19();
    }
    break;
  case 130:
    VAR_0 = VAR_23;
    FUNC_27(VAR_7, "question_search");
    while (FUNC_25() > 0) {
      FUNC_22();
    }
    break;
  case 129:
    FUNC_11 (1);
    VAR_0 = VAR_32;
    FUNC_27(VAR_7, "topic_search");
    while (FUNC_25() > 0) {
      FUNC_23();
    }
    break;
  case 131:
    VAR_0 = VAR_16;
    FUNC_27(VAR_7, "status_search");
    while (FUNC_25() > 0) {
      FUNC_21();
    }
    break;
  default:
    FUNC_8 (VAR_28, "unknown table type\n");
    FUNC_4(1);
  }

  FUNC_6();
  if (VAR_30 != 1) {
    if (FUNC_5(VAR_30) < 0) {
      FUNC_8 (VAR_28, "error syncing %s: %m", VAR_31);
      FUNC_4 (1);
    }
    FUNC_3 (VAR_30);
  }

  if (VAR_15 > 0 && VAR_13 > 0 && VAR_12) {
    VAR_14 = FUNC_12 (VAR_12, VAR_6 | VAR_3 | VAR_5, 0640);
    if (VAR_14 < 0) {
      FUNC_8 (VAR_28, "cannot create map file %s: %m\n", VAR_12);
      FUNC_4 (1);
    }
    FUNC_0 (FUNC_29 (VAR_14, VAR_1, VAR_15) == VAR_15);
    FUNC_3 (VAR_14);
    if (VAR_34 > 0) {
      FUNC_8 (VAR_28, "%d bytes written to map file %s\n", VAR_15, VAR_12);
    }
  }

  if (VAR_34 > 0) {
    FUNC_13();
  }

  return 0;
}
