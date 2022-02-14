
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
struct rlimit {int rlim_cur; int rlim_max; } ;
struct forth_request {scalar_t__ res; char* prog; int priority; int prog_id; scalar_t__ size; scalar_t__ timeout; } ;
typedef int sigset_t ;
typedef scalar_t__ pid_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct forth_request** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct forth_request** VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;

 long long VAR_13 ;
 long long VAR_14 ;
 long long VAR_15 ;
 int const VAR_16 ;

 int const VAR_17 ;
 int VAR_18 ;


 long long VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_23 ;
 int FUNC_3 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_26 ;
 int FUNC_7 (int) ;
 int VAR_27 ;
 int FUNC_8 (int ,int,struct forth_request*) ;
 int FUNC_9 () ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 () ;
 char* VAR_30 ;
 int FUNC_18 (struct forth_request*,int) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,char*,scalar_t__,int,int) ;
 int FUNC_21 (scalar_t__,int ,int ,scalar_t__,int ,int) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int,int *,int *) ;
 int FUNC_25 () ;
 scalar_t__ FUNC_26 () ;
 scalar_t__ VAR_31 ;
 int FUNC_27 (scalar_t__,int const) ;
 int FUNC_28 (char*,...) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_29 (scalar_t__) ;
 int VAR_41 ;
 int VAR_42 ;
 long long VAR_43 ;
 int FUNC_30 (int *,long long) ;
 scalar_t__ VAR_44 ;
 int FUNC_31 (struct forth_request*) ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int FUNC_32 () ;
 scalar_t__ VAR_47 ;
 scalar_t__ FUNC_33 (int ,struct rlimit*) ;
 int FUNC_34 () ;
 int VAR_48 ;
 int FUNC_35 () ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ FUNC_36 (int,struct sigaction*,int *) ;
 int FUNC_37 (int *,long long) ;
 int FUNC_38 (int *) ;
 scalar_t__ FUNC_39 (int *,int) ;
 int VAR_51 ;
 int FUNC_40 (int const,int ) ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_41 (int *,struct forth_request*) ;
 int VAR_58 ;
 char* FUNC_42 (char*) ;
 scalar_t__ FUNC_43 (char*) ;
 int VAR_59 ;
 char* VAR_60 ;
 scalar_t__ VAR_61 ;
 int FUNC_44 (int,char*,...) ;
 int VAR_62 ;
 scalar_t__ FUNC_45 (int,int*,int ) ;

