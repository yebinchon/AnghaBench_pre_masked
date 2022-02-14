
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ cmd; scalar_t__ atyp; scalar_t__ daddr; int dport; } ;
typedef TYPE_2__ s5_ctx ;
struct TYPE_16__ {int sin6_addr; void* sin6_port; int sin6_family; int sin_addr; void* sin_port; int sin_family; } ;
struct TYPE_12__ {TYPE_6__ addr6; TYPE_6__ addr4; scalar_t__ buf; } ;
struct TYPE_14__ {scalar_t__ rdstate; scalar_t__ wrstate; scalar_t__ result; TYPE_1__ t; } ;
typedef TYPE_3__ conn ;
struct TYPE_15__ {TYPE_3__ outgoing; TYPE_3__ incoming; TYPE_2__ parser; } ;
typedef TYPE_4__ client_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 int FUNC_9 (char*,unsigned int) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (TYPE_2__*,int **,size_t*) ;
 unsigned int FUNC_12 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(client_ctx *VAR_14) {
  conn *VAR_15;
  conn *VAR_16;
  s5_ctx *VAR_17;
  uint8_t *VAR_18;
  size_t VAR_19;
  int VAR_20;

  VAR_17 = &VAR_14->parser;
  VAR_15 = &VAR_14->incoming;
  VAR_16 = &VAR_14->outgoing;
  FUNC_0(VAR_15->rdstate == VAR_2);
  FUNC_0(VAR_15->wrstate == VAR_3);
  FUNC_0(VAR_16->rdstate == VAR_3);
  FUNC_0(VAR_16->wrstate == VAR_3);
  VAR_15->rdstate = VAR_3;

  if (VAR_15->result < 0) {
    FUNC_9("read error: %s", FUNC_13(VAR_15->result));
    return FUNC_4(VAR_14);
  }

  VAR_18 = (uint8_t *) VAR_15->t.buf;
  VAR_19 = (size_t) VAR_15->result;
  VAR_20 = FUNC_11(VAR_17, &VAR_18, &VAR_19);
  if (VAR_20 == VAR_11) {
    FUNC_3(VAR_15);
    return VAR_13;
  }

  if (VAR_19 != 0) {
    FUNC_9("junk in request %u", (unsigned) VAR_19);
    return FUNC_4(VAR_14);
  }

  if (VAR_20 != VAR_10) {
    FUNC_9("request error: %s", FUNC_12(VAR_20));
    return FUNC_4(VAR_14);
  }

  if (VAR_17->cmd == VAR_7) {

    FUNC_10("BIND requests are not supported.");
    return FUNC_4(VAR_14);
  }

  if (VAR_17->cmd == VAR_9) {



    FUNC_10("UDP ASSOC requests are not supported.");
    return FUNC_4(VAR_14);
  }
  FUNC_0(VAR_17->cmd == VAR_8);

  if (VAR_17->atyp == VAR_4) {
    FUNC_2(VAR_16, (const char *) VAR_17->daddr);
    return VAR_12;
  }

  if (VAR_17->atyp == VAR_5) {
    FUNC_8(&VAR_16->t.addr4, 0, sizeof(VAR_16->t.addr4));
    VAR_16->t.addr4.sin_family = VAR_0;
    VAR_16->t.addr4.sin_port = FUNC_6(VAR_17->dport);
    FUNC_7(&VAR_16->t.addr4.sin_addr,
           VAR_17->daddr,
           sizeof(VAR_16->t.addr4.sin_addr));
  } else if (VAR_17->atyp == VAR_6) {
    FUNC_8(&VAR_16->t.addr6, 0, sizeof(VAR_16->t.addr6));
    VAR_16->t.addr6.sin6_family = VAR_1;
    VAR_16->t.addr6.sin6_port = FUNC_6(VAR_17->dport);
    FUNC_7(&VAR_16->t.addr6.sin6_addr,
           VAR_17->daddr,
           sizeof(VAR_16->t.addr6.sin6_addr));
  } else {
    FUNC_1();
  }

  return FUNC_5(VAR_14);
}
