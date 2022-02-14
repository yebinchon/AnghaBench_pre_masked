
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct mppe_state {int cohnum; int flushrequired; int rc4key; int sesskey; int keylen; scalar_t__ stateless; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int reqid; } ;
struct ccp {int compin; int uncompin; TYPE_1__ fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct mbuf*) ;
 int VAR_4 ;
 int FUNC_1 (struct mppe_state*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *,int,char*,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ,char*,struct mbuf*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*,int*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static struct mbuf *
FUNC_11(void *VAR_12, struct ccp *VAR_13, u_short *VAR_14, struct mbuf *VAR_15)
{
  struct mppe_state *VAR_16 = (struct mppe_state *)VAR_12;
  u_short VAR_17;
  char *VAR_18;
  int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

  VAR_21 = FUNC_8(VAR_15);
  VAR_19 = 0;
  VAR_13->compin += VAR_21;

  FUNC_6(VAR_2, "MPPE: Input: Proto %02x (%d bytes)\n", *VAR_14, VAR_21);
  FUNC_5(VAR_2, "MPPE: Input: Packet:", VAR_15);

  VAR_15 = FUNC_9(VAR_15, &VAR_17, 2);
  VAR_17 = FUNC_10(VAR_17);
  VAR_20 = VAR_17 & VAR_6;
  VAR_17 &= ~VAR_20;
  if ((VAR_17 & VAR_7) != VAR_5) {
    FUNC_6(VAR_3, "MPPE: Input: Invalid packet (flags = 0x%x)\n",
               (VAR_17 & VAR_7) | VAR_20);
    FUNC_7(VAR_15);
    return ((void*)0);
  }

  VAR_17 &= ~VAR_7;

  if (!VAR_20 && VAR_16->stateless) {
    FUNC_6(VAR_1, "MPPEInput: Packet without MPPE_FLUSHED set"
               " in stateless mode\n");
    VAR_20 = VAR_6;

  }

  if (VAR_16->stateless) {

    while (VAR_17 != VAR_16->cohnum) {
      FUNC_6(VAR_2, "MPPEInput: Key changed [%u]\n", VAR_17);
      FUNC_1(VAR_16);




      VAR_16->cohnum++;
      VAR_16->cohnum &= ~VAR_7;
    }
    VAR_19 = 1;
  } else {
    if (VAR_20) {




      VAR_23 = (VAR_17 >> VAR_10) -
          (VAR_16->cohnum >> VAR_10);
      if (VAR_23 < 0)
        VAR_23 += VAR_11;
      while (VAR_23--) {
        FUNC_6(VAR_2, "MPPEInput: Key changed during catchup [%u]\n",
                   VAR_17);
        FUNC_1(VAR_16);
      }
      VAR_16->flushrequired = 0;
      VAR_16->cohnum = VAR_17;
      VAR_19 = 1;
    }

    if (VAR_16->flushrequired) {





      FUNC_6(VAR_2, "MPPE: Not flushed - discarded\n");
      FUNC_4(&VAR_13->fsm, VAR_0, VAR_13->fsm.reqid++, ((void*)0), 0,
                 VAR_4);
      FUNC_7(VAR_15);
      return ((void*)0);
    }

    if (VAR_17 != VAR_16->cohnum) {






      FUNC_6(VAR_1, "MPPE: Input: Got seq %u, not %u\n",
                 VAR_17, VAR_16->cohnum);
      FUNC_4(&VAR_13->fsm, VAR_0, VAR_13->fsm.reqid++, ((void*)0), 0,
                 VAR_4);
      VAR_16->flushrequired = 1;
      FUNC_7(VAR_15);
      return ((void*)0);
    }

    if ((VAR_17 & VAR_9) == VAR_8) {
      FUNC_6(VAR_2, "MPPEInput: Key changed [%u]\n", VAR_17);
      FUNC_1(VAR_16);
      VAR_19 = 1;
    } else if (VAR_20)
      VAR_19 = 1;





    VAR_16->cohnum++;
    VAR_16->cohnum &= ~VAR_7;
  }

  if (VAR_19) {
    FUNC_6(VAR_2, "MPPEInput: Dictionary initialised [%u]\n", VAR_17);
    FUNC_3(&VAR_16->rc4key, VAR_16->keylen, VAR_16->sesskey);
  }

  VAR_15 = FUNC_9(VAR_15, VAR_14, 2);
  FUNC_2(&VAR_16->rc4key, 2, (char *)VAR_14, (char *)VAR_14);
  *VAR_14 = FUNC_10(*VAR_14);

  VAR_18 = FUNC_0(VAR_15);
  VAR_22 = FUNC_8(VAR_15);
  FUNC_2(&VAR_16->rc4key, VAR_22, VAR_18, VAR_18);

  FUNC_6(VAR_2, "MPPEInput: Decrypted: Proto %02x (%d bytes)\n",
             *VAR_14, VAR_22);
  FUNC_5(VAR_2, "MPPEInput: Decrypted: Packet:", VAR_15);

  VAR_13->uncompin += VAR_22;

  return VAR_15;
}
