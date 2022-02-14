
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int addr; } ;
struct TYPE_10__ {scalar_t__ rdstate; scalar_t__ wrstate; TYPE_1__ t; } ;
typedef TYPE_2__ conn ;
struct TYPE_11__ {int sx; TYPE_2__ outgoing; TYPE_2__ incoming; } ;
typedef TYPE_3__ client_ctx ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(client_ctx *VAR_3) {
  conn *VAR_4;
  conn *VAR_5;
  int VAR_6;

  VAR_4 = &VAR_3->incoming;
  VAR_5 = &VAR_3->outgoing;
  FUNC_0(VAR_4->rdstate == VAR_0);
  FUNC_0(VAR_4->wrstate == VAR_0);
  FUNC_0(VAR_5->rdstate == VAR_0);
  FUNC_0(VAR_5->wrstate == VAR_0);

  if (!FUNC_1(VAR_3->sx, VAR_3, &VAR_5->t.addr)) {
    FUNC_6("connection not allowed by ruleset");

    FUNC_3(VAR_4, "\5\2\0\1\0\0\0\0\0\0", 10);
    return VAR_1;
  }

  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 != 0) {
    FUNC_5("connect error: %s\n", FUNC_7(VAR_6));
    return FUNC_4(VAR_3);
  }

  return VAR_2;
}
