
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_20__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_27__ {char* name; int logok; TYPE_14__* rule; } ;
struct TYPE_25__ {char* name; int logok; TYPE_12__* rule; } ;
struct TYPE_23__ {int fragok; int logok; char* name; TYPE_10__* rule; } ;
struct TYPE_42__ {int fragok; int logok; char* name; TYPE_8__* rule; } ;
struct TYPE_34__ {TYPE_15__ alive; TYPE_13__ dial; TYPE_11__ out; TYPE_9__ in; } ;
struct TYPE_30__ {TYPE_21__ timer; } ;
struct TYPE_29__ {int fd; } ;
struct TYPE_28__ {scalar_t__ done; TYPE_21__ timer; } ;
struct TYPE_40__ {int Write; int Read; int IsSet; int UpdateSet; int type; } ;
struct TYPE_31__ {char* Name; scalar_t__ fd; int header; } ;
struct TYPE_39__ {int all; scalar_t__ open; } ;
struct TYPE_37__ {int timeout; } ;
struct TYPE_36__ {char* name; char* key; } ;
struct TYPE_35__ {scalar_t__ min_timeout; int timeout; } ;
struct TYPE_38__ {unsigned long long optmask; char* label; TYPE_4__ choked; int ifqueue; TYPE_3__ auth; TYPE_2__ idle; } ;
struct TYPE_32__ {struct bundle* object; int LayerFinish; int LayerDown; int LayerUp; int LayerStart; } ;
struct bundle {int unit; int ncp; int * iface; int radius; TYPE_18__ choked; TYPE_17__ notify; TYPE_16__ idle; TYPE_21__ filter; TYPE_7__ desc; TYPE_19__ dev; int * links; scalar_t__ upat; TYPE_6__ phys_type; TYPE_5__ cfg; TYPE_1__ fsm; scalar_t__ NatEnabled; scalar_t__ CleaningUp; int phase; scalar_t__ routing_seq; scalar_t__ bandwidth; } ;
struct TYPE_41__ {void* f_action; } ;
struct TYPE_33__ {scalar_t__ ipv6_available; } ;
struct TYPE_26__ {void* f_action; } ;
struct TYPE_24__ {void* f_action; } ;
struct TYPE_22__ {void* f_action; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
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
 unsigned long long VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 unsigned long long VAR_24 ;
 unsigned long long VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_2 (struct bundle*) ;
 int VAR_38 ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (char*,struct bundle*,int) ;
 int VAR_39 ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (TYPE_21__*,char,int) ;
 int FUNC_12 (int *,struct bundle*) ;
 int FUNC_13 (struct bundle*,int ) ;
 TYPE_20__ VAR_40 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,char const*,int) ;
 char const* FUNC_16 (int) ;
 char* FUNC_17 (char*,char) ;

