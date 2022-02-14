
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_len; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ autonomous; scalar_t__ onlink; } ;
struct TYPE_3__ {int sin6_len; } ;
struct in6_prefix {size_t advrtrs; int prefixlen; int flags; scalar_t__ vltime; scalar_t__ pltime; scalar_t__ expire; int refcnt; int if_index; TYPE_2__ raflags; TYPE_1__ prefix; } ;
struct in6_nbrinfo {int state; } ;
typedef int namebuf ;
typedef int mib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct sockaddr*,int ,char*,int,int *,int ,int const) ;
 struct in6_nbrinfo* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct timeval*,int ) ;
 char* FUNC_5 (int ,int ) ;
 int VAR_10 ;
 char* FUNC_6 (size_t) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (int*,int,char*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_11()
{
 int VAR_12[] = { VAR_0, VAR_9, VAR_2, VAR_1 };
 char *VAR_13;
 struct in6_prefix *VAR_14, *VAR_15, *VAR_16;
 struct sockaddr_in6 *VAR_17;
 size_t VAR_18;
 struct timeval VAR_19;
 const int VAR_20 = VAR_8;
 int VAR_21 = VAR_11 ? VAR_8 : 0;
 char VAR_22[VAR_7];

 if (FUNC_10(VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]), ((void*)0), &VAR_18, ((void*)0), 0) < 0) {
  FUNC_0(1, "sysctl(ICMPV6CTL_ND6_PRLIST)");

 }
 VAR_13 = FUNC_6(VAR_18);
 if (!VAR_13) {
  FUNC_0(1, "malloc");

 }
 if (FUNC_10(VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]), VAR_13, &VAR_18, ((void*)0), 0) < 0) {
  FUNC_0(1, "sysctl(ICMPV6CTL_ND6_PRLIST)");

 }

 VAR_15 = (struct in6_prefix *)(VAR_13 + VAR_18);
 for (VAR_14 = (struct in6_prefix *)VAR_13; VAR_14 < VAR_15; VAR_14 = VAR_16) {
  VAR_17 = (struct sockaddr_in6 *)(VAR_14 + 1);
  VAR_16 = (struct in6_prefix *)&VAR_17[VAR_14->advrtrs];

  if (FUNC_2((struct sockaddr *)&VAR_14->prefix,
      VAR_14->prefix.sin6_len, VAR_22, sizeof(VAR_22),
      ((void*)0), 0, VAR_20) != 0)
   FUNC_9(VAR_22, "?", sizeof(VAR_22));
  FUNC_7("%s/%d if=%s\n", VAR_22, VAR_14->prefixlen,
      FUNC_5(VAR_14->if_index, VAR_10));

  FUNC_4(&VAR_19, 0);




  FUNC_7("flags=%s%s%s%s%s",
      VAR_14->raflags.onlink ? "L" : "",
      VAR_14->raflags.autonomous ? "A" : "",
      (VAR_14->flags & VAR_6) != 0 ? "O" : "",
      (VAR_14->flags & VAR_4) != 0 ? "D" : "",



      ""

      );
  if (VAR_14->vltime == VAR_3)
   FUNC_7(" vltime=infinity");
  else
   FUNC_7(" vltime=%lu", (unsigned long)VAR_14->vltime);
  if (VAR_14->pltime == VAR_3)
   FUNC_7(", pltime=infinity");
  else
   FUNC_7(", pltime=%lu", (unsigned long)VAR_14->pltime);
  if (VAR_14->expire == 0)
   FUNC_7(", expire=Never");
  else if (VAR_14->expire >= VAR_19.tv_sec)
   FUNC_7(", expire=%s",
       FUNC_8(VAR_14->expire - VAR_19.tv_sec));
  else
   FUNC_7(", expired");
  FUNC_7(", ref=%d", VAR_14->refcnt);
  FUNC_7("\n");




  if (VAR_14->advrtrs) {
   int VAR_23;
   struct sockaddr_in6 *VAR_24;

   VAR_24 = VAR_17;
   FUNC_7("  advertised by\n");
   for (VAR_23 = 0; VAR_23 < VAR_14->advrtrs; VAR_23++) {
    struct in6_nbrinfo *VAR_25;

    if (FUNC_2((struct sockaddr *)VAR_24,
        VAR_24->sin6_len, VAR_22, sizeof(VAR_22),
        ((void*)0), 0, VAR_21) != 0)
     FUNC_9(VAR_22, "?", sizeof(VAR_22));
    FUNC_7("    %s", VAR_22);

    VAR_25 = FUNC_3(&VAR_24->sin6_addr,
        VAR_14->if_index, 0);
    if (VAR_25) {
     switch (VAR_25->state) {
     case 129:
     case 128:
     case 131:
     case 130:
      FUNC_7(" (reachable)\n");
      break;
     default:
      FUNC_7(" (unreachable)\n");
     }
    } else
     FUNC_7(" (no neighbor state)\n");
    VAR_24++;
   }
  } else
   FUNC_7("  No advertising router\n");
 }
 FUNC_1(VAR_13);
}
