
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int level; int mode; int rateunit; int ratemode; int channel; int cl; int minrate; int maxrate; int weight; int pktsize; } ;
struct TYPE_4__ {int minmax; } ;
struct TYPE_5__ {TYPE_3__ params; TYPE_1__ config; } ;
struct t4_sched_params {int subcmd; int type; TYPE_2__ u; } ;
typedef int op ;
typedef void* int8_t ;
typedef void* int32_t ;
typedef void* int16_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,struct t4_sched_params*) ;
 int FUNC_1 (char*,char const**,long*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct t4_sched_params*,int,int) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_14, const char *VAR_15[])
{
 struct t4_sched_params VAR_16;
 int VAR_17, VAR_18;

 FUNC_3(&VAR_16, 0xff, sizeof(VAR_16));
 VAR_16.subcmd = -1;
 VAR_16.type = -1;
 if (VAR_14 == 0) {
  FUNC_5("missing scheduling sub-command");
  return (VAR_1);
 }
 if (!FUNC_4(VAR_15[0], "config")) {
  VAR_16.subcmd = VAR_11;
  VAR_16.u.config.minmax = -1;
 } else if (!FUNC_4(VAR_15[0], "params")) {
  VAR_16.subcmd = VAR_12;
  VAR_16.u.params.level = VAR_16.u.params.mode = VAR_16.u.params.rateunit =
      VAR_16.u.params.ratemode = VAR_16.u.params.channel =
      VAR_16.u.params.cl = VAR_16.u.params.minrate = VAR_16.u.params.maxrate =
      VAR_16.u.params.weight = VAR_16.u.params.pktsize = -1;
 } else {
  FUNC_5("invalid scheduling sub-command \"%s\"", VAR_15[0]);
  return (VAR_1);
 }


 VAR_17 = 0;
 for (VAR_18 = 1; VAR_18 < VAR_14; VAR_18 += 2) {
  const char **VAR_19 = &VAR_15[VAR_18];
  long VAR_20;

  if (VAR_18 + 1 == VAR_14) {
   FUNC_5("missing argument for \"%s\"", VAR_19[0]);
   VAR_17++;
   break;
  }

  if (!FUNC_4(VAR_19[0], "type")) {
   if (!FUNC_4(VAR_19[1], "packet"))
    VAR_16.type = VAR_13;
   else {
    FUNC_5("invalid type parameter \"%s\"", VAR_19[1]);
    VAR_17++;
   }

   continue;
  }

  if (VAR_16.subcmd == VAR_11) {
   if(!FUNC_1("minmax", VAR_19, &VAR_20))
    VAR_16.u.config.minmax = (int8_t)VAR_20;
   else {
    FUNC_5("unknown scheduler config parameter "
        "\"%s\"", VAR_19[0]);
    VAR_17++;
   }

   continue;
  }


  if (VAR_16.subcmd != VAR_12)
   continue;

  if (!FUNC_4(VAR_19[0], "level")) {
   if (!FUNC_4(VAR_19[1], "cl-rl"))
    VAR_16.u.params.level = VAR_3;
   else if (!FUNC_4(VAR_19[1], "cl-wrr"))
    VAR_16.u.params.level = VAR_4;
   else if (!FUNC_4(VAR_19[1], "ch-rl"))
    VAR_16.u.params.level = VAR_2;
   else {
    FUNC_5("invalid level parameter \"%s\"",
        VAR_19[1]);
    VAR_17++;
   }
  } else if (!FUNC_4(VAR_19[0], "mode")) {
   if (!FUNC_4(VAR_19[1], "class"))
    VAR_16.u.params.mode = VAR_5;
   else if (!FUNC_4(VAR_19[1], "flow"))
    VAR_16.u.params.mode = VAR_6;
   else {
    FUNC_5("invalid mode parameter \"%s\"", VAR_19[1]);
    VAR_17++;
   }
  } else if (!FUNC_4(VAR_19[0], "rate-unit")) {
   if (!FUNC_4(VAR_19[1], "bits"))
    VAR_16.u.params.rateunit = VAR_9;
   else if (!FUNC_4(VAR_19[1], "pkts"))
    VAR_16.u.params.rateunit = VAR_10;
   else {
    FUNC_5("invalid rate-unit parameter \"%s\"",
        VAR_19[1]);
    VAR_17++;
   }
  } else if (!FUNC_4(VAR_19[0], "rate-mode")) {
   if (!FUNC_4(VAR_19[1], "relative"))
    VAR_16.u.params.ratemode = VAR_8;
   else if (!FUNC_4(VAR_19[1], "absolute"))
    VAR_16.u.params.ratemode = VAR_7;
   else {
    FUNC_5("invalid rate-mode parameter \"%s\"",
        VAR_19[1]);
    VAR_17++;
   }
  } else if (!FUNC_1("channel", VAR_19, &VAR_20))
   VAR_16.u.params.channel = (int8_t)VAR_20;
  else if (!FUNC_1("class", VAR_19, &VAR_20))
   VAR_16.u.params.cl = (int8_t)VAR_20;
  else if (!FUNC_1("min-rate", VAR_19, &VAR_20))
   VAR_16.u.params.minrate = (int32_t)VAR_20;
  else if (!FUNC_1("max-rate", VAR_19, &VAR_20))
   VAR_16.u.params.maxrate = (int32_t)VAR_20;
  else if (!FUNC_1("weight", VAR_19, &VAR_20))
   VAR_16.u.params.weight = (int16_t)VAR_20;
  else if (!FUNC_1("pkt-size", VAR_19, &VAR_20))
   VAR_16.u.params.pktsize = (int16_t)VAR_20;
  else {
   FUNC_5("unknown scheduler parameter \"%s\"", VAR_19[0]);
   VAR_17++;
  }
 }
 if (VAR_16.type < 0) {
  FUNC_5("sched \"type\" parameter missing");
  VAR_17++;
 }
 if (VAR_16.subcmd == VAR_11) {
  if (VAR_16.u.config.minmax < 0) {
   FUNC_5("sched config \"minmax\" parameter missing");
   VAR_17++;
  }
 }
 if (VAR_16.subcmd == VAR_12) {
  if (VAR_16.u.params.level < 0) {
   FUNC_5("sched params \"level\" parameter missing");
   VAR_17++;
  }
  if (VAR_16.u.params.mode < 0 &&
      VAR_16.u.params.level == VAR_3) {
   FUNC_5("sched params \"mode\" parameter missing");
   VAR_17++;
  }
  if (VAR_16.u.params.rateunit < 0 &&
      (VAR_16.u.params.level == VAR_3 ||
      VAR_16.u.params.level == VAR_2)) {
   FUNC_5("sched params \"rate-unit\" parameter missing");
   VAR_17++;
  }
  if (VAR_16.u.params.ratemode < 0 &&
      (VAR_16.u.params.level == VAR_3 ||
      VAR_16.u.params.level == VAR_2)) {
   FUNC_5("sched params \"rate-mode\" parameter missing");
   VAR_17++;
  }
  if (VAR_16.u.params.channel < 0) {
   FUNC_5("sched params \"channel\" missing");
   VAR_17++;
  }
  if (VAR_16.u.params.cl < 0 &&
      (VAR_16.u.params.level == VAR_3 ||
      VAR_16.u.params.level == VAR_4)) {
   FUNC_5("sched params \"class\" missing");
   VAR_17++;
  }
  if (VAR_16.u.params.maxrate < 0 &&
      (VAR_16.u.params.level == VAR_3 ||
      VAR_16.u.params.level == VAR_2)) {
   FUNC_5("sched params \"max-rate\" missing for "
       "rate-limit level");
   VAR_17++;
  }
  if (VAR_16.u.params.level == VAR_4 &&
      (VAR_16.u.params.weight < 1 || VAR_16.u.params.weight > 99)) {
   FUNC_5("sched params \"weight\" missing or invalid "
       "(not 1-99) for weighted-round-robin level");
   VAR_17++;
  }
  if (VAR_16.u.params.pktsize < 0 &&
      VAR_16.u.params.level == VAR_3) {
   FUNC_5("sched params \"pkt-size\" missing for "
       "rate-limit level");
   VAR_17++;
  }
  if (VAR_16.u.params.mode == VAR_6 &&
      VAR_16.u.params.ratemode != VAR_7) {
   FUNC_5("sched params mode flow needs rate-mode absolute");
   VAR_17++;
  }
  if (VAR_16.u.params.ratemode == VAR_8 &&
      !FUNC_2(VAR_16.u.params.maxrate, 1, 100)) {
                        FUNC_5("sched params \"max-rate\" takes "
       "percentage value(1-100) for rate-mode relative");
                        VAR_17++;
                }
                if (VAR_16.u.params.ratemode == VAR_7 &&
      !FUNC_2(VAR_16.u.params.maxrate, 1, 100000000)) {
                        FUNC_5("sched params \"max-rate\" takes "
       "value(1-100000000) for rate-mode absolute");
                        VAR_17++;
                }
                if (VAR_16.u.params.maxrate > 0 &&
      VAR_16.u.params.maxrate < VAR_16.u.params.minrate) {
                        FUNC_5("sched params \"max-rate\" is less than "
       "\"min-rate\"");
                        VAR_17++;
                }
 }

 if (VAR_17 > 0) {
  FUNC_5("%d error%s in sched-class command", VAR_17,
      VAR_17 == 1 ? "" : "s");
  return (VAR_1);
 }

 return FUNC_0(VAR_0, &VAR_16);
}
