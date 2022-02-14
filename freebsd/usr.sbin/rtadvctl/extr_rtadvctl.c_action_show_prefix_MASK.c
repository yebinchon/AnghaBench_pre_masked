
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long tv_sec; } ;
struct prefix {int pfx_prefixlen; int pfx_origin; scalar_t__ pfx_validlifetime; scalar_t__ pfx_vltimeexpire; scalar_t__ pfx_preflifetime; scalar_t__ pfx_pltimeexpire; scalar_t__ pfx_timer; scalar_t__ pfx_autoconfflg; scalar_t__ pfx_onlinkflg; int pfx_prefix; } ;
typedef int ntopbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ,struct timespec*) ;
 char* FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (char*,...) ;
 struct timespec* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_5(struct prefix *VAR_5)
{
 char VAR_6[VAR_2];
 char VAR_7[VAR_4];
 struct timespec VAR_8;

 FUNC_0(VAR_1, &VAR_8);
 FUNC_2("\t  %s/%d", FUNC_1(VAR_0, &VAR_5->pfx_prefix,
  VAR_6, sizeof(VAR_6)), VAR_5->pfx_prefixlen);

 FUNC_2(" (");
 switch (VAR_5->pfx_origin) {
 case 128:
  FUNC_2("KERNEL");
  break;
 case 130:
  FUNC_2("CONFIG");
  break;
 case 129:
  FUNC_2("DYNAMIC");
  break;
 }

 FUNC_2(",");

 FUNC_2(" vltime=%s",
     (VAR_5->pfx_validlifetime == VAR_3) ?
     "infinity" : FUNC_4(VAR_5->pfx_validlifetime, VAR_7));

 if (VAR_5->pfx_vltimeexpire > 0)
  FUNC_2("(expire: %s)",
      ((long)VAR_5->pfx_vltimeexpire > VAR_8.tv_sec) ?
      FUNC_4(VAR_5->pfx_vltimeexpire - VAR_8.tv_sec, VAR_7) :
      "0");

 FUNC_2(",");

 FUNC_2(" pltime=%s",
     (VAR_5->pfx_preflifetime == VAR_3) ?
     "infinity" : FUNC_4(VAR_5->pfx_preflifetime, VAR_7));

 if (VAR_5->pfx_pltimeexpire > 0)
  FUNC_2("(expire %s)",
      ((long)VAR_5->pfx_pltimeexpire > VAR_8.tv_sec) ?
      FUNC_4(VAR_5->pfx_pltimeexpire - VAR_8.tv_sec, VAR_7) :
      "0");

 FUNC_2(",");

 FUNC_2(" flags=");
 if (VAR_5->pfx_onlinkflg || VAR_5->pfx_autoconfflg) {
  FUNC_2("%s", VAR_5->pfx_onlinkflg ? "L" : "");
  FUNC_2("%s", VAR_5->pfx_autoconfflg ? "A" : "");
 } else
  FUNC_2("<none>");

 if (VAR_5->pfx_timer) {
  struct timespec *VAR_9;

  VAR_9 = FUNC_3(VAR_5->pfx_timer);
  if (VAR_9) {
   FUNC_2(" expire=%s", FUNC_4(VAR_9->tv_sec, VAR_7));
  }
 }

 FUNC_2(")\n");

 return (0);
}