struct bundle *
FUNC_18(const char *VAR_41, int VAR_42, int VAR_43)
{
  static struct bundle VAR_44;
  int VAR_45, VAR_46, VAR_47, VAR_48;
  const char *VAR_49;







  if (VAR_44.iface != ((void*)0)) {
    FUNC_9(VAR_10, "bundle_Create:  There's only one BUNDLE !\n");
    return ((void*)0);
  }

  if (VAR_43 == -1) {
    VAR_47 = 0;
    VAR_48 = -1;
  } else {
    VAR_47 = VAR_43;
    VAR_48 = VAR_43 + 1;
  }
  VAR_46 = VAR_4;
  VAR_45 = 0;



  for (VAR_44.unit = VAR_47; VAR_44.unit != VAR_48; VAR_44.unit++) {
    FUNC_15(VAR_44.dev.Name, sizeof VAR_44.dev.Name, "%s%d",
             VAR_41, VAR_44.unit);
    VAR_44.dev.fd = FUNC_1(VAR_44.dev.Name, VAR_26);
    if (VAR_44.dev.fd >= 0)
      break;
    else if (VAR_39 == VAR_5 || VAR_39 == VAR_4) {
      if (VAR_39 != VAR_4 || ++VAR_45 > 2) {
        VAR_46 = VAR_39;
 break;
      }
    } else
      VAR_46 = VAR_39;
  }

  if (VAR_44.dev.fd < 0) {
    if (VAR_43 == -1)
      FUNC_9(VAR_13, "No available tunnel devices found (%s)\n",
                FUNC_16(VAR_46));
    else
      FUNC_9(VAR_13, "%s%d: %s\n", VAR_41, VAR_43, FUNC_16(VAR_46));
    return ((void*)0);
  }

  FUNC_10(VAR_44.unit, ((void*)0));

  VAR_49 = FUNC_17(VAR_44.dev.Name, '/');
  if (VAR_49 == ((void*)0))
    VAR_49 = VAR_44.dev.Name;
  else
    VAR_49++;

  VAR_44.iface = FUNC_6(VAR_49);
  if (VAR_44.iface == ((void*)0)) {
    FUNC_3(VAR_44.dev.fd);
    return ((void*)0);
  }
  VAR_44.dev.header = 0;



  FUNC_9(VAR_12, "Using interface: %s\n", VAR_49);

  VAR_44.bandwidth = 0;
  VAR_44.routing_seq = 0;
  VAR_44.phase = VAR_27;
  VAR_44.CleaningUp = 0;
  VAR_44.NatEnabled = 0;

  VAR_44.fsm.LayerStart = VAR_36;
  VAR_44.fsm.LayerUp = VAR_37;
  VAR_44.fsm.LayerDown = VAR_34;
  VAR_44.fsm.LayerFinish = VAR_35;
  VAR_44.fsm.object = &VAR_44;

  VAR_44.cfg.idle.timeout = VAR_15;
  VAR_44.cfg.idle.min_timeout = 0;
  *VAR_44.cfg.auth.name = '\0';
  *VAR_44.cfg.auth.key = '\0';
  VAR_44.cfg.optmask = (1ull << VAR_16) | (1ull << VAR_19) |
                       (1ull << VAR_22) | (1ull << VAR_23) |
                       (1ull << VAR_24) | (1ull << VAR_25) |
                       (1ull << VAR_21) |
                       (1ull << VAR_20);

  FUNC_13(&VAR_44, VAR_17);
  if (VAR_40.ipv6_available)
    FUNC_13(&VAR_44, VAR_18);

  *VAR_44.cfg.label = '\0';
  VAR_44.cfg.ifqueue = VAR_3;
  VAR_44.cfg.choked.timeout = VAR_2;
  VAR_44.phys_type.all = VAR_42;
  VAR_44.phys_type.open = 0;
  VAR_44.upat = 0;

  VAR_44.links = FUNC_4("deflink", &VAR_44, VAR_42);
  if (VAR_44.links == ((void*)0)) {
    FUNC_9(VAR_10, "Cannot create data link: %s\n", FUNC_16(VAR_39));
    FUNC_7(VAR_44.iface);
    VAR_44.iface = ((void*)0);
    FUNC_3(VAR_44.dev.fd);
    return ((void*)0);
  }

  VAR_44.desc.type = VAR_1;
  VAR_44.desc.UpdateSet = VAR_38;
  VAR_44.desc.IsSet = VAR_33;
  VAR_44.desc.Read = VAR_31;
  VAR_44.desc.Write = VAR_32;

  FUNC_12(&VAR_44.ncp, &VAR_44);

  FUNC_11(&VAR_44.filter, '\0', sizeof VAR_44.filter);
  VAR_44.filter.in.fragok = VAR_44.filter.in.logok = 1;
  VAR_44.filter.in.name = "IN";
  VAR_44.filter.out.fragok = VAR_44.filter.out.logok = 1;
  VAR_44.filter.out.name = "OUT";
  VAR_44.filter.dial.name = "DIAL";
  VAR_44.filter.dial.logok = 1;
  VAR_44.filter.alive.name = "ALIVE";
  VAR_44.filter.alive.logok = 1;
  {
    int VAR_50;
    for (VAR_50 = 0; VAR_50 < VAR_14; VAR_50++) {
        VAR_44.filter.in.rule[VAR_50].f_action = VAR_0;
        VAR_44.filter.out.rule[VAR_50].f_action = VAR_0;
        VAR_44.filter.dial.rule[VAR_50].f_action = VAR_0;
        VAR_44.filter.alive.rule[VAR_50].f_action = VAR_0;
    }
  }
  FUNC_11(&VAR_44.idle.timer, '\0', sizeof VAR_44.idle.timer);
  VAR_44.idle.done = 0;
  VAR_44.notify.fd = -1;
  FUNC_11(&VAR_44.choked.timer, '\0', sizeof VAR_44.choked.timer);

  FUNC_14(&VAR_44.radius);



  FUNC_5(VAR_44.iface, &VAR_44.ncp, 0, VAR_6);

  FUNC_2(&VAR_44);

  return &VAR_44;
}
