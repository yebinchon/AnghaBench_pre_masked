
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int s5_ctx ;
struct TYPE_10__ {scalar_t__ buf; } ;
struct TYPE_11__ {scalar_t__ rdstate; scalar_t__ wrstate; scalar_t__ result; TYPE_1__ t; } ;
typedef TYPE_2__ conn ;
struct TYPE_12__ {int sx; TYPE_2__ incoming; int parser; } ;
typedef TYPE_3__ client_ctx ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char*,...) ;
 unsigned int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,int **,size_t*) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(client_ctx *VAR_9) {
  unsigned int VAR_10;
  conn *VAR_11;
  s5_ctx *VAR_12;
  uint8_t *VAR_13;
  size_t VAR_14;
  int VAR_15;

  VAR_12 = &VAR_9->parser;
  VAR_11 = &VAR_9->incoming;
  FUNC_0(VAR_11->rdstate == VAR_2);
  FUNC_0(VAR_11->wrstate == VAR_3);
  VAR_11->rdstate = VAR_3;

  if (VAR_11->result < 0) {
    FUNC_6("read error: %s", FUNC_11(VAR_11->result));
    return FUNC_5(VAR_9);
  }

  VAR_13 = (uint8_t *) VAR_11->t.buf;
  VAR_14 = (size_t) VAR_11->result;
  VAR_15 = FUNC_8(VAR_12, &VAR_13, &VAR_14);
  if (VAR_15 == VAR_5) {
    FUNC_3(VAR_11);
    return VAR_6;
  }

  if (VAR_14 != 0) {




    FUNC_6("junk in handshake");
    return FUNC_5(VAR_9);
  }

  if (VAR_15 != VAR_4) {
    FUNC_6("handshake error: %s", FUNC_10(VAR_15));
    return FUNC_5(VAR_9);
  }

  VAR_10 = FUNC_7(VAR_12);
  if ((VAR_10 & VAR_0) && FUNC_1(VAR_9->sx, VAR_9)) {
    FUNC_9(VAR_12, VAR_0);
    FUNC_4(VAR_11, "\5\0", 2);
    return VAR_8;
  }

  if ((VAR_10 & VAR_1) && FUNC_2(VAR_9->sx, VAR_9)) {

  }

  FUNC_4(VAR_11, "\5\377", 2);
  return VAR_7;
}
