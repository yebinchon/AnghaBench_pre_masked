
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_storage {int ss_len; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {scalar_t__ rmx_sendpipe; scalar_t__ rmx_recvpipe; } ;
struct TYPE_10__ {int rtm_type; int rtm_flags; int rtm_msglen; scalar_t__ rtm_errno; int rtm_addrs; int rtm_inits; TYPE_1__ rtm_rmx; int rtm_pid; scalar_t__ rtm_seq; int rtm_version; } ;
struct rtmsg {char* m_space; TYPE_5__ m_rtm; } ;
struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct TYPE_7__ {scalar_t__ sendpipe; scalar_t__ recvpipe; } ;
struct TYPE_8__ {TYPE_2__ cfg; } ;
struct bundle {TYPE_4__* iface; TYPE_3__ ncp; scalar_t__ routing_seq; } ;
struct TYPE_9__ {int index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int,struct rtmsg*,int) ;
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
 int FUNC_2 (struct sockaddr*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_23 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,struct sockaddr_storage*,int ) ;
 int FUNC_8 (struct rtmsg*,char,int) ;
 int FUNC_9 (struct ncpaddr const*,struct sockaddr_storage*) ;
 scalar_t__ FUNC_10 (struct ncpaddr const*) ;
 char* FUNC_11 (struct ncpaddr const*) ;
 int FUNC_12 (struct ncprange const*,struct sockaddr_storage*,struct sockaddr_storage*) ;
 int FUNC_13 (struct ncprange const*) ;
 int FUNC_14 (struct ncprange const*) ;
 int FUNC_15 (char*,int,char*,...) ;
 int FUNC_16 (scalar_t__) ;

int
FUNC_17(struct bundle *VAR_24, int VAR_25, const struct ncprange *VAR_26,
       const struct ncpaddr *VAR_27, int VAR_28, int VAR_29)
{
  struct rtmsg VAR_30;
  int VAR_31, VAR_32, VAR_33;
  char *VAR_34;
  const char *VAR_35;
  struct sockaddr_storage VAR_36, VAR_37, VAR_38;
  int VAR_39 = 1;

  if (VAR_28)
    VAR_35 = (VAR_25 == VAR_16 ? "Add!" : "Delete!");
  else
    VAR_35 = (VAR_25 == VAR_16 ? "Add" : "Delete");
  VAR_31 = FUNC_0(VAR_8, VAR_22, 0);
  if (VAR_31 < 0) {
    FUNC_6(VAR_4, "rt_Set: socket(): %s\n", FUNC_16(VAR_23));
    return VAR_39;
  }
  FUNC_8(&VAR_30, '\0', sizeof VAR_30);
  VAR_30.m_rtm.rtm_version = VAR_19;
  VAR_30.m_rtm.rtm_type = VAR_25;
  VAR_30.m_rtm.rtm_addrs = VAR_9;
  VAR_30.m_rtm.rtm_seq = ++VAR_24->routing_seq;
  VAR_30.m_rtm.rtm_pid = FUNC_4();
  VAR_30.m_rtm.rtm_flags = VAR_15 | VAR_12 | VAR_14;

  if (VAR_25 == VAR_16) {
    if (VAR_24->ncp.cfg.sendpipe > 0) {
      VAR_30.m_rtm.rtm_rmx.rmx_sendpipe = VAR_24->ncp.cfg.sendpipe;
      VAR_30.m_rtm.rtm_inits |= VAR_21;
    }
    if (VAR_24->ncp.cfg.recvpipe > 0) {
      VAR_30.m_rtm.rtm_rmx.rmx_recvpipe = VAR_24->ncp.cfg.recvpipe;
      VAR_30.m_rtm.rtm_inits |= VAR_20;
    }
  }

  FUNC_12(VAR_26, &VAR_36, &VAR_37);




  VAR_34 = VAR_30.m_space;
  VAR_34 += FUNC_7(VAR_34, &VAR_36, VAR_36.ss_len);
  if (VAR_25 == VAR_16) {
    if (VAR_27 == ((void*)0)) {
      FUNC_6(VAR_4, "rt_Set: Program error\n");
      FUNC_3(VAR_31);
      return VAR_39;
    }
    FUNC_9(VAR_27, &VAR_38);



    if (FUNC_10(VAR_27)) {
      if (!VAR_29)
        FUNC_6(VAR_4, "rt_Set: Cannot add a route with"
                   " gateway 0.0.0.0\n");
      FUNC_3(VAR_31);
      return VAR_39;
    } else {
      VAR_34 += FUNC_7(VAR_34, &VAR_38, VAR_38.ss_len);
      VAR_30.m_rtm.rtm_addrs |= VAR_10;
    }
  }

  if (!FUNC_13(VAR_26)) {
    VAR_34 += FUNC_7(VAR_34, &VAR_37, VAR_37.ss_len);
    VAR_30.m_rtm.rtm_addrs |= VAR_11;
  } else
    VAR_30.m_rtm.rtm_flags |= VAR_13;

  VAR_32 = VAR_34 - (char *)&VAR_30;
  VAR_30.m_rtm.rtm_msglen = VAR_32;
  VAR_33 = FUNC_1(VAR_31, &VAR_30, VAR_32);
  if (VAR_33 < 0) {
    FUNC_6(VAR_5, "rt_Set failure:\n");
    FUNC_6(VAR_5, "rt_Set:  Cmd = %s\n", VAR_35);
    FUNC_6(VAR_5, "rt_Set:  Dst = %s\n", FUNC_14(VAR_26));
    if (VAR_27 != ((void*)0))
      FUNC_6(VAR_5, "rt_Set:  Gateway = %s\n", FUNC_11(VAR_27));
failed:
    if (VAR_25 == VAR_16 && (VAR_30.m_rtm.rtm_errno == VAR_0 ||
                           (VAR_30.m_rtm.rtm_errno == 0 && VAR_23 == VAR_0))) {
      if (!VAR_28) {
        FUNC_6(VAR_6, "Add route failed: %s already exists\n",
     FUNC_14(VAR_26));
        VAR_39 = 0;
      } else {
        VAR_30.m_rtm.rtm_type = VAR_25 = VAR_17;
        if ((VAR_33 = FUNC_1(VAR_31, &VAR_30, VAR_32)) < 0)
          goto failed;
      }
    } else if (VAR_25 == VAR_18 &&
             (VAR_30.m_rtm.rtm_errno == VAR_2 ||
              (VAR_30.m_rtm.rtm_errno == 0 && VAR_23 == VAR_2))) {
      if (!VAR_28)
        FUNC_6(VAR_6, "Del route failed: %s: Non-existent\n",
                  FUNC_14(VAR_26));
    } else if (VAR_30.m_rtm.rtm_errno == 0) {
      if (!VAR_29 || VAR_23 != VAR_1)
        FUNC_6(VAR_6, "%s route failed: %s: errno: %s\n", VAR_35,
                   FUNC_14(VAR_26), FUNC_16(VAR_23));
    } else
      FUNC_6(VAR_6, "%s route failed: %s: %s\n",
   VAR_35, FUNC_14(VAR_26), FUNC_16(VAR_30.m_rtm.rtm_errno));
  }

  if (FUNC_5(VAR_3)) {
    char VAR_40[VAR_7];

    if (VAR_27)
      FUNC_15(VAR_40, sizeof VAR_40, "%s", FUNC_11(VAR_27));
    else
      FUNC_15(VAR_40, sizeof VAR_40, "<none>");
    FUNC_6(VAR_3, "wrote %d: cmd = %s, dst = %s, gateway = %s\n",
               VAR_33, VAR_35, FUNC_14(VAR_26), VAR_40);
  }
  FUNC_3(VAR_31);

  return VAR_39;
}
