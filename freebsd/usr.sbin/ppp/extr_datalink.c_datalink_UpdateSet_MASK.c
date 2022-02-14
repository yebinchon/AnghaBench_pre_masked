
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct fdescriptor {int dummy; } ;
struct TYPE_20__ {int desc; } ;
struct TYPE_26__ {int * hangup; int * login; int * dial; } ;
struct TYPE_22__ {int max; } ;
struct TYPE_27__ {TYPE_8__ script; TYPE_4__ dial; } ;
struct TYPE_17__ {int state; int desc; } ;
struct TYPE_19__ {int * alt; } ;
struct TYPE_25__ {int run; } ;
struct TYPE_21__ {int state; } ;
struct TYPE_23__ {int tries; TYPE_3__ timer; } ;
struct datalink {int state; int name; TYPE_10__* physical; TYPE_2__ chap; TYPE_9__ cfg; TYPE_13__ chat; TYPE_1__ phone; TYPE_7__ script; TYPE_14__* bundle; TYPE_5__ dial; int reconnect_tries; } ;
typedef int fd_set ;
struct TYPE_24__ {int full; } ;
struct TYPE_18__ {int CleaningUp; } ;
struct TYPE_16__ {int type; int desc; TYPE_6__ name; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_14__*,struct datalink*) ;
 int FUNC_1 (TYPE_14__*,int ) ;
 int FUNC_2 (TYPE_13__*,int *,char*) ;
 char* FUNC_3 (struct datalink*) ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (struct datalink*) ;
 int FUNC_6 (struct datalink*) ;
 int FUNC_7 (struct datalink*,int const) ;
 int FUNC_8 (struct datalink*,int ) ;
 int FUNC_9 (struct datalink*,int,int) ;
 struct datalink* FUNC_10 (struct fdescriptor*) ;
 int FUNC_11 (int *,int *,int *,int *,int*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct datalink*,char*,int,...) ;
 int FUNC_14 (TYPE_10__*) ;
 int FUNC_15 (TYPE_10__*) ;
 int FUNC_16 (TYPE_10__*) ;

