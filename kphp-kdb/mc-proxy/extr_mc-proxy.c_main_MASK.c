
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (char*) ;
 char* VAR_30 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* VAR_31 ;
 char* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_4 (int ) ;
 long long VAR_37 ;
 int VAR_38 ;
 int FUNC_5 (int) ;
 int VAR_39 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 void* VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_10 (void*) ;
 int VAR_42 ;
 void* VAR_43 ;
 int VAR_44 ;
 int FUNC_11 (char*) ;
 int VAR_45 ;
 void* VAR_46 ;
 char* VAR_47 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (void*,char*,long long*,char*) ;
 int FUNC_15 () ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_16 (void*,char*) ;
 int FUNC_17 (int ,void*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 () ;
 void* VAR_50 ;
 int VAR_51 ;
 int FUNC_20 (int,char*) ;

int FUNC_21 (int VAR_52, char *VAR_53[]) {
  int VAR_54;
  long long VAR_55;
  char VAR_56;

  FUNC_13 ();

  VAR_47 = VAR_53[0];
  char *VAR_57 = 0;
  while ((VAR_54 = FUNC_7 (VAR_52, VAR_53, "b:c:l:p:n:dhu:vfFP:X:E:H:T:y:z:")) != -1) {
    switch (VAR_54) {
    case 'v':
      VAR_51++;
      break;
    case 'F':
      VAR_34++;
      break;
    case 'f':
      VAR_42++;
      break;
    case 'h':
      FUNC_19();
      return 2;
    case 'b':
      VAR_31 = FUNC_3(VAR_43);
      if (VAR_31 <= 0) {
        VAR_31 = VAR_0;
      }
      break;
    case 'c':
      VAR_41 = FUNC_3 (VAR_43);
      if (VAR_41 <= 0 || VAR_41 > VAR_27) {
        VAR_41 = VAR_27;
      }
      break;
    case 'y':
      VAR_54 = FUNC_3 (VAR_43);
      if (VAR_54 >= 1 && VAR_54 <= 1000) {
 VAR_36 = VAR_54;
      }
      break;
    case 'z':
      VAR_54 = FUNC_3 (VAR_43);
      if (VAR_54 >= 1 && VAR_54 <= 1000) {
 VAR_35 = VAR_54;
      }
      break;
    case 'p':
      VAR_46 = FUNC_3 (VAR_43);
      break;
    case 'n':
      VAR_38 = 0;
      FUNC_10 (FUNC_3 (VAR_43));
      if (VAR_38) {
        FUNC_11 ("nice");
      }
      break;
    case 'u':
      VAR_50 = VAR_43;
      break;
    case 'l':
      VAR_40 = VAR_43;
      break;
    case 'P':
      VAR_30 = VAR_43;
      break;
    case 'X':
      FUNC_17 (VAR_39, VAR_43, 15);
      if (!FUNC_16 (VAR_43, "text")) {
        VAR_34 |= VAR_25;
      } else if (!FUNC_16 (VAR_43, "lists")) {
        VAR_34 |= VAR_7;
      } else if (!FUNC_16 (VAR_43, "hints")) {
        VAR_34 |= VAR_5;
      } else if (!FUNC_16 (VAR_43, "logs")) {
        VAR_34 |= VAR_8;
      } else if (!FUNC_16 (VAR_43, "magus")) {
        VAR_34 |= VAR_9;
      } else if (!FUNC_16 (VAR_43, "news")) {
        VAR_34 |= VAR_11;
      } else if (!FUNC_16 (VAR_43, "roundrobin")) {
        VAR_34 |= VAR_18;
      } else if (!FUNC_16 (VAR_43, "bayes")) {
        VAR_34 |= VAR_2;
      } else if (!FUNC_16 (VAR_43, "antispam")) {
        VAR_34 |= VAR_1;
      } else if (!FUNC_16 (VAR_43, "temp")) {
        VAR_34 |= VAR_24;
      } else if (!FUNC_16 (VAR_43, "support")) {
        VAR_34 |= VAR_22;
      } else if (!FUNC_16 (VAR_43, "photo")) {
        VAR_34 |= VAR_16;
      } else if (!FUNC_16 (VAR_43, "dot")) {
        VAR_34 |= VAR_3;
      } else if (!FUNC_16 (VAR_43, "search")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_19;
      } else if (!FUNC_16 (VAR_43, "targ")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_23;
      } else if (!FUNC_16 (VAR_43, "news_ug")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_15;
      } else if (!FUNC_16 (VAR_43, "news_g")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_14;
      } else if (!FUNC_16 (VAR_43, "news_comm")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_13;
      } else if (!FUNC_16 (VAR_43, "newsr")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_12;
      } else if (!FUNC_16 (VAR_43, "statsx")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_21;
      } else if (!FUNC_16 (VAR_43, "friends")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_4;
      } else if (!FUNC_16 (VAR_43, "searchx")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_20;
      } else if (!FUNC_16 (VAR_43, "watchcat")) {
        VAR_34 |= VAR_26;
      } else if (!FUNC_16 (VAR_43, "hints_merge")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_6;
      } else if (!FUNC_16 (VAR_43, "random_merge")) {
        if (VAR_34 & VAR_10) {
          FUNC_6 (VAR_49, "Can not enable to merge extensions");
          return 2;
        }
        VAR_34 |= VAR_17;
      } else {
        FUNC_19 ();
        return 2;
      }
      break;
    case 'T':
      VAR_45 = FUNC_2 (VAR_43);
      if (VAR_45 < VAR_29 || VAR_45 > VAR_28) {
 FUNC_19 ();
 return 2;
      }
      break;
    case 'E':
      VAR_57 = VAR_43;
      break;
    case 'd':
      VAR_33 ^= 1;
      break;
    case 'H':
      VAR_56 = 0;
      FUNC_1 (FUNC_14 (VAR_43, "%lld%c", &VAR_55, &VAR_56) >= 1);
      switch (VAR_56 | 0x20) {
      case 'k': VAR_55 <<= 10; break;
      case 'm': VAR_55 <<= 20; break;
      case 'g': VAR_55 <<= 30; break;
      case 't': VAR_55 <<= 40; break;
      default: FUNC_1 (VAR_56 == 0x20);
      }
      if (VAR_55 >= (1LL << 20) && VAR_55 <= (sizeof(long) == 4 ? (3LL << 30) : (100LL << 30))) {
 VAR_37 = VAR_55;
      }
      break;
    }
  }
  if (VAR_52 != VAR_44 + 1) {
    FUNC_19();
    return 2;
  }

  if (VAR_35 < VAR_36) {
    FUNC_9 ("WARNING: adjusted default maximum number of connections to be equal to default minimum number of connections\n");
    VAR_35 = VAR_36;
  }

  FUNC_8 ();

  if (FUNC_12 (VAR_41 + 16) < 0) {
    FUNC_6 (VAR_49, "fatal: cannot raise open file limit to %ld\n", VAR_41+16);
    FUNC_5 (1);
  }

  VAR_32 = VAR_53[VAR_44];

  VAR_54 = FUNC_4 (0);

  if (VAR_54 < 0) {
    FUNC_6 (VAR_49, "config check failed!\n");
    return -VAR_54;
  }

  FUNC_20 (1, "config loaded!\n");

  if (VAR_57) {
    FUNC_0 (VAR_57);
  } else {
    FUNC_0 (VAR_30);
  }

  VAR_48 = FUNC_18 (0);

  FUNC_15 ();

  return 0;
}