void FUNC_46 (void) {
  int VAR_63;
  int VAR_64;

  FUNC_23 ();
  FUNC_25 ();

  VAR_64 = 0;

  FUNC_22 ();
  FUNC_44 (4, "progname: %s\n", VAR_44);
  VAR_34 = 0;
  if (VAR_34 > VAR_37) {
    VAR_34 = VAR_37;
  }
  FUNC_21 (VAR_44, VAR_35, VAR_40, VAR_34, 0, VAR_59);

  if (VAR_29) {
    FUNC_34 ();
    FUNC_32 ();
  }

  if (FUNC_5 (VAR_60, VAR_30) < 0) {
    FUNC_28 ("fatal: cannot change user to %s, group to %s\n", VAR_60 ? VAR_60 : "(none)", VAR_30 ? VAR_30 : "(none)");
    FUNC_12 (1);
  }

  if (!FUNC_35 ()) {
    FUNC_12 (1);
  }

  FUNC_24 (VAR_48, &VAR_28, &VAR_39);

  FUNC_40 (128, VAR_20);
  FUNC_40 (VAR_17, VAR_21);
  FUNC_40 (VAR_16, VAR_21);

  sigset_t VAR_65;
  FUNC_38 (&VAR_65);
  FUNC_37 (&VAR_65, VAR_15);
  FUNC_37 (&VAR_65, 129);
  FUNC_37 (&VAR_65, VAR_19);
  FUNC_37 (&VAR_65, VAR_13);
  if (VAR_29) {
    FUNC_37 (&VAR_65, VAR_14);
  }
  struct sigaction VAR_66;
  VAR_66.sa_handler = VAR_33;
  VAR_66.sa_mask = VAR_65;
  VAR_66.sa_flags = VAR_11;
  for (VAR_63 = 1; VAR_63 <= VAR_18; VAR_63++) {
    if (FUNC_39 (&VAR_65, VAR_63)) {
      if (FUNC_36 (VAR_63, &VAR_66, ((void*)0)) < 0) {
        FUNC_28 ("sigaction (%d) failed. %m\n", VAR_63);
        FUNC_12 (1);
      }
    }
  }

  if (VAR_61 > 0) {
    char *VAR_67 = FUNC_16 (VAR_58, VAR_22 - 10);
    if (VAR_67 != ((void*)0)) {
      FUNC_28 ("Current working directory: %s\n", VAR_67);
    }
  }

  for (VAR_63 = 0; ; VAR_63++) {
    if (VAR_61 > 0 && !(VAR_63 & 1023)) {
      FUNC_28 ("epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
          VAR_24, VAR_38, VAR_5, VAR_3, VAR_4);
    }

    FUNC_11 (11);
    if (VAR_42 != VAR_64) {
      VAR_64 = VAR_42;
      FUNC_9();
    }

    if (FUNC_26 ()) {
      break;
    }

    if (VAR_43 & (1LL << VAR_13)) {
      FUNC_30 (&VAR_65, VAR_13);
      FUNC_44 (1, "got SIGCHLD.\n");

    }

    if (VAR_43 & (1LL << VAR_14)) {
      FUNC_30 (&VAR_65, VAR_14);
      FUNC_44 (1, "got SIGHUP.\n");

    }

    if (VAR_43 & (1LL << VAR_19)) {
      FUNC_30 (&VAR_65, VAR_19);
      FUNC_44 (1, "got SIGUSR1, rotate logs.\n");
      FUNC_32 ();

    }

    while (VAR_26 > 0) {
      int VAR_68;
      pid_t VAR_69 = FUNC_45 (-1, &VAR_68, VAR_23);
      if (VAR_69 <= 0) {
        break;
      }
      int VAR_70;
      for (VAR_70 = 0; VAR_70 < VAR_26; VAR_70++) {
        if (VAR_6[VAR_70] == VAR_69) {
          char *VAR_71 = ((void*)0);
          VAR_27++;
          struct forth_request *VAR_72 = VAR_10[VAR_70];
          VAR_72->res = VAR_0;
          if (FUNC_1(VAR_68)) {
            VAR_72->res = FUNC_0(VAR_68);
            if (VAR_72->res != VAR_1) {
              VAR_72->res = VAR_0;
              FUNC_41 (&VAR_41, VAR_72);
            }
          } else if (FUNC_2(VAR_68)) {
            int VAR_73 = FUNC_3(VAR_68);
            FUNC_44 (3, "WTERMSIG(status): %d, pid: %d\n", VAR_73, (int) VAR_69);
            switch (VAR_73) {
              case 132:
                FUNC_41 (&VAR_49, VAR_72);
                VAR_71 = "SIGABRT";
              break;
              case 130:
                FUNC_41 (&VAR_53, VAR_72);
                VAR_71 = "SIGSEGV";
              break;
              case 131:
                FUNC_41 (&VAR_51, VAR_72);
                VAR_71 = "SIGKILL";
              break;
              case 128:
                FUNC_41 (&VAR_57, VAR_72);
                VAR_71 = "SIGXCPU";
              break;
              case 129:
                FUNC_41 (&VAR_55, VAR_72);
                VAR_71 = "SIGTERM";
              break;
              default:
                FUNC_41 (&VAR_52, VAR_72);
                VAR_71 = "SIGOTHER";
              break;
            }
          }
          if (VAR_72->prog != ((void*)0)) {
            FUNC_15 (VAR_72->prog);
            VAR_72->size = 0;
          }
          --VAR_26;
          VAR_6[VAR_70] = VAR_6[VAR_26];
          VAR_10[VAR_70] = VAR_10[VAR_26];

          int VAR_74 = VAR_12[VAR_70]; VAR_12[VAR_70] = VAR_12[VAR_26]; VAR_12[VAR_26] = VAR_74;
          if (VAR_71 == ((void*)0)) {
            FUNC_8 (VAR_72->prog_id, VAR_12[VAR_26], VAR_72);
          } else {
            VAR_72->size = FUNC_43 (VAR_71);
            VAR_72->prog = FUNC_42 (VAR_71);
            FUNC_4 (VAR_72->prog);
            VAR_72->timeout = VAR_42 + VAR_47;
            VAR_25 += VAR_72->size + 1;
            FUNC_14 ();
          }
          FUNC_31 (VAR_72);
          break;
        }
      }
    }

    for (VAR_63 = 0; VAR_63 < VAR_26; VAR_63++) {
      if (VAR_10[VAR_63]->priority || FUNC_6 (VAR_6[VAR_63]) > 0) {
        if (VAR_10[VAR_63]->priority) {
          FUNC_27 (VAR_6[VAR_63], 131);
        } else {
          FUNC_27 (VAR_6[VAR_63], 129);
          VAR_10[VAR_63]->priority |= 1;
        }
      }
    }

    while (VAR_26 < VAR_36 && VAR_45 > 0) {
      pid_t VAR_75 = FUNC_13 ();
      struct forth_request *VAR_76 = VAR_2[1];
      FUNC_4 (VAR_76->prog);
      VAR_45--;
      if (!VAR_75) {

        FUNC_40 (129, VAR_56);
        FUNC_40 (130, VAR_54);
        FUNC_40 (132, VAR_50);
        FUNC_7 (VAR_48); VAR_48 = -1;
        struct rlimit VAR_77, VAR_78;
        VAR_78.rlim_cur = VAR_78.rlim_max = 20 * VAR_59;
        if (FUNC_33 (VAR_9, &VAR_78) < 0) {
          FUNC_44 (1, "setrlimit (CPU_LIMIT (%lld,%lld)) fail. %m", (long long) VAR_78.rlim_cur, (long long) VAR_78.rlim_max);
        }
        VAR_77.rlim_cur = VAR_77.rlim_max = VAR_62;
        if (FUNC_33 (VAR_8, &VAR_77) < 0) {
          FUNC_44 (1, "setrlimit (RLIMIT_AS (%lld,%lld)) fail. %m", (long long) VAR_77.rlim_cur, (long long) VAR_77.rlim_max);
        }
        if (VAR_31 > VAR_32 && FUNC_29 (VAR_31 - VAR_32) < 0) {
          FUNC_44 (1, "nice (%d) fail. %m\n", VAR_31 - VAR_32);
        }
        char *VAR_79 = VAR_76->prog;
        int VAR_80 = FUNC_20 (VAR_76->prog_id, VAR_79, FUNC_43 (VAR_79), (int) FUNC_17 (), VAR_12[VAR_26]);
        FUNC_19 ();
        FUNC_12 (VAR_80);
      } else {

        VAR_76->priority = 0;
        VAR_6[VAR_26] = VAR_75;
        VAR_10[VAR_26] = VAR_76;
        VAR_26++;
        VAR_76->res = VAR_7;
        FUNC_18 (VAR_2[VAR_45 + 1], 1);
      }
    }
    if (VAR_46 && !--VAR_46) break;
  }

  FUNC_10 (VAR_48);
  FUNC_7 (VAR_48);

  FUNC_19 ();
  FUNC_28 ("Main process terminated (pending_signals: 0x%llx).\n", VAR_43);
}
