
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {int argc; int argn; char const** argv; TYPE_1__* prompt; int bundle; } ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {int fd_out; scalar_t__ owner; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,int,char const**,int ,int ,scalar_t__) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_11 ;
 int FUNC_5 (char const*,char const*,char*) ;
 int FUNC_6 (char*,char**) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 char* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_22(struct cmdargs const *VAR_12, int VAR_13)
{
  const char *VAR_14;
  pid_t VAR_15, VAR_16;
  if (VAR_12->argc == VAR_12->argn) {
    if (!VAR_12->prompt) {
      FUNC_13(VAR_3, "Can't start an interactive shell from"
                " a config file\n");
      return 1;
    } else if (VAR_12->prompt->owner) {
      FUNC_13(VAR_3, "Can't start an interactive shell from"
                " a socket connection\n");
      return 1;
    } else if (VAR_13) {
      FUNC_13(VAR_3, "Can only start an interactive shell in"
  " the foreground mode\n");
      return 1;
    }
  }

  VAR_16 = FUNC_12();
  if ((VAR_15 = FUNC_9()) == 0) {
    int VAR_17, VAR_18;

    if ((VAR_14 = FUNC_11("SHELL")) == ((void*)0))
      VAR_14 = VAR_9;

    FUNC_20();

    if (VAR_12->prompt)
      VAR_18 = VAR_12->prompt->fd_out;
    else if ((VAR_18 = FUNC_14(VAR_10, VAR_5)) == -1) {
      FUNC_13(VAR_1, "Failed to open %s: %s\n",
                VAR_10, FUNC_19(VAR_11));
      FUNC_7(1);
    }
    FUNC_4(VAR_18, VAR_7);
    FUNC_4(VAR_18, VAR_8);
    FUNC_4(VAR_18, VAR_6);
    for (VAR_17 = FUNC_10(); VAR_17 > VAR_6; VAR_17--)
      FUNC_8(VAR_17, VAR_0, 1);


    FUNC_18(FUNC_0());

    if (VAR_12->argc > VAR_12->argn) {

      char *VAR_19[VAR_4];
      int VAR_20 = VAR_12->argc - VAR_12->argn;

      if (VAR_20 >= (int)(sizeof VAR_19 / sizeof VAR_19[0])) {
        VAR_20 = sizeof VAR_19 / sizeof VAR_19[0] - 1;
        FUNC_13(VAR_3, "Truncating shell command to %d args\n", VAR_20);
      }
      FUNC_2(VAR_19, VAR_20, VAR_12->argv + VAR_12->argn, VAR_12->bundle, 0, VAR_16);
      if (VAR_13) {
 pid_t VAR_21;

 VAR_21 = FUNC_12();
 if (FUNC_3(1, 1) == -1) {
   FUNC_13(VAR_2, "%ld: daemon: %s\n", (long)VAR_21, FUNC_19(VAR_11));
   FUNC_7(1);
 }
      } else if (VAR_12->prompt)
        FUNC_15("ppp: Pausing until %s finishes\n", VAR_12->argv[VAR_12->argn]);
      FUNC_6(VAR_19[0], VAR_19);
    } else {
      if (VAR_12->prompt)
        FUNC_15("ppp: Pausing until %s finishes\n", VAR_14);
      FUNC_17(VAR_12->prompt);
      FUNC_5(VAR_14, VAR_14, (char *)((void*)0));
    }

    FUNC_13(VAR_3, "exec() of %s failed: %s\n",
              VAR_12->argc > VAR_12->argn ? VAR_12->argv[VAR_12->argn] : VAR_14,
              FUNC_19(VAR_11));
    FUNC_1(255);
  }

  if (VAR_15 == (pid_t)-1)
    FUNC_13(VAR_2, "Fork failed: %s\n", FUNC_19(VAR_11));
  else {
    int VAR_22;
    FUNC_21(VAR_15, &VAR_22, 0);
  }

  if (VAR_12->prompt && !VAR_12->prompt->owner)
    FUNC_16(VAR_12->prompt);

  return 0;
}
