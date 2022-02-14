
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offload_settings {int offload; int rx_coalesce; int tstamp; int sack; int nagle; int ecn; int ddp; int tls; int cong_algo; long sched_class; long txq; long rxq; long mss; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,long*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char**,char const*) ;
 int FUNC_3 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, char **VAR_3, const char *VAR_4,
    int *VAR_5, struct offload_settings *VAR_6)
{

 while (*VAR_2 == '!') {
  (*VAR_5)++;
  VAR_2++;
 }

 if (!FUNC_1(VAR_2, "not")) {
  (*VAR_5)++;
  return (0);
 }

 if (!FUNC_1(VAR_2, "offload")) {
  VAR_6->offload = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2 , "coalesce")) {
  VAR_6->rx_coalesce = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2, "timestamp") || !FUNC_1(VAR_2, "tstamp")) {
  VAR_6->tstamp = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2, "sack")) {
  VAR_6->sack = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2, "nagle")) {
  VAR_6->nagle = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2, "ecn")) {
  VAR_6->ecn = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2, "ddp")) {
  VAR_6->ddp = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else if (!FUNC_1(VAR_2, "tls")) {
  VAR_6->tls = (*VAR_5 + 1) & 1;
  *VAR_5 = 0;
 } else {
  char *VAR_7, *VAR_8;
  long VAR_9;



  if (*VAR_5) {
   FUNC_3("\"%s\" is not a valid keyword, or it does not "
       "support negation.", VAR_2);
   return (VAR_1);
  }

  while ((VAR_7 = FUNC_2(VAR_3, VAR_4)) != ((void*)0)) {
   if (*VAR_7 != '\0')
    break;
  }
  if (VAR_7 == ((void*)0)) {
   FUNC_3("\"%s\" is not a valid keyword, or it requires a "
       "parameter that has not been provided.", VAR_2);
   return (VAR_1);
  }

  if (!FUNC_1(VAR_2, "cong")) {
   if (!FUNC_1(VAR_7, "reno"))
    VAR_6->cong_algo = 0;
   else if (!FUNC_1(VAR_7, "tahoe"))
    VAR_6->cong_algo = 1;
   else if (!FUNC_1(VAR_7, "newreno"))
    VAR_6->cong_algo = 2;
   else if (!FUNC_1(VAR_7, "highspeed"))
    VAR_6->cong_algo = 3;
   else {
    FUNC_3("unknown congestion algorithm \"%s\".", VAR_2);
    return (VAR_1);
   }
  } else if (!FUNC_1(VAR_2, "class")) {
   VAR_9 = -1;
   VAR_8 = FUNC_0(VAR_7, &VAR_9, ((void*)0));

   if (*VAR_8 || VAR_9 < 0 || VAR_9 > 15) {
    FUNC_3("invalid scheduling class \"%s\".  "
        "\"class\" needs an integer value where "
        "0 <= value <= 15", VAR_7);
    return (VAR_1);
   }
   VAR_6->sched_class = VAR_9;
  } else if (!FUNC_1(VAR_2, "bind") || !FUNC_1(VAR_2, "txq") ||
      !FUNC_1(VAR_2, "rxq")) {
   VAR_9 = -1;
   if (FUNC_1(VAR_7, "random")) {
    VAR_8 = FUNC_0(VAR_7, &VAR_9, ((void*)0));
    if (*VAR_8 || VAR_9 < 0 || VAR_9 > 0xffff) {
     FUNC_3("invalid queue specification "
         "\"%s\".  \"%s\" needs an integer"
         " value, or \"random\".",
         VAR_7, VAR_2);
     return (VAR_1);
    }
   }
   if (!FUNC_1(VAR_2, "bind")) {
    VAR_6->txq = VAR_9;
    VAR_6->rxq = VAR_9;
   } else if (!FUNC_1(VAR_2, "txq")) {
    VAR_6->txq = VAR_9;
   } else if (!FUNC_1(VAR_2, "rxq")) {
    VAR_6->rxq = VAR_9;
   } else {
    return (VAR_0);
   }
  } else if (!FUNC_1(VAR_2, "mss")) {
   VAR_9 = -1;
   VAR_8 = FUNC_0(VAR_7, &VAR_9, ((void*)0));
   if (*VAR_8 || VAR_9 <= 0) {
    FUNC_3("invalid MSS specification \"%s\".  "
        "\"mss\" needs a positive integer value",
        VAR_7);
    return (VAR_1);
   }
   VAR_6->mss = VAR_9;
  } else {
   FUNC_3("unknown settings keyword: \"%s\"", VAR_2);
   return (VAR_1);
  }
 }

 return (0);
}