__attribute__((used)) static int
FUNC_17(struct fdescriptor *VAR_10, fd_set *VAR_11, fd_set *VAR_12, fd_set *VAR_13,
                   int *VAR_14)
{
  struct datalink *VAR_15 = FUNC_10(VAR_10);
  int VAR_16;

  VAR_16 = 0;
  switch (VAR_15->state) {
    case 136:
      if ((VAR_15->physical->type & (VAR_7|VAR_6|VAR_4|
                                 VAR_8|VAR_5)) &&
          !VAR_15->bundle->CleaningUp)






        FUNC_9(VAR_15, 1, 1);
      else
        break;


    case 129:
      if (VAR_15->dial.timer.state != VAR_9) {
        if (--VAR_15->dial.tries < 0)
          VAR_15->dial.tries = 0;
        if (FUNC_16(VAR_15->physical) >= 0) {
          FUNC_13(VAR_15, "%s: Entering terminal mode on %s\r\n"
                           "Type `~?' for help\r\n", VAR_15->name,
                           VAR_15->physical->name.full);
          if (VAR_15->script.run) {
            FUNC_7(VAR_15, 135);
            if (!FUNC_2(&VAR_15->chat, VAR_15->cfg.script.dial,
                            *VAR_15->cfg.script.dial ?
                            FUNC_3(VAR_15) : ""))
              FUNC_12(VAR_3, "Invalid dial script\n");
            if (!(VAR_15->physical->type & (VAR_5|VAR_6)) &&
                VAR_15->cfg.dial.max)
              FUNC_12(VAR_1, "%s: Dial attempt %u of %d\n",
                        VAR_15->name, VAR_15->cfg.dial.max - VAR_15->dial.tries,
                        VAR_15->cfg.dial.max);
          } else
            FUNC_7(VAR_15, 138);
          return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
        } else {
          if (!(VAR_15->physical->type & (VAR_5|VAR_6)) &&
              VAR_15->cfg.dial.max)
            FUNC_12(VAR_1, "Failed to open device (attempt %u of %d)\n",
                       VAR_15->cfg.dial.max - VAR_15->dial.tries, VAR_15->cfg.dial.max);
          else
            FUNC_12(VAR_1, "Failed to open device\n");

          if (VAR_15->bundle->CleaningUp ||
              (!(VAR_15->physical->type & (VAR_5|VAR_6)) &&
               VAR_15->cfg.dial.max && VAR_15->dial.tries == 0)) {
            FUNC_7(VAR_15, 136);
            VAR_15->reconnect_tries = 0;
            VAR_15->dial.tries = -1;
            FUNC_13(VAR_15, "Failed to open %s\n",
                             VAR_15->physical->name.full);
            FUNC_0(VAR_15->bundle, VAR_15);
          }
          if (!VAR_15->bundle->CleaningUp) {
            int VAR_17;

            VAR_17 = FUNC_8(VAR_15, FUNC_4(VAR_15));
            FUNC_1(VAR_15->bundle, VAR_0);
            FUNC_13(VAR_15, "Failed to open %s, pause %d seconds\n",
                             VAR_15->physical->name.full, VAR_17);
          }
        }
      }
      break;

    case 138:

      switch (FUNC_14(VAR_15->physical)) {
        case 142:
          FUNC_12(VAR_2, "Waiting for carrier\n");
          return 0;

        case 143:
          if (VAR_15->script.run) {
            FUNC_7(VAR_15, 132);
            if (!FUNC_2(&VAR_15->chat, VAR_15->cfg.script.login, ((void*)0)))
              FUNC_12(VAR_3, "Invalid login script\n");
          } else
            FUNC_6(VAR_15);
          return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

        case 144:
          FUNC_15(VAR_15->physical);
          if (VAR_15->script.run) {
            FUNC_7(VAR_15, 134);
            if (!FUNC_2(&VAR_15->chat, VAR_15->cfg.script.hangup, ((void*)0)))
              FUNC_12(VAR_3, "Invalid hangup script\n");
            return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
          } else {
            FUNC_5(VAR_15);
            return 0;
          }
      }

    case 134:
    case 135:
    case 131:
    case 132:
      VAR_16 = FUNC_11(&VAR_15->chat.desc, VAR_11, VAR_12, VAR_13, VAR_14);
      switch (VAR_15->chat.state) {
        case 141:

          switch(VAR_15->state) {
            case 134:
              FUNC_5(VAR_15);
              break;
            case 135:
              FUNC_7(VAR_15, 138);
              return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
            case 131:
              FUNC_7(VAR_15, 134);
              FUNC_15(VAR_15->physical);
              if (!FUNC_2(&VAR_15->chat, VAR_15->cfg.script.hangup, ((void*)0)))
                FUNC_12(VAR_3, "Invalid hangup script\n");
              return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
            case 132:
              VAR_15->phone.alt = ((void*)0);
              FUNC_6(VAR_15);
              return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
          }
          break;
        case 140:

          FUNC_12(VAR_3, "Chat script failed\n");
          switch(VAR_15->state) {
            case 134:
              FUNC_5(VAR_15);
              break;
            case 135:
            case 131:
            case 132:
              FUNC_7(VAR_15, 134);
              FUNC_15(VAR_15->physical);
              if (!FUNC_2(&VAR_15->chat, VAR_15->cfg.script.hangup, ((void*)0)))
                FUNC_12(VAR_3, "Invalid hangup script\n");
              return FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
          }
          break;
      }
      break;

    case 128:
    case 133:
    case 139:
    case 137:
    case 130:
      VAR_16 = FUNC_11(&VAR_15->chap.desc, VAR_11, VAR_12, VAR_13, VAR_14) +
               FUNC_11(&VAR_15->physical->desc, VAR_11, VAR_12, VAR_13, VAR_14);
      break;
  }
  return VAR_16;
}
