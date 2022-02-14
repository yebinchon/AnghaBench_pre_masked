
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ rmx_mtu; scalar_t__ rmx_expire; int rmx_pksent; } ;
struct rt_msghdr {int rtm_addrs; size_t rtm_index; TYPE_1__ rtm_rmx; int rtm_flags; } ;
typedef int prettyname ;
typedef int buffer ;
struct TYPE_6__ {char* ifname; } ;
struct TYPE_5__ {scalar_t__ tv_sec; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr*) ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,struct sockaddr*,struct sockaddr*,int ,scalar_t__) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_2__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_16, struct rt_msghdr *VAR_17)
{
 struct sockaddr *VAR_18, *VAR_19[VAR_2];
 char VAR_20[128];
 char VAR_21[128];
 int VAR_22, VAR_23;

 FUNC_8(VAR_16);
 VAR_18 = (struct sockaddr *)(VAR_17 + 1);
 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  if (VAR_17->rtm_addrs & (1 << VAR_22)) {
   VAR_19[VAR_22] = VAR_18;
   VAR_18 = (struct sockaddr *)((char *)VAR_18 + FUNC_0(VAR_18));
  }
 }

 VAR_23 = FUNC_3("destination", VAR_19[VAR_0],
     VAR_19[VAR_3],
     VAR_17->rtm_flags, VAR_9);
 VAR_23 = FUNC_3("gateway", VAR_19[VAR_1], ((void*)0), VAR_4,
     VAR_12 - VAR_23);
 FUNC_4(VAR_20, sizeof(VAR_20), "{[:-%d}{:flags/%%s}{]:} ",
     VAR_11 - VAR_23);
 FUNC_2(VAR_17->rtm_flags, VAR_20);
 if (VAR_5) {
  FUNC_7("{t:use/%*lu} ", VAR_15, VAR_17->rtm_rmx.rmx_pksent);

  if (VAR_17->rtm_rmx.rmx_mtu != 0)
   FUNC_7("{t:mtu/%*lu} ", VAR_14, VAR_17->rtm_rmx.rmx_mtu);
  else
   FUNC_7("{P:/%*s} ", VAR_14, "");
 }

 FUNC_1(VAR_21, 0, sizeof(VAR_21));
 if (VAR_17->rtm_index < VAR_7) {
  FUNC_5(VAR_21, VAR_6[VAR_17->rtm_index].ifname,
      sizeof(VAR_21));
  if (*VAR_21 == '\0')
   FUNC_5(VAR_21, "---", sizeof(VAR_21));
 }

 if (VAR_5)
  FUNC_7("{t:interface-name/%*s}", VAR_13, VAR_21);
 else
  FUNC_7("{t:interface-name/%*.*s}", VAR_13, VAR_13,
      VAR_21);
 if (VAR_17->rtm_rmx.rmx_expire) {
  time_t VAR_24;

  if ((VAR_24 = VAR_17->rtm_rmx.rmx_expire - VAR_8.tv_sec) > 0)
   FUNC_7(" {:expire-time/%*d}", VAR_10,
       (int)VAR_24);
 }

 FUNC_7("\n");
 FUNC_6(VAR_16);
}
